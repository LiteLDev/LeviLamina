#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolumeItem;
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
    // member functions
    // NOLINTBEGIN
    MCAPI void _recalculateBounds();

    MCAPI ::std::vector<::CompoundBlockVolumeItem> getAbsoluteVolumeList() const;

    MCAPI bool isInside(::BlockPos const& pos) const;

    MCAPI void setOrigin(::BlockPos const& newPos, bool preserveExistingVolumes);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
