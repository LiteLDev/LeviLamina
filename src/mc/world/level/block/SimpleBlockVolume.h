#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SimpleBlockVolume : public ::BlockVolumeBase {
public:
    // SimpleBlockVolume inner types define
    enum class IntersectionResult {};

public:
    // prevent constructor by default
    SimpleBlockVolume();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimpleBlockVolume();

    // vIndex: 1
    virtual class BoundingBox getBoundingBox() const;

    // vIndex: 2
    virtual class BlockPos getMin() const;

    // vIndex: 3
    virtual class BlockPos getMax() const;

    // vIndex: 4
    virtual glm::ivec3 getSpan() const;

    // vIndex: 5
    virtual int getCapacity() const;

    // vIndex: 6
    virtual bool isInside(class BlockPos const& pos) const;

    // vIndex: 7
    virtual void translate(class BlockPos const& delta);

    // vIndex: 8
    virtual void forEach(std::function<bool(class BlockPos const&)> callback) const;

    // vIndex: 9
    virtual std::set<class ChunkPos> getChunks() const;

    MCAPI SimpleBlockVolume(class SimpleBlockVolume&& volume);

    MCAPI SimpleBlockVolume(class SimpleBlockVolume const& volume);

    MCAPI SimpleBlockVolume(class BlockPos&& from, class BlockPos&& to);

    MCAPI SimpleBlockVolume(class BlockPos const& from, class BlockPos const& to);

    MCAPI class SimpleBlockVolumeIterator begin() const;

    MCAPI bool contains(class BlockPos const& pos) const;

    MCAPI bool doesAreaTouchFaces(class BlockPos const& min, class BlockPos const& max) const;

    MCAPI bool doesBlockTouchFaces(class BlockPos const& blockPos) const;

    MCAPI class BlockPos getFrom() const;

    MCAPI class BlockPos getTo() const;

    MCAPI class AABB getWorldAABB() const;

    MCAPI ::SimpleBlockVolume::IntersectionResult intersects(class SimpleBlockVolume const& other) const;

    MCAPI class SimpleBlockVolume& operator=(class SimpleBlockVolume&& other);

    MCAPI class SimpleBlockVolume& operator=(class SimpleBlockVolume const& other);

    MCAPI bool operator==(class SimpleBlockVolume const& other) const;

    MCAPI class SimpleBlockVolume translated(glm::ivec3 const&) const;

    MCAPI static void cerealBindTypes(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class BlockPos const& from, class BlockPos const& to);

    MCAPI void* ctor$(class BlockPos&& from, class BlockPos&& to);

    MCAPI void* ctor$(class SimpleBlockVolume const& volume);

    MCAPI void* ctor$(class SimpleBlockVolume&& volume);

    MCAPI void dtor$();

    MCAPI void forEach$(std::function<bool(class BlockPos const&)> callback) const;

    MCAPI class BoundingBox getBoundingBox$() const;

    MCAPI int getCapacity$() const;

    MCAPI std::set<class ChunkPos> getChunks$() const;

    MCAPI class BlockPos getMax$() const;

    MCAPI class BlockPos getMin$() const;

    MCAPI glm::ivec3 getSpan$() const;

    MCAPI bool isInside$(class BlockPos const& pos) const;

    MCAPI void translate$(class BlockPos const& delta);

    // NOLINTEND
};
