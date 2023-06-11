/**
 * @file  ExitVehicleSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ExitVehicleSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXITVEHICLESYSTEM
public:
    class ExitVehicleSystem& operator=(class ExitVehicleSystem const &) = delete;
    ExitVehicleSystem(class ExitVehicleSystem const &) = delete;
    ExitVehicleSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ExitVehicleSystem\@\@SA?AUTickingSystemWithInfo\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static struct TickingSystemWithInfo createSystem(class BaseGameVersion const &);

};
