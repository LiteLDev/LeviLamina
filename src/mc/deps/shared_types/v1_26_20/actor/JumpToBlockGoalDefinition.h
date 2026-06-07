#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ItemDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct JumpToBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                   mSearchWidth;
    ::ll::TypedStorage<4, 4, int>                                                   mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                                   mMinPathLength;
    ::ll::TypedStorage<4, 4, int>                                                   mMinDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                             mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                                                 mScaleFactor;
    ::ll::TypedStorage<4, 4, float>                                                 mMaxVelocity;
    ::ll::TypedStorage<4, 4, float>                                                 mPreferredBlocksChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>> mPreferredBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>> mForbiddenBlocks;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& DEFAULT_MAX_VELOCITY();

    MCAPI static int const& DEFAULT_MIN_DISTANCE();

    MCAPI static int const& DEFAULT_MIN_PATH_LENGTH();

    MCAPI static float const& DEFAULT_PREFERRED_BLOCKS_CHANCE();

    MCAPI static float const& DEFAULT_SCALE_FACTOR();

    MCAPI static int const& DEFAULT_SEARCH_HEIGHT();

    MCAPI static int const& DEFAULT_SEARCH_WIDTH();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
