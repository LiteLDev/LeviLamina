#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockVolumeBase {
public:
    // prevent constructor by default
    BlockVolumeBase& operator=(BlockVolumeBase const&);
    BlockVolumeBase(BlockVolumeBase const&);
    BlockVolumeBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockVolumeBase();

    // vIndex: 1
    virtual class BoundingBox getBoundingBox() const = 0;

    // vIndex: 2
    virtual class BlockPos getMin() const = 0;

    // vIndex: 3
    virtual class BlockPos getMax() const = 0;

    // vIndex: 4
    virtual glm::ivec3 getSpan() const = 0;

    // vIndex: 5
    virtual int getCapacity() const = 0;

    // vIndex: 6
    virtual bool isInside(class BlockPos const& pos) const = 0;

    // vIndex: 7
    virtual void translate(class BlockPos const& delta) = 0;

    // vIndex: 8
    virtual void forEach(std::function<bool(class BlockPos const&)> callback) const = 0;

    // vIndex: 9
    virtual std::set<class ChunkPos> getChunks() const = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
