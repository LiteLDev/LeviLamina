#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BoundingBox;
class ChunkPos;
class Vec3;
// clang-format on

class ListBlockVolume : public ::BlockVolumeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockPos>> mBlockPositions;
    ::ll::TypedStorage<4, 12, ::BlockPos> mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos> mMax;
    ::ll::TypedStorage<8, 8, uint64> mChangeCount;
    // NOLINTEND

public:
    // prevent constructor by default
    ListBlockVolume& operator=(ListBlockVolume const&);
    ListBlockVolume();

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

    // vIndex: 10
    virtual ::std::unordered_set<::BlockPos> getFlattenedBlockPositions() const /*override*/;

    // vIndex: 11
    virtual ::std::unique_ptr<::BaseBlockLocationIterator> getIterator() const /*override*/;

    // vIndex: 0
    virtual ~ListBlockVolume() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ListBlockVolume(::std::vector<::BlockPos> const& blockPositions);

    MCAPI ListBlockVolume(::ListBlockVolume const& rhs);

    MCAPI void insert(::std::vector<::Vec3> const& blockPositions);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::BlockPos> const& blockPositions);

    MCAPI void* $ctor(::ListBlockVolume const& rhs);
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

    MCAPI ::std::unordered_set<::BlockPos> $getFlattenedBlockPositions() const;

    MCAPI ::std::unique_ptr<::BaseBlockLocationIterator> $getIterator() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
