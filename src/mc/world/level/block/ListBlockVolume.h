#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class ChunkPos;
class ListBlockVolumeIterator;
class Vec3;
// clang-format on

class ListBlockVolume : public ::BlockVolumeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkbb5064;
    ::ll::UntypedStorage<4, 12> mUnk531f0e;
    ::ll::UntypedStorage<4, 12> mUnk33cf4c;
    ::ll::UntypedStorage<8, 8>  mUnk7cf3db;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::BlockPos getMin() const /*override*/;

    // vIndex: 3
    virtual ::BlockPos getMax() const /*override*/;

    // vIndex: 1
    virtual ::BoundingBox getBoundingBox() const /*override*/;

    // vIndex: 4
    virtual ::glm::ivec3 getSpan() const /*override*/;

    // vIndex: 5
    virtual int getCapacity() const /*override*/;

    // vIndex: 6
    virtual bool isInside(::BlockPos const& pos) const /*override*/;

    // vIndex: 7
    virtual void translate(::BlockPos const& delta) /*override*/;

    // vIndex: 8
    virtual void forEach(::std::function<bool(::BlockPos const&)> callback) const /*override*/;

    // vIndex: 9
    virtual ::std::set<::ChunkPos> getChunks() const /*override*/;

    // vIndex: 0
    virtual ~ListBlockVolume() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ListBlockVolume();

    MCAPI explicit ListBlockVolume(::std::vector<::Vec3> const& blockPositions);

    MCAPI explicit ListBlockVolume(::std::vector<::BlockPos> const& blockPositions);

    MCAPI ListBlockVolume(::ListBlockVolume const& rhs);

    MCAPI ::ListBlockVolumeIterator begin() const;

    MCAPI void erase(::std::vector<::Vec3> const& blockPositions);

    MCAPI void insert(::std::vector<::Vec3> const& blockPositions);

    MCAPI ::ListBlockVolume& operator=(::ListBlockVolume const& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::vector<::Vec3> const& blockPositions);

    MCAPI void* $ctor(::std::vector<::BlockPos> const& blockPositions);

    MCAPI void* $ctor(::ListBlockVolume const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockPos $getMin() const;

    MCAPI ::BlockPos $getMax() const;

    MCAPI ::BoundingBox $getBoundingBox() const;

    MCAPI ::glm::ivec3 $getSpan() const;

    MCFOLD int $getCapacity() const;

    MCAPI bool $isInside(::BlockPos const& pos) const;

    MCAPI void $translate(::BlockPos const& delta);

    MCAPI void $forEach(::std::function<bool(::BlockPos const&)> callback) const;

    MCAPI ::std::set<::ChunkPos> $getChunks() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
