#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class ChunkPos;
class SimpleBlockVolumeIterator;
namespace cereal { struct ReflectionCtx; }
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
    MCAPI SimpleBlockVolume(::SimpleBlockVolume&& volume);

    MCAPI SimpleBlockVolume(::SimpleBlockVolume const&);

    MCAPI SimpleBlockVolume(::BlockPos&& from, ::BlockPos&& to);

    MCAPI SimpleBlockVolume(::BlockPos const&, ::BlockPos const&);

    MCAPI ::SimpleBlockVolumeIterator begin() const;

    MCFOLD bool contains(::BlockPos const& pos) const;

    MCAPI bool doesAreaTouchFaces(::BlockPos const& min, ::BlockPos const& max) const;

    MCAPI bool doesBlockTouchFaces(::BlockPos const& blockPos) const;

    MCAPI ::BlockPos getFrom() const;

    MCAPI ::BlockPos getTo() const;

    MCAPI ::SimpleBlockVolume::IntersectionResult intersects(::SimpleBlockVolume const& other) const;

    MCAPI ::SimpleBlockVolume& operator=(::SimpleBlockVolume&& other);

    MCAPI ::SimpleBlockVolume& operator=(::SimpleBlockVolume const& other);

    MCAPI bool operator==(::SimpleBlockVolume const& other) const;

    MCAPI ::std::string toString() const;

    MCAPI ::SimpleBlockVolume& translate(::glm::ivec3 const& delta);

    MCAPI ::SimpleBlockVolume translated(::glm::ivec3 const& delta) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void cerealBindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SimpleBlockVolume&& volume);

    MCAPI void* $ctor(::SimpleBlockVolume const&);

    MCFOLD void* $ctor(::BlockPos&& from, ::BlockPos&& to);

    MCAPI void* $ctor(::BlockPos const&, ::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockPos $getMin() const;

    MCAPI ::BlockPos $getMax() const;

    MCAPI ::BoundingBox $getBoundingBox() const;

    MCAPI ::glm::ivec3 $getSpan() const;

    MCAPI int $getCapacity() const;

    MCFOLD bool $isInside(::BlockPos const& pos) const;

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
