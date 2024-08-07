#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/glm/vec.h"
#include "mc/world/level/block/utils/BlockVolumeBase.h"

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
    virtual struct glm::vec<3, int, 0> getSpan() const;

    // vIndex: 5
    virtual int getCapacity() const;

    // vIndex: 6
    virtual bool isInside(class BlockPos const&) const;

    // vIndex: 7
    virtual void translate(class BlockPos const&);

    // vIndex: 8
    virtual void forEach(std::function<bool(class BlockPos const&)>) const;

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

    MCAPI class SimpleBlockVolume translated(struct glm::vec<3, int, 0> const&) const;

    MCAPI static void cerealBindTypes(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
