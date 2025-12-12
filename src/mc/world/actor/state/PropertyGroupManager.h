#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class HashedString;
class PropertyGroup;
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

    MCNAPI_C void ingestActorPropertyDataTag(::CompoundTag const& propertyData);

    MCNAPI_C void registerGroup(::HashedString const& id, ::std::shared_ptr<::PropertyGroup const> group);

    MCNAPI void tryInitPropertiesOnActor(::Actor& actor) const;
    // NOLINTEND
};
