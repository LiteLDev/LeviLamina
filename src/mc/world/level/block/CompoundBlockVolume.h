#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolumeItem;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CompoundBlockVolume : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CompoundBlockVolumeItem>> mVolumeList;
    ::ll::TypedStorage<4, 12, ::BlockPos>                               mOrigin;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                            mBounds;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundBlockVolume();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CompoundBlockVolume(::CompoundBlockVolume const& other);

    MCAPI void _recalculateBounds();

    MCAPI void forEachPosition(::brstd::function_ref<bool(::BlockPos const&)> callback) const;

    MCAPI ::std::vector<::CompoundBlockVolumeItem> getAbsoluteVolumeList() const;

    MCAPI bool isInside(::BlockPos const& pos) const;

    MCAPI ::CompoundBlockVolume& operator=(::CompoundBlockVolume const& other);

    MCAPI void setOrigin(::BlockPos const& newPos, bool preserveExistingVolumes);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CompoundBlockVolume const& other);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
