using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace A10___ARREGLOSOBJETOS
{
    class Program
    {
        static void Main(string[] args)
        {

            Paciente [] datos = new Paciente[5];
            Paciente paciente1 = new Paciente();
            ControlPaciente controlPaciente = new ControlPaciente();
            paciente1.Id = 1;
            paciente1.Nombre = "Juan";
            paciente1.ApellidoP = "Perez";
            Paciente paciente2 = new Paciente();
            paciente2.Id = 2;
            paciente2.Nombre = "Andrea";
            paciente2.ApellidoP = "Perez";
            Paciente paciente3 = new Paciente();
            paciente3.Id = 3;
            paciente3.Nombre = "Daniel";
            paciente3.ApellidoP = "Lozano";
            Paciente paciente4 = new Paciente();
            paciente4.Id = 4;
            paciente4.Nombre = "Luis";
            paciente4.ApellidoP = "Lozano";
            Paciente paciente5 = new Paciente();
            paciente5.Id = 5;
            paciente5.Nombre = "Fabricio";
            paciente5.ApellidoP = "Zacarías";
            datos[0] = paciente1;
            datos[1] = paciente2;
            datos[2] = paciente3;
            datos[3] = paciente4;
            datos[4] = paciente5;
            controlPaciente.Pacientes = datos;
            Console.WriteLine("Apellido a buscar");
            String apellidoP = Console.ReadLine();
            Console.WriteLine(controlPaciente.BuscarApellidoP(apellidoP));
            Console.ReadKey();
            Console.WriteLine("Tu gfa baila el humno nacional en tanga");
        }
    }
}
