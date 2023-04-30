/**
 * @file  ScriptDeferredEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ScriptDeferredEventCoordinator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEFERREDEVENTCOORDINATOR
public:
    class ScriptDeferredEventCoordinator& operator=(class ScriptDeferredEventCoordinator const &) = delete;
    ScriptDeferredEventCoordinator(class ScriptDeferredEventCoordinator const &) = delete;
    ScriptDeferredEventCoordinator() = delete;
#endif

public:
    /**
     * @symbol ?sendAllDeferredEvents\@ScriptDeferredEventCoordinator\@\@QEAAXXZ
     */
    MCAPI void sendAllDeferredEvents();

};
