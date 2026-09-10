#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

struct VisibilityCacheComponent {
public:
    // VisibilityCacheComponent inner types define
    using ActorSet = ::std::unordered_set<::ActorUniqueID>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>> mSeen;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>> mUnseen;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~VisibilityCacheComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
