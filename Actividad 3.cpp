
#include <iostream>

int main()
{
    sql_connection conn;
    conn.connect("localhost", "Empleados");


    string query = "SELECT Numero, Puesto, Nombre, Apellido_paterno, Apellido_materno, Fecha_nacimiento, RFC, Centro_trabajo FROM Empleado";

    sql_result result = conn.execute_query(query);

    while (result.next_row())

    {
        cout << "Numero: " << result.get_int("numero") << endl;
        cout << "Puesto: " << result.get_string("puesto") << endl;
        cout << "Nombre: " << result.get_string("nombre") << endl;
        cout << "Apellido_paterno: " << result.get_string("apellido_paterno") << endl;
        cout << "Apellido_materno: " << result.get_string("apellido_materno") << endl;
        cout << "fecha nacimiento: " << result.get_string("fecha_nacimiento") << endl;
        cout << "RFC: " << result.get_string("RFC") << endl;
        cout << "Centro Trabajo: " << result.get_string("centro_trabajo") << endl;
        cout << "---------------" << endl;

        getchar();

    }

    return 0;
    
}