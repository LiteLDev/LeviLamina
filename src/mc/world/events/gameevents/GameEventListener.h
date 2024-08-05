#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventListener {
public:
    // GameEventListener inner types define
    enum class DeliveryMode {};

public:
    // prevent constructor by default
    GameEventListener& operator=(GameEventListener const&);
    GameEventListener(GameEventListener const&);
    GameEventListener();

public:
    // NOLINTBEGIN
    MCVAPI ::GameEventListener::DeliveryMode getDeliveryMode() const;

    // NOLINTEND
};
