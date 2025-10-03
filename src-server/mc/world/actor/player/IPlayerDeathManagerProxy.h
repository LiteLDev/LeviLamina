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
    // vIndex: 0
    virtual ~IPlayerDeathManagerProxy() = default;

    // vIndex: 1
    virtual ::Actor* fetchActor(::ActorUniqueID) const = 0;

    // vIndex: 2
    virtual bool shouldShowDeathMessages() const = 0;

    // vIndex: 3
    virtual void onWorldOwnerHasDied() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
