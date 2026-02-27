#include "ejemplo/ejemplo.h"

#include <cspecs/cspec.h>

context (calculadora_tests) {

  describe("Operaciones Básicas") {

    it("debería sumar dos números correctamente") {
      should_int(Sumar(2, 2)) be equal to(4);
      should_int(Sumar(-1, 5)) be equal to(4);
    } end

    it("debería restar dos números correctamente") {
      should_int(Restar(10, 4)) be equal to(6);
      should_int(Restar(0, 5)) be equal to(-5);
    } end

  } end

  describe("Operaciones Complejas") {

    it("debería multiplicar correctamente") {
      should_int(Multiplicar(3, 3)) be equal to(9);
      should_int(Multiplicar(5, 0)) be equal to(0);
    } end

    it("debería dividir correctamente") {
      should_float(Dividir(10.0, 2.0)) be equal to(5.0);
    } end

    it("debería devolver 0 al dividir por cero") {
      should_float(Dividir(5.0, 0.0)) be equal to(0.0);
    } end

  } end
}
