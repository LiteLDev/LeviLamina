/**
 * @file  ControlledByLocalInstanceSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ControlledByLocalInstanceSystem.
 *
 */
class ControlledByLocalInstanceSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTROLLEDBYLOCALINSTANCESYSTEM
public:
    class ControlledByLocalInstanceSystem& operator=(class ControlledByLocalInstanceSystem const &) = delete;
    ControlledByLocalInstanceSystem(class ControlledByLocalInstanceSystem const &) = delete;
    ControlledByLocalInstanceSystem() = delete;
#endif

public:
    /**
     * @hash   -95666774
     * @symbol ?createRecalculateControlledByLocalInstanceSystemClient@ControlledByLocalInstanceSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createRecalculateControlledByLocalInstanceSystemClient();
    /**
     * @hash   1096593834
     * @symbol ?createRecalculateControlledByLocalInstanceSystemServer@ControlledByLocalInstanceSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createRecalculateControlledByLocalInstanceSystemServer();
    /**
     * @hash   -1230694966
     * @symbol ?createWasControlledByLocalInstanceSystem@ControlledByLocalInstanceSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createWasControlledByLocalInstanceSystem();

};