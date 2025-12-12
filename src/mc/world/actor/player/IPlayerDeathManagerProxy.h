#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
// clang-format on

class IPlayerDeathManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlayerDeathManagerProxy() = default;

    virtual ::Actor* fetchActor(::ActorUniqueID) const = 0;

    virtual bool shouldShowDeathMessages() const = 0;

    virtual void onWorldOwnerHasDied() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
