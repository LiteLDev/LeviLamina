#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/actor/MoveToPOIGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct MingleGoalDefinition : public ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                     mDuration;
    ::ll::TypedStorage<4, 4, float>                                                     mCooldown;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mMinglePartnerType;
    ::ll::TypedStorage<4, 4, float>                                                     mMingleDistance;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition::POIType> mPOIType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MingleGoalDefinition();
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
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
