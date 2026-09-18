#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_26_50/actor/ProjectileOnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct SpawnChanceSubcomponentDefinition : public ::SharedTypes::v1_26_50::ProjectileOnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<1>>                                     mSpawnDefinition;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_120::ActorDefinitionTrigger>> mSpawnTriggers;
    ::ll::TypedStorage<4, 4, float>                                                            mFirstSpawnChance;
    ::ll::TypedStorage<4, 4, float>                                                            mSecondSpawnChance;
    ::ll::TypedStorage<4, 4, int>                                                              mFirstSpawnCount;
    ::ll::TypedStorage<4, 4, int>                                                              mSecondSpawnCount;
    ::ll::TypedStorage<1, 1, bool>                                                             mSpawnBaby;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnChanceSubcomponentDefinition& operator=(SpawnChanceSubcomponentDefinition const&);
    SpawnChanceSubcomponentDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view const getName() const /*override*/;

    virtual ~SpawnChanceSubcomponentDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnChanceSubcomponentDefinition(::SharedTypes::v1_26_50::SpawnChanceSubcomponentDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_50::SpawnChanceSubcomponentDefinition const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_50::SpawnChanceSubcomponentDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view const $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
