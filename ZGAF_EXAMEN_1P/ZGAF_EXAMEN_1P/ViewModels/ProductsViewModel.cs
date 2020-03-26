using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Text;
using Xamarin.Forms;
using ZGAF_EXAMEN_1P.Models;
using ZGAF_EXAMEN_1P.Services;
using ZGAF_EXAMEN_1P.Views;

namespace ZGAF_EXAMEN_1P.ViewModels
{
    public class ProductsViewModel : BaseViewModel
    {
        static ProductsViewModel _instance;
        private List<ProductsModel> productsCartList = new List<ProductsModel>();
        private List<String> productsIDs = new List<String>();

        Command _compraCommand;
        public Command CompraCommand => _compraCommand ?? (_compraCommand = new Command(NewPurchase));

        Command _selectCommand;
        public Command SelectCommand => _selectCommand ?? (_selectCommand = new Command(SelectAction));

        Command _deleteCommand;
        public Command DeleteCommand => _deleteCommand ?? (_deleteCommand = new Command(DeleteCart));

        ProductsModel _productSelected;
        public ProductsModel ProductSelected
        {
            get => _productSelected;
            set => SetProperty(ref _productSelected, value);
        }

        ObservableCollection<ProductsModel> _products;
        public ObservableCollection<ProductsModel> Products
        {
            get => _products;
            set => SetProperty(ref _products, value);
        }

        public ProductsViewModel()
        {
            _instance = this;
            LoadProducts();
        }

        private async void LoadProducts()
        {
            ApiResponse response = await new ApiService().GetDataAsync<ProductsModel>("product");
            if (response == null || !response.IsSuccess)
            {
                await Application.Current.MainPage.DisplayAlert("Error al cargar los productos", response.Message, "Ok");
                return;
            }
            Products = (ObservableCollection<ProductsModel>)response.Result;
        }

        private async void NewPurchase()
        {
            DateTime dateCheckout = DateTime.Now;
            ApiResponse response = await new ApiService().PostDataAsync("cart", new CartModel
            {
                dateCheckout = dateCheckout,
                schoolID = "67664",
                studentName =  "Fabricio Zacarias Guzman",
                productsIDs = String.Join(", ", productsIDs)
            });
            if (response == null)
            {
                await Application.Current.MainPage.DisplayAlert("MercadoLibre Chafa", "Error al crear el viaje", "Ok");
                return;
            }
            if (!response.IsSuccess)
            {
                await Application.Current.MainPage.DisplayAlert("MercadoLibre Chafa", response.Message, "Ok");
                return;
            }
            await Application.Current.MainPage.DisplayAlert("MercadoLibre Chafa", response.Message, "Ok");
        }

        private async void SelectAction()
        {
            
            await Application.Current.MainPage.DisplayAlert("Su producto ha sido añadido al carrito", ProductSelected.productName, "Ok");
            productsCartList.Add(ProductSelected);
            productsIDs.Add(ProductSelected.idProduct.ToString());
        }

        private void DeleteCart()
        {
            Application.Current.MainPage.DisplayAlert("Su carrito ha sido vaciado", "Compra algo :(", "Ok");
            productsCartList.Clear();
            productsIDs.Clear();
        }
    }
}
