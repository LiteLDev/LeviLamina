#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60 {

struct TeleportComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                    mRandomTeleports;
    ::ll::TypedStorage<1, 1, bool>                    mTeleportsOnProjectileHit;
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mProjectileFilter;
    ::ll::TypedStorage<4, 4, float>                   mMinTeleportTime;
    ::ll::TypedStorage<4, 4, float>                   mMaxTeleportTime;
    ::ll::TypedStorage<4, 12, ::Vec3>                 mRandomTeleportCube;
    ::ll::TypedStorage<4, 4, float>                   mTargetDistance;
    ::ll::TypedStorage<4, 4, float>                   mTargetTeleportChance;
    ::ll::TypedStorage<4, 4, float>                   mLightTeleportChance;
    ::ll::TypedStorage<4, 4, float>                   mDarkTeleportChance;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec3 const& DEFAULT_RANDOM_TELEPORT_CUBE();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
