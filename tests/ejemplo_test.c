#include "ejemplo/ejemplo.h"

#include <cspecs/cspec.h>

context (calculadora_tests) {

  describe("Operaciones Básicas") {

    it("debería sumar dos números correctamente") {
      should_int(sumar(2, 2)) be equal to(4);
      should_int(sumar(-1, 5)) be equal to(4);
    } end

    it("debería restar dos números correctamente") {
      should_int(restar(10, 4)) be equal to(6);
      should_int(restar(0, 5)) be equal to(-5);
    } end

  } end

  describe("Operaciones Complejas") {

    it("debería multiplicar correctamente") {
      should_int(multiplicar(3, 3)) be equal to(9);
      should_int(multiplicar(5, 0)) be equal to(0);
    } end

    it("debería dividir correctamente") {
      should_float(dividir(10.0, 2.0)) be equal to(5.0);
    } end

    it("debería devolver 0 al dividir por cero") {
      should_float(dividir(5.0, 0.0)) be equal to(0.0);
    } end

  } end
}
