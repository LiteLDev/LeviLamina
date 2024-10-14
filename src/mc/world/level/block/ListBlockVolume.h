#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockVolumeBase.h"

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

    MCAPI ListBlockVolume();

    MCAPI ListBlockVolume(class ListBlockVolume const& rhs);

    MCAPI explicit ListBlockVolume(std::vector<class BlockPos> const& blockPositions);

    MCAPI explicit ListBlockVolume(std::vector<class Vec3> const& blockPositions);

    MCAPI class ListBlockVolumeIterator begin() const;

    MCAPI void erase(std::vector<class Vec3> const& blockPositions);

    MCAPI void insert(std::vector<class Vec3> const& blockPositions);

    MCAPI class ListBlockVolume& operator=(class ListBlockVolume const& rhs);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

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
