#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseBlockLocationIterator;
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

    using CornerHandle = uchar;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mFrom;
    ::ll::TypedStorage<4, 12, ::BlockPos> mTo;
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
    MCAPI_C SimpleBlockVolume(::SimpleBlockVolume const& volume);

    MCAPI_C SimpleBlockVolume(::BlockPos const& from, ::Vec3 const& size);

    MCAPI_C SimpleBlockVolume(::BlockPos const& from, ::BlockPos const& to);

    MCAPI bool doesAreaTouchFaces(::BlockPos const& min, ::BlockPos const& max) const;

    MCAPI_C uchar getCornerHandle(::SimpleBlockVolume::CornerIndex cornerIndex) const;

    MCAPI_C ::BlockPos getCornerPosition(uchar cornerHandle) const;

    MCAPI_C ::AABB getWorldAABB() const;

    MCAPI ::SimpleBlockVolume::IntersectionResult intersects(::SimpleBlockVolume const& other) const;

    MCAPI_C bool operator==(::SimpleBlockVolume const& other) const;

    MCAPI_C ::SimpleBlockVolume& setCornerPosition(uchar cornerHandle, ::BlockPos const& pos);

    MCAPI_C ::SimpleBlockVolume& translateCorner(uchar cornerHandle, ::glm::ivec3 const& delta);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void cerealBindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::SimpleBlockVolume const& volume);

    MCAPI_C void* $ctor(::BlockPos const& from, ::Vec3 const& size);

    MCAPI_C void* $ctor(::BlockPos const& from, ::BlockPos const& to);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockPos $getMin() const;

    MCAPI ::BlockPos $getMax() const;

    MCAPI ::BoundingBox $getBoundingBox() const;

    MCAPI ::glm::ivec3 $getSpan() const;

    MCAPI int $getCapacity() const;

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
