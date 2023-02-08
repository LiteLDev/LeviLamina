/**
 * @file  ScriptDeferredActionManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptDeferredActionManager.
 *
 */
class ScriptDeferredActionManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEFERREDACTIONMANAGER
public:
    class ScriptDeferredActionManager& operator=(class ScriptDeferredActionManager const &) = delete;
    ScriptDeferredActionManager(class ScriptDeferredActionManager const &) = delete;
    ScriptDeferredActionManager() = delete;
#endif

public:
    /**
     * @hash   1413936435
     * @symbol  ?executeActions\@ScriptDeferredActionManager\@\@QEAAXXZ
     */
    MCAPI void executeActions();
    /**
     * @hash   606373849
     * @symbol  ?rejectAll\@ScriptDeferredActionManager\@\@QEAAXXZ
     */
    MCAPI void rejectAll();
    /**
     * @hash   1439271305
     * @symbol  ??1ScriptDeferredActionManager\@\@QEAA\@XZ
     */
    MCAPI ~ScriptDeferredActionManager();

};