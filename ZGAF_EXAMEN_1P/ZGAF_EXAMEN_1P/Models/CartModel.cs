using System;
using System.Collections.Generic;
using System.Text;

namespace ZGAF_EXAMEN_1P.Models
{
    public class CartModel
    {
        public int idCart { get; set; }
        public DateTime dateCheckout { get; set; }
        public string schoolID { get; set; }
        public string studentName { get; set; }
        public string productsIDs { get; set; }
    }
}
