#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class ChunkPos;
// clang-format on

class SimpleBlockVolume : public ::BlockVolumeBase {
public:
    // SimpleBlockVolume inner types define
    enum class IntersectionResult : int {
        Disjoint   = 0,
        Contains   = 1,
        Intersects = 2,
    };

    enum class CornerIndex : uchar {
        FrontBottomLeft  = 0,
        BackBottomLeft   = 1,
        FrontTopLeft     = 2,
        BackTopLeft      = 3,
        FrontBottomRight = 4,
        BackBottomRight  = 5,
        FrontTopRight    = 6,
        BackTopRight     = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk1a8f23;
    ::ll::UntypedStorage<4, 12> mUnk3dd422;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleBlockVolume& operator=(SimpleBlockVolume const&);
    SimpleBlockVolume(SimpleBlockVolume const&);
    SimpleBlockVolume();

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
    virtual ~SimpleBlockVolume() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool doesAreaTouchFaces(::BlockPos const& min, ::BlockPos const& max) const;

    MCNAPI ::SimpleBlockVolume::IntersectionResult intersects(::SimpleBlockVolume const& other) const;

    MCNAPI ::std::string toString() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
