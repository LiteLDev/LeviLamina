#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/EntityTypes.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct SneezeGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                                  mProbability;
    ::ll::TypedStorage<4, 4, float>                                  mDropItemChance;
    ::ll::TypedStorage<8, 32, ::std::string>                         mLootTable;
    ::ll::TypedStorage<8, 32, ::std::string>                         mSound;
    ::ll::TypedStorage<8, 32, ::std::string>                         mPrepareSound;
    ::ll::TypedStorage<4, 4, float>                                  mPrepareTime;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_120::EntityTypes> mEntityTypes;
    ::ll::TypedStorage<4, 4, float>                                  mWithinRadius;
    // NOLINTEND

public:
    // prevent constructor by default
    SneezeGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SneezeGoalDefinition(::SharedTypes::v1_26_30::SneezeGoalDefinition const&);

    MCAPI ::SharedTypes::v1_26_30::SneezeGoalDefinition& operator=(::SharedTypes::v1_26_30::SneezeGoalDefinition&&);

    MCAPI ::SharedTypes::v1_26_30::SneezeGoalDefinition&
    operator=(::SharedTypes::v1_26_30::SneezeGoalDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_30::SneezeGoalDefinition const&) const;

    MCAPI ~SneezeGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_30::SneezeGoalDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
