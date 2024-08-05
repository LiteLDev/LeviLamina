#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/glm/vec.h"
#include "mc/world/level/block/utils/BlockVolumeBase.h"

class ListBlockVolume : public ::BlockVolumeBase {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ListBlockVolume() = default;

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

    MCAPI ListBlockVolume();

    MCAPI ListBlockVolume(class ListBlockVolume const&);

    MCAPI explicit ListBlockVolume(std::vector<class BlockPos> const&);

    MCAPI explicit ListBlockVolume(std::vector<class Vec3> const&);

    MCAPI class ListBlockVolumeIterator begin() const;

    MCAPI void erase(std::vector<class Vec3> const&);

    MCAPI void insert(std::vector<class Vec3> const&);

    MCAPI class ListBlockVolume& operator=(class ListBlockVolume const&);

    // NOLINTEND
};
