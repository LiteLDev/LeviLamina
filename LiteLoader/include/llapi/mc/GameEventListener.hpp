/**
 * @file  GameEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventListener.
 *
 */
class GameEventListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTLISTENER
public:
    class GameEventListener& operator=(class GameEventListener const &) = delete;
    GameEventListener(class GameEventListener const &) = delete;
    GameEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEEVENTLISTENER
    /**
     * @hash   578319156
     * @symbol ?getDeliveryMode@GameEventListener@@UEBA?AW4DeliveryMode@1@XZ
     */
    MCVAPI enum GameEventListener::DeliveryMode getDeliveryMode() const;
#endif

};