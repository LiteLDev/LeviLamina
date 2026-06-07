#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseBlockLocationIterator;
class BoundingBox;
class ChunkPos;
class SimpleBlockVolumeIterator;
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SimpleBlockVolume : public ::BlockVolumeBase {
public:
    // SimpleBlockVolume inner types declare
    // clang-format off
    class allocator;
    // clang-format on

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

    class allocator {};

    using CornerHandle = uchar;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mFrom;
    ::ll::TypedStorage<4, 12, ::BlockPos> mTo;
    // NOLINTEND

public:
    // prevent constructor by default
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

    virtual void forEach(::brstd::function_ref<bool(::BlockPos const&)> callback) const /*override*/;

    virtual ::std::set<::ChunkPos> getChunks() const /*override*/;

    virtual ::std::unordered_set<::BlockPos> getFlattenedBlockPositions() const /*override*/;

    virtual ::std::unique_ptr<::BaseBlockLocationIterator> getIterator() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SimpleBlockVolume(::BoundingBox const& bounds);

    MCAPI SimpleBlockVolume(::SimpleBlockVolume&& volume);

    MCAPI SimpleBlockVolume(::SimpleBlockVolume const& volume);

    MCAPI SimpleBlockVolume(::BlockPos const& from, ::glm::ivec3 const& size);

#ifdef LL_PLAT_C
    MCAPI SimpleBlockVolume(::BlockPos const& from, ::Vec3 const& size);
#endif

    MCAPI SimpleBlockVolume(::BlockPos&& from, ::BlockPos&& to);

    MCAPI SimpleBlockVolume(::BlockPos const& from, ::BlockPos const& to);

    MCAPI ::SimpleBlockVolumeIterator begin() const;

    MCFOLD bool contains(::BlockPos const& pos) const;

    MCAPI bool doesAreaTouchFaces(::BlockPos const& min, ::BlockPos const& max) const;

    MCAPI bool doesBlockTouchFaces(::BlockPos const& blockPos) const;

#ifdef LL_PLAT_C
    MCAPI uchar getCornerHandle(::SimpleBlockVolume::CornerIndex cornerIndex) const;

    MCAPI ::BlockPos getCornerPosition(uchar cornerHandle) const;
#endif

    MCFOLD ::BlockPos getFrom() const;

#ifdef LL_PLAT_C
    MCAPI ::AABB getLocalAABB() const;
#endif

    MCFOLD ::BlockPos getTo() const;

#ifdef LL_PLAT_C
    MCAPI ::AABB getWorldAABB() const;
#endif

    MCAPI ::SimpleBlockVolume::IntersectionResult intersects(::SimpleBlockVolume const& other) const;

    MCAPI ::SimpleBlockVolume& operator=(::SimpleBlockVolume&& other);

    MCAPI ::SimpleBlockVolume& operator=(::SimpleBlockVolume const& other);

    MCAPI bool operator==(::SimpleBlockVolume const&) const;

#ifdef LL_PLAT_C
    MCAPI ::SimpleBlockVolume& setCornerPosition(uchar cornerHandle, ::BlockPos const& pos);
#endif

    MCAPI ::SimpleBlockVolume& setPosition(::BlockPos const& newPosition);

#ifdef LL_PLAT_C
    MCAPI ::SimpleBlockVolume& translateCorner(uchar cornerHandle, ::glm::ivec3 const& delta);
#endif

    MCAPI ::SimpleBlockVolume translated(::glm::ivec3 const& delta) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void cerealBindTypes(::cereal::ReflectionCtx& ctx);

#ifdef LL_PLAT_C
    MCAPI static ::glm::vec3 getCornerUnitOffset(::SimpleBlockVolume::CornerIndex cornerIndex);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BoundingBox const& bounds);

    MCFOLD void* $ctor(::SimpleBlockVolume&& volume);

    MCFOLD void* $ctor(::SimpleBlockVolume const& volume);

    MCAPI void* $ctor(::BlockPos const& from, ::glm::ivec3 const& size);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::BlockPos const& from, ::Vec3 const& size);
#endif

    MCFOLD void* $ctor(::BlockPos&& from, ::BlockPos&& to);

    MCFOLD void* $ctor(::BlockPos const& from, ::BlockPos const& to);
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

    MCAPI void $forEach(::brstd::function_ref<bool(::BlockPos const&)> callback) const;

    MCAPI ::std::set<::ChunkPos> $getChunks() const;

    MCAPI ::std::unordered_set<::BlockPos> $getFlattenedBlockPositions() const;

    MCAPI ::std::unique_ptr<::BaseBlockLocationIterator> $getIterator() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
