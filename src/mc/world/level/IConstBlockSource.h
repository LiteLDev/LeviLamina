#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MaterialType.h"

class Material;
class AABB;
class GetCollisionShapeInterface;
class BlockPos;
class BlockActor;
class Block;
struct Bounds;

class IConstBlockSource {
public:
    // prevent constructor by default
    IConstBlockSource& operator=(IConstBlockSource const&);
    IConstBlockSource(IConstBlockSource const&);
    IConstBlockSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IConstBlockSource() = default;

    // vIndex: 1
    virtual class Block const& getBlock(int, int, int) const = 0;

    // vIndex: 2
    virtual class Block const& getBlock(class BlockPos const&) const = 0;

    // vIndex: 3
    virtual class Block const& getBlock(class BlockPos const&, uint) const = 0;

    // vIndex: 4
    virtual class BlockActor const* getBlockEntity(class BlockPos const&) const = 0;

    // vIndex: 5
    virtual class Block const& getExtraBlock(class BlockPos const&) const = 0;

    // vIndex: 6
    virtual class Block const& getLiquidBlock(class BlockPos const&) const = 0;

    // vIndex: 7
    virtual bool hasBlock(class BlockPos const&) const = 0;

    // vIndex: 8
    virtual bool removeBlock(class BlockPos const& pos);

    // vIndex: 9
    virtual bool containsAnyLiquid(class AABB const&) const = 0;

    // vIndex: 10
    virtual bool containsMaterial(class AABB const&, ::MaterialType) const = 0;

    // vIndex: 11
    virtual bool isUnderWater(class Vec3 const&, class Block const&) const = 0;

    // vIndex: 12
    virtual class Material const& getMaterial(class BlockPos const&) const = 0;

    // vIndex: 13
    virtual class Material const& getMaterial(int, int, int) const = 0;

    // vIndex: 14
    virtual bool hasBorderBlock(class BlockPos pos) const;

    // vIndex: 15
    virtual class LevelChunk* getChunkAt(class BlockPos const& pos) const;

    // vIndex: 16
    virtual bool hasChunksAt(struct Bounds const&, bool) const = 0;

    // vIndex: 17
    virtual bool hasChunksAt(class BlockPos const&, int, bool) const = 0;

    // vIndex: 18
    virtual bool hasChunksAt(class AABB const&, bool) const = 0;

    // vIndex: 19
    virtual DimensionType getDimensionId() const = 0;

    // vIndex: 20
    virtual void fetchAABBs(std::vector<class AABB>&, class AABB const&, bool) const = 0;

    // vIndex: 21
    virtual void
    fetchCollisionShapes(std::vector<class AABB>&, class AABB const&, bool, class optional_ref<class GetCollisionShapeInterface const>)
        const = 0;

    // vIndex: 22
    virtual class AABB
    getTallestCollisionShape(class AABB const&, float*, bool, class optional_ref<class GetCollisionShapeInterface const>)
        const = 0;

    // vIndex: 23
    virtual float getBrightness(class BlockPos const&) const = 0;

    MCAPI bool checkMaterial(class AABB const& box, ::MaterialType material) const;

    // NOLINTEND
};
