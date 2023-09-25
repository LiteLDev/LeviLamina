/**
 * @file  GameEventListenerRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventListenerRegistry.
 *
 */
class GameEventListenerRegistry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTLISTENERREGISTRY
public:
    class GameEventListenerRegistry& operator=(class GameEventListenerRegistry const &) = delete;
    GameEventListenerRegistry(class GameEventListenerRegistry const &) = delete;
    GameEventListenerRegistry() = delete;
#endif

public:
    /**
     * @symbol ?registerListener\@GameEventListenerRegistry\@\@QEAA?AV?$final_action\@V?$function\@$$A6AXXZ\@std\@\@\@gsl\@\@AEAVGameEventListener\@\@\@Z
     */
    MCAPI class gsl::final_action<class std::function<void (void)>> registerListener(class GameEventListener &);

};
