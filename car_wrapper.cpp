#include <ruby.h>
#include "rice/Data_Type.hpp"
#include "rice/Constructor.hpp"
#include "Car.hpp"

using namespace Rice;

extern "C"
void Init_car_wrapper()
{
    Data_Type<Car> rb_cCar =
        define_class<Car>("Car")
            .define_constructor(Constructor<Car>())
            .define_method("gas", &Car::gas)
            .define_method("stop", &Car::stop);
}
