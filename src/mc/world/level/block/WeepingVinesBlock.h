#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WeepingVinesBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    WeepingVinesBlock& operator=(WeepingVinesBlock const&);
    WeepingVinesBlock(WeepingVinesBlock const&);
    WeepingVinesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WeepingVinesBlock@@UEAA@XZ
    virtual ~WeepingVinesBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@WeepingVinesBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@WeepingVinesBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 56, symbol: ?canContainLiquid@WeepingVinesBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 79, symbol:
    // ?onFertilized@WeepingVinesBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 81, symbol: ?canBeFertilized@WeepingVinesBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 85, symbol: ?mayPlace@WeepingVinesBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@WeepingVinesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 142, symbol: ?onRemove@WeepingVinesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 145, symbol: ?onPlace@WeepingVinesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@WeepingVinesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 153, symbol: ?canSurvive@WeepingVinesBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0WeepingVinesBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI WeepingVinesBlock(std::string const& nameId, int id);

    // symbol: ?placeVineString@WeepingVinesBlock@@SAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@HHH@Z
    MCAPI static void placeVineString(
        class BlockSource&    region,
        class Random&         random,
        class BlockPos const& vinePos,
        int                   vineHeight,
        int                   minAge,
        int                   maxAge
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_shouldGrow@WeepingVinesBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@_K@Z
    MCAPI bool _shouldGrow(class BlockSource& region, class BlockPos const& pos, uint64 age) const;

    // symbol: ?_tryGrow@WeepingVinesBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI void _tryGrow(class BlockSource& region, class BlockPos const& pos, int age) const;

    // NOLINTEND
};
