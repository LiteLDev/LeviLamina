#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
// clang-format on

class ActorFetcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb1e281;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorFetcher& operator=(ActorFetcher const&);
    ActorFetcher(ActorFetcher const&);
    ActorFetcher();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Actor* fetchActorAllDimensions(::ActorUniqueID actorId, bool getRemoved) const;
    // NOLINTEND
};
