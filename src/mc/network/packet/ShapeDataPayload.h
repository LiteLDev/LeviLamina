#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/packet/ArrowDataPayload.h"
#include "mc/network/packet/BoxDataPayload.h"
#include "mc/network/packet/LineDataPayload.h"
#include "mc/network/packet/SphereDataPayload.h"
#include "mc/network/packet/TextDataPayload.h"
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptDebugShapeType.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

struct ShapeDataPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                                                              mNetworkId;
    ::ll::TypedStorage<1, 2, ::std::optional<::ScriptModuleDebugUtilities::ScriptDebugShapeType>> mShapeType;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                                            mLocation;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                                            mRotation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                              mScale;
    ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>>                                      mColor;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                              mTimeLeftTotalSec;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                                     mDimensionId;
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::cereal::NullType,
            ::ArrowDataPayload,
            ::TextDataPayload,
            ::BoxDataPayload,
            ::LineDataPayload,
            ::SphereDataPayload>>
        mExtraDataPayload;
    // NOLINTEND

public:
    // prevent constructor by default
    ShapeDataPayload& operator=(ShapeDataPayload const&);
    ShapeDataPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ShapeDataPayload(::ShapeDataPayload const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ShapeDataPayload const&);
    // NOLINTEND
};
