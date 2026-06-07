#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct PushableByEntityPreset {
public:
    // PushableByEntityPreset inner types define
    enum class PushMode : uchar {
        Default        = 0,
        LegacyBoat     = 1,
        LegacyMinecart = 2,
        Ball           = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>            mFilter;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Beta::PushableByEntityPreset::PushMode> mPushMode;
    ::ll::TypedStorage<4, 4, float>                                                 mStrengthMultiplier;
    ::ll::TypedStorage<4, 4, float>                                                 mMinDistance;
    ::ll::TypedStorage<4, 4, float>                                                 mPushScaleSelf;
    ::ll::TypedStorage<4, 4, float>                                                 mPushScaleOther;
    ::ll::TypedStorage<4, 4, float>                                                 mKickDistanceThreshold;
    ::ll::TypedStorage<4, 4, float>                                                 mKickSpeedScale;
    ::ll::TypedStorage<4, 4, float>                                                 mMinKickSpeed;
    ::ll::TypedStorage<4, 4, float>                                                 mMaxKickSpeed;
    ::ll::TypedStorage<4, 4, float>                                                 mVerticalKickMultiplier;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::Beta
