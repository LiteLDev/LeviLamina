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

    // vIndex: 1, symbol: ?getBlock@BlockSource@@UEBAAEBVBlock@@HHH@Z
    virtual class Block const& getBlock(int, int, int) const = 0;

    // vIndex: 2, symbol: ?getBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getBlock(class BlockPos const&) const = 0;

    // vIndex: 3, symbol: ?getBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@I@Z
    virtual class Block const& getBlock(class BlockPos const&, uint) const = 0;

    // vIndex: 4, symbol: ?getBlockEntity@BlockSource@@UEBAPEBVBlockActor@@AEBVBlockPos@@@Z
    virtual class BlockActor const* getBlockEntity(class BlockPos const&) const = 0;

    // vIndex: 5, symbol: ?getExtraBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getExtraBlock(class BlockPos const&) const = 0;

    // vIndex: 6, symbol: ?getLiquidBlock@BlockSource@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
    virtual class Block const& getLiquidBlock(class BlockPos const&) const = 0;

    // vIndex: 7, symbol: ?hasBlock@BlockSource@@UEBA_NAEBVBlockPos@@@Z
    virtual bool hasBlock(class BlockPos const&) const = 0;

    // vIndex: 8, symbol: ?containsAnyLiquid@BlockSource@@UEBA_NAEBVAABB@@@Z
    virtual bool containsAnyLiquid(class AABB const&) const = 0;

    // vIndex: 9, symbol: ?containsMaterial@BlockSource@@UEBA_NAEBVAABB@@W4MaterialType@@@Z
    virtual bool containsMaterial(class AABB const&, ::MaterialType) const = 0;

    // vIndex: 10, symbol: ?isUnderWater@BlockSource@@UEBA_NAEBVVec3@@AEBVBlock@@@Z
    virtual bool isUnderWater(class Vec3 const&, class Block const&) const = 0;

    // vIndex: 11, symbol: ?getMaterial@BlockSource@@UEBAAEBVMaterial@@AEBVBlockPos@@@Z
    virtual class Material const& getMaterial(class BlockPos const&) const = 0;

    // vIndex: 12, symbol: ?getMaterial@BlockSource@@UEBAAEBVMaterial@@HHH@Z
    virtual class Material const& getMaterial(int, int, int) const = 0;

    // vIndex: 13, symbol: ?hasBorderBlock@BlockSource@@UEBA_NVBlockPos@@@Z
    virtual bool hasBorderBlock(class BlockPos pos) const;

    // vIndex: 14, symbol: ?getChunkAt@BlockSource@@UEBAPEAVLevelChunk@@AEBVBlockPos@@@Z
    virtual class LevelChunk* getChunkAt(class BlockPos const& pos) const;

    // vIndex: 15, symbol: ?hasChunksAt@BlockSource@@UEBA_NAEBUBounds@@_N@Z
    virtual bool hasChunksAt(struct Bounds const&, bool) const = 0;

    // vIndex: 16, symbol: ?hasChunksAt@BlockSource@@UEBA_NAEBVBlockPos@@H_N@Z
    virtual bool hasChunksAt(class BlockPos const&, int, bool) const = 0;

    // vIndex: 17, symbol: ?hasChunksAt@BlockSource@@UEBA_NAEBVAABB@@_N@Z
    virtual bool hasChunksAt(class AABB const&, bool) const = 0;

    // vIndex: 18, symbol: ?getDimensionId@BlockSource@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
    virtual DimensionType getDimensionId() const = 0;

    // vIndex: 19, symbol:
    // ?fetchAABBs@BlockSource@@UEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@_N@Z
    virtual void fetchAABBs(std::vector<class AABB>&, class AABB const&, bool) const = 0;

    // vIndex: 20, symbol:
    // ?fetchCollisionShapes@BlockSource@@UEBAXAEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@AEBVAABB@@_NV?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual void
    fetchCollisionShapes(std::vector<class AABB>&, class AABB const&, bool, class optional_ref<class GetCollisionShapeInterface const>)
        const = 0;

    // vIndex: 21, symbol:
    // ?getTallestCollisionShape@BlockSource@@UEBA?AVAABB@@AEBV2@PEAM_NV?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getTallestCollisionShape(class AABB const&, float*, bool, class optional_ref<class GetCollisionShapeInterface const>)
        const = 0;

    // vIndex: 22, symbol: ?getBrightness@BlockSource@@UEBAMAEBVBlockPos@@@Z
    virtual float getBrightness(class BlockPos const&) const = 0;

    // symbol: ?checkMaterial@IConstBlockSource@@QEBA_NAEBVAABB@@W4MaterialType@@@Z
    MCAPI bool checkMaterial(class AABB const& box, ::MaterialType material) const;

    // NOLINTEND
};
