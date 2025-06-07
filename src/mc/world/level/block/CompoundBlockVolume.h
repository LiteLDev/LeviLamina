#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundBlockVolumeItem;
class CompoundBlockVolumeIterator;
// clang-format on

class CompoundBlockVolume : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka82ec2;
    ::ll::UntypedStorage<4, 12> mUnkecccd4;
    ::ll::UntypedStorage<4, 24> mUnk35e969;
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
    MCNAPI void _recalculateBounds();

    MCNAPI ::CompoundBlockVolumeIterator begin() const;

    MCNAPI void forEachPosition(::std::function<bool(::BlockPos const&)> const& callback) const;

    MCNAPI ::std::vector<::CompoundBlockVolumeItem> getAbsoluteVolumeList() const;

    MCNAPI bool isInside(::BlockPos const& pos) const;

    MCNAPI ::CompoundBlockVolume& operator=(::CompoundBlockVolume const& other);

    MCNAPI bool operator==(::CompoundBlockVolume const& other) const;

    MCNAPI ::std::optional<::CompoundBlockVolumeItem>
    peekLastVolume(::std::optional<::CompoundBlockVolumePositionRelativity> optRelativity) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
