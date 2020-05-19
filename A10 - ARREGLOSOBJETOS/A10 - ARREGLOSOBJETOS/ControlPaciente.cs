using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace A10___ARREGLOSOBJETOS
{
    class ControlPaciente
    {
        public Paciente[] Pacientes { get; set; }
        public Paciente[] BuscarApellidoP(String apellidoPaterno)
        {
            int j = 0;
            for (int i = 0; i < Pacientes.Length; i++)
            {
                if (Pacientes[i].ApellidoP == apellidoPaterno)
                {
                    j++;
                }
            }
            int k = 0;
            Paciente[] pacientesChidos = new Paciente[j];
            for (int i = 0; i < Pacientes.Length; i++)
            {
                if (Pacientes[i].ApellidoP == apellidoPaterno)
                {
                    pacientesChidos[k] = Pacientes[i];
                    k++;
                }
            }
            return pacientesChidos;
        }
    }
}
