#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventListener {
public:
    // GameEventListener inner types declare
    // clang-format off

    // clang-format on

    // GameEventListener inner types define
    enum class DeliveryMode {};

public:
    // prevent constructor by default
    GameEventListener& operator=(GameEventListener const&) = delete;
    GameEventListener(GameEventListener const&)            = delete;
    GameEventListener()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEEVENTLISTENER
    /**
     * @symbol ?getDeliveryMode\@GameEventListener\@\@UEBA?AW4DeliveryMode\@1\@XZ
     */
    MCVAPI enum class GameEventListener::DeliveryMode getDeliveryMode() const; // NOLINT
#endif
};
