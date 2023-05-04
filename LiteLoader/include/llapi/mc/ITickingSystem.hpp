/**
 * @file  ITickingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ITickingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITICKINGSYSTEM
public:
    class ITickingSystem& operator=(class ITickingSystem const &) = delete;
    ITickingSystem(class ITickingSystem const &) = delete;
    ITickingSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITICKINGSYSTEM
    /**
     * @symbol ?singleTick\@ITickingSystem\@\@UEAAXAEAVEntityRegistry\@\@AEAVEntityContext\@\@\@Z
     */
    MCVAPI void singleTick(class EntityRegistry &, class EntityContext &);
#endif

};
