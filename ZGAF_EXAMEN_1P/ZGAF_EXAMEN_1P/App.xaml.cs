using System;
using Xamarin.Forms;
using Xamarin.Forms.Xaml;
using ZGAF_EXAMEN_1P.Views;

namespace ZGAF_EXAMEN_1P
{
    public partial class App : Application
    {
        public App()
        {
            InitializeComponent();

            MainPage = new NavigationPage(new ProductsPage());
        }

        protected override void OnStart()
        {
        }

        protected override void OnSleep()
        {
        }

        protected override void OnResume()
        {
        }
    }
}
