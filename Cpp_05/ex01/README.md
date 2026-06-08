# ex01 — Form

Descripción
- Implementación de la clase `Form` (no abstracta) y la interacción con `Bureaucrat`.

Qué se ha hecho
- Constructores, operador= y destructor para `Form`.
- Atributos: `name`, `is_signed`, `sign_grade`, `exec_grade`.
- Método `beSigned(const Bureaucrat&)` que valida el `grade` del firmante.
- Excepciones: `GradeTooHighException`, `GradeTooLowException`.

Conceptos trabajados
- Relaciones entre clases mediante forward declaration (`class Form;` y `class Bureaucrat;`).
- Control de acceso y validación de condiciones (precondiciones).
- Uso de `std::ostream` para representación de objetos.

Cómo compilar y ejecutar
1. Entrar en el directorio: `cd ex01`
2. `make`
3. Ejecutable: `./form`

Notas
- Comprueba que `beSigned` lanza correctamente excepciones cuando corresponde y que los mensajes coinciden con los tests.
