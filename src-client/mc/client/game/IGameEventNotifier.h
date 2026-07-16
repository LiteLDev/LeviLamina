#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"

class IGameEventNotifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameEventNotifier() = default;

    virtual void onGameEventNotification(::ui::GameEventNotification) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
