#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"

class SubscribedObjectives {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayer;
    ::ll::TypedStorage<8, 16, ::std::set<::HashedString>> mObjectives;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool isSubscribed(::std::string const& objective) const;
    // NOLINTEND

};
