#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolumeItem;
class CompoundBlockVolumeIterator;
// clang-format on

class CompoundBlockVolume : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CompoundBlockVolumeItem>> mVolumeList;
    ::ll::TypedStorage<4, 12, ::BlockPos> mOrigin;
    ::ll::TypedStorage<4, 24, ::BoundingBox> mBounds;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundBlockVolume(CompoundBlockVolume const&);
    CompoundBlockVolume();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompoundBlockVolume() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _recalculateBounds();

    MCAPI ::CompoundBlockVolumeIterator begin() const;

    MCAPI void forEachPosition(::std::function<bool(::BlockPos const&)> const& callback) const;

    MCAPI ::std::vector<::CompoundBlockVolumeItem> getAbsoluteVolumeList() const;

    MCAPI bool isInside(::BlockPos const& pos) const;

    MCAPI ::CompoundBlockVolume& operator=(::CompoundBlockVolume const& other);

    MCAPI bool operator==(::CompoundBlockVolume const& other) const;

    MCAPI ::std::optional<::CompoundBlockVolumeItem> peekLastVolume(::std::optional<::CompoundBlockVolumePositionRelativity> optRelativity) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
