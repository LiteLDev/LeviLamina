#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
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
    ::ll::UntypedStorage<8, 64> mUnkbb5064;
    ::ll::UntypedStorage<4, 12> mUnk531f0e;
    ::ll::UntypedStorage<4, 12> mUnk33cf4c;
    ::ll::UntypedStorage<8, 8>  mUnk7cf3db;
    // NOLINTEND

public:
    // prevent constructor by default
    ListBlockVolume& operator=(ListBlockVolume const&);
    ListBlockVolume();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockPos getMin() const /*override*/;

    virtual ::BlockPos getMax() const /*override*/;

    virtual ::BoundingBox getBoundingBox() const /*override*/;

    virtual ::glm::ivec3 getSpan() const /*override*/;

    virtual int getCapacity() const /*override*/;

    virtual bool isInside(::BlockPos const& pos) const /*override*/;

    virtual void translate(::BlockPos const& delta) /*override*/;

    virtual void forEach(::std::function<bool(::BlockPos const&)> callback) const /*override*/;

    virtual ::std::set<::ChunkPos> getChunks() const /*override*/;

    virtual ::std::unordered_set<::BlockPos> getFlattenedBlockPositions() const /*override*/;

    virtual ::std::unique_ptr<::BaseBlockLocationIterator> getIterator() const /*override*/;

    virtual ~ListBlockVolume() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ListBlockVolume(::std::vector<::BlockPos> const& blockPositions);

    MCNAPI ListBlockVolume(::ListBlockVolume const& rhs);

    MCNAPI void insert(::std::vector<::Vec3> const& blockPositions);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::BlockPos> const& blockPositions);

    MCNAPI void* $ctor(::ListBlockVolume const& rhs);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockPos $getMin() const;

    MCNAPI ::BlockPos $getMax() const;

    MCNAPI ::BoundingBox $getBoundingBox() const;

    MCNAPI ::glm::ivec3 $getSpan() const;

    MCNAPI int $getCapacity() const;

    MCNAPI bool $isInside(::BlockPos const& pos) const;

    MCNAPI void $translate(::BlockPos const& delta);

    MCNAPI void $forEach(::std::function<bool(::BlockPos const&)> callback) const;

    MCNAPI ::std::set<::ChunkPos> $getChunks() const;

    MCNAPI ::std::unordered_set<::BlockPos> $getFlattenedBlockPositions() const;

    MCNAPI ::std::unique_ptr<::BaseBlockLocationIterator> $getIterator() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
