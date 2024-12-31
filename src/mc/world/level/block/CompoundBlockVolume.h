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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompoundBlockVolume() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CompoundBlockVolume();

    MCAPI CompoundBlockVolume(::CompoundBlockVolume&& other);

    MCAPI CompoundBlockVolume(::CompoundBlockVolume const& other);

    MCAPI void _recalculateBounds();

    MCAPI ::CompoundBlockVolumeIterator begin() const;

    MCAPI ::BoundingBox calculateBoundsWithItem(::CompoundBlockVolumeItem const& item);

    MCAPI uint64 capacity() const;

    MCAPI void clear(bool resetOrigin);

    MCAPI ::CompoundBlockVolumeIterator end() const;

    MCAPI void forEachPosition(::std::function<bool(::BlockPos const&)> const& callback) const;

    MCAPI void
    forEachVolumeItem(::std::function<bool(::CompoundBlockVolumeItem const&, ::CompoundBlockVolume const&)> func) const;

    MCAPI ::std::vector<::CompoundBlockVolumeItem> getAbsoluteVolumeList() const;

    MCAPI ::BoundingBox getBoundingBox() const;

    MCAPI ::BlockPos getMax() const;

    MCAPI ::BlockPos getMin() const;

    MCAPI ::BlockPos const& getOrigin() const;

    MCAPI ::std::vector<::CompoundBlockVolumeItem> getVolumeList() const;

    MCAPI bool isEmpty() const;

    MCAPI bool isInside(::BlockPos const& pos) const;

    MCAPI ::CompoundBlockVolume& operator=(::CompoundBlockVolume const& other);

    MCAPI bool operator==(::CompoundBlockVolume const& other) const;

    MCAPI ::std::optional<::CompoundBlockVolumeItem>
    peekLastVolume(::std::optional<::CompoundBlockVolumePositionRelativity> optRelativity) const;

    MCAPI bool popVolume();

    MCAPI void pushVolume(::CompoundBlockVolumeItem&& item);

    MCAPI void pushVolume(::CompoundBlockVolumeItem const&);

    MCAPI void setOrigin(::BlockPos const& newPos, bool preserveExistingVolumes);

    MCAPI void translateOrigin(::BlockPos const& deltaPos, bool preserveExistingVolumes);

    MCAPI uint64 volumeCount() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::CompoundBlockVolume&& other);

    MCAPI void* $ctor(::CompoundBlockVolume const& other);
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
