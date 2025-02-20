#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class CompoundBlockVolumeItem;
class CompoundBlockVolumeIterator;
namespace cereal { struct ReflectionCtx; }
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
    MCAPI void _recalculateBounds();

    MCAPI ::CompoundBlockVolumeIterator begin() const;

    MCAPI ::BoundingBox calculateBoundsWithItem(::CompoundBlockVolumeItem const& item);

    MCAPI void forEachPosition(::std::function<bool(::BlockPos const&)> const& callback) const;

    MCAPI ::std::vector<::CompoundBlockVolumeItem> getAbsoluteVolumeList() const;

    MCAPI bool isInside(::BlockPos const& pos) const;

    MCAPI ::CompoundBlockVolume& operator=(::CompoundBlockVolume const& other);

    MCAPI bool operator==(::CompoundBlockVolume const& other) const;

    MCAPI ::std::optional<::CompoundBlockVolumeItem>
    peekLastVolume(::std::optional<::CompoundBlockVolumePositionRelativity> optRelativity) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
