#include <iostream>
using namespace std;
int main()
{
    int cantidadEstudiantes;
    double sumaCalificaciones = 0;
    double promedio;
    string nombreEstudiante;
    double calificacionEstudiante;
    
    cout <<"Ingrese la cantidad total de estudiante en el grupo(no mas de 10):";
    cin >> cantidadEstudiantes;

    if(cantidadEstudiantes > 10 || cantidadEstudiantes <= 0){
        cout <<"La cantidad de estudiantes debe ser un numero entre 1 y 10."<<endl;
        return 1;
    }

    for (int i = 0; i <= cantidadEstudiantes; ++i){
    
        cout <<"Estudiante #"<<i<<":"<<endl;
        cout <<"Ingrese el nombre del estudiante:";
        cin >>nombreEstudiante;
        cout <<"Ingrese la puntuacion de" <<nombreEstudiante<<":";
        cin >>calificacionEstudiante;
        sumaCalificaciones += calificacionEstudiante;
    }
    
    promedio = sumaCalificaciones/cantidadEstudiantes;

    cout <<"El promedio general de las calificacion del grupo es: "<< promedio <<endl;
    return 0;
}