#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/actor/player/PlayerPartyInfo.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PartyChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::std::optional<::PlayerPartyInfo>> mPartyInfo;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>         mPlayer;
    // NOLINTEND
};
