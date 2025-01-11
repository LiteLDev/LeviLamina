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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PropertyGroupManager();

    MCAPI ::CompoundTag getActorPropertyDataTag(::HashedString const& actorCanonicalName) const;

    MCFOLD ::std::unordered_map<::HashedString, ::std::shared_ptr<::PropertyGroup const>> const&
    getAllPropertyGroups() const;

    MCAPI void registerGroup(::HashedString const& id, ::std::shared_ptr<::PropertyGroup const> group);

    MCAPI void tryInitPropertiesOnActor(::Actor& actor) const;

    MCAPI ~PropertyGroupManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
