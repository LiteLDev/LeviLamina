#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BoundingBox;
class ChunkPos;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SimpleBlockVolume : public ::BlockVolumeBase {
public:
    // SimpleBlockVolume inner types declare
    // clang-format off
    template<typename T0> class allocator;
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

    template <typename T0>
    class allocator {};

    using CornerHandle = uchar;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mFrom;
    ::ll::TypedStorage<4, 12, ::BlockPos> mTo;
    // NOLINTEND

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
    MCNAPI bool doesAreaTouchFaces(::BlockPos const& min, ::BlockPos const& max) const;

    MCNAPI ::SimpleBlockVolume::IntersectionResult intersects(::SimpleBlockVolume const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void cerealBindTypes(::cereal::ReflectionCtx& ctx);
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

    MCNAPI void $forEach(::brstd::function_ref<bool(::BlockPos const&)> callback) const;

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
