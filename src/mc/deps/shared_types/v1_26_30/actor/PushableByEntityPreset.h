#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct PushableByEntityPreset {
public:
    // PushableByEntityPreset inner types define
    enum class PushMode : uchar {
        None           = 0,
        Default        = 1,
        LegacyBoat     = 2,
        LegacyMinecart = 3,
        Ball           = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>                mFilter;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_30::PushableByEntityPreset::PushMode> mPushMode;
    ::ll::TypedStorage<4, 4, float>                                                     mStrengthMultiplier;
    ::ll::TypedStorage<4, 4, float>                                                     mMinDistance;
    ::ll::TypedStorage<4, 4, float>                                                     mMaxDistance;
    ::ll::TypedStorage<4, 4, float>                                                     mPushScaleSelf;
    ::ll::TypedStorage<4, 4, float>                                                     mPushScaleOther;
    ::ll::TypedStorage<4, 4, float>                                                     mKickSpeedScale;
    ::ll::TypedStorage<4, 4, float>                                                     mMinKickSpeed;
    ::ll::TypedStorage<4, 4, float>                                                     mMaxKickSpeed;
    ::ll::TypedStorage<4, 4, float>                                                     mVerticalKickMultiplier;
    ::ll::TypedStorage<1, 1, bool>                                                      mPlaySound;
    ::ll::TypedStorage<4, 4, float>                                                     mPlaySoundCooldownInSeconds;
    ::ll::TypedStorage<4, 4, float>                                                     mPlaySoundImpulseThreshold;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::SharedTypes::v1_26_30::PushableByEntityPreset const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
