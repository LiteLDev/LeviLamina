#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"

class IGameEventNotifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameEventNotifier();

    virtual void onGameEventNotification(::ui::GameEventNotification notification) = 0;
    // NOLINTEND
};
