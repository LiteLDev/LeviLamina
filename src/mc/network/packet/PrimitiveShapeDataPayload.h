#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/packet/ArrowDataPayload.h"
#include "mc/network/packet/BoxDataPayload.h"
#include "mc/network/packet/LineDataPayload.h"
#include "mc/network/packet/SphereDataPayload.h"
#include "mc/network/packet/TextDataPayload.h"
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptPrimitiveShapeType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPrimitiveShape; }
// clang-format on

struct PrimitiveShapeDataPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                                                             mNetworkId;
    ::ll::TypedStorage<1, 2, ::std::optional<::ScriptModuleMinecraft::ScriptPrimitiveShapeType>> mShapeType;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                                           mLocation;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                                           mRotation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                             mScale;
    ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>>                                     mColor;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                             mTimeLeftTotalSec;
    ::ll::TypedStorage<4, 8, ::std::optional<::DimensionType>>                                   mDimensionId;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>>                                  mAttachedToId;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                             mMaxRenderDistance;
    ::ll::TypedStorage<
        8,
        72,
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
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void applyUpdatedData(::ScriptModuleMinecraft::ScriptPrimitiveShape& existing) const;

    MCAPI ::std::unique_ptr<::ScriptModuleMinecraft::ScriptPrimitiveShape> constructShape() const;
#endif

    MCAPI ~PrimitiveShapeDataPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
