#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class HashedString;
// clang-format on

class PropertyGroupManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk64dcbf;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyGroupManager& operator=(PropertyGroupManager const&);
    PropertyGroupManager(PropertyGroupManager const&);
    PropertyGroupManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CompoundTag getActorPropertyDataTag(::HashedString const& actorCanonicalName) const;

    MCNAPI void tryInitPropertiesOnActor(::Actor& actor) const;
    // NOLINTEND

};
