#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseBlockLocationIterator;
class BlockPos;
class BoundingBox;
class ChunkPos;
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SimpleBlockVolume : public ::BlockVolumeBase {
public:
    // SimpleBlockVolume inner types define
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

    enum class IntersectionResult : int {
        Disjoint   = 0,
        Contains   = 1,
        Intersects = 2,
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
    SimpleBlockVolume();

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

    virtual ~SimpleBlockVolume() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C SimpleBlockVolume(::SimpleBlockVolume const& volume);

    MCNAPI_C SimpleBlockVolume(::BlockPos const& from, ::Vec3 const& size);

    MCNAPI_C SimpleBlockVolume(::BlockPos const& from, ::BlockPos const& to);

    MCNAPI bool doesAreaTouchFaces(::BlockPos const& min, ::BlockPos const& max) const;

    MCNAPI_C uchar getCornerHandle(::SimpleBlockVolume::CornerIndex cornerIndex) const;

    MCNAPI_C ::BlockPos getCornerPosition(uchar cornerHandle) const;

    MCNAPI_C ::AABB getWorldAABB() const;

    MCNAPI ::SimpleBlockVolume::IntersectionResult intersects(::SimpleBlockVolume const& other) const;

    MCNAPI_C bool operator==(::SimpleBlockVolume const& other) const;

    MCNAPI_C ::SimpleBlockVolume& setCornerPosition(uchar cornerHandle, ::BlockPos const& pos);

    MCNAPI_C ::SimpleBlockVolume& translateCorner(uchar cornerHandle, ::glm::ivec3 const& delta);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void cerealBindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::SimpleBlockVolume const& volume);

    MCNAPI_C void* $ctor(::BlockPos const& from, ::Vec3 const& size);

    MCNAPI_C void* $ctor(::BlockPos const& from, ::BlockPos const& to);
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

    MCNAPI ::std::unordered_set<::BlockPos> $getFlattenedBlockPositions() const;

    MCNAPI ::std::unique_ptr<::BaseBlockLocationIterator> $getIterator() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
