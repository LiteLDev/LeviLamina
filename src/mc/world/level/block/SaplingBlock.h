#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/SaplingType.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BushBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SaplingBlock : public ::BushBlock {
public:
    // prevent constructor by default
    SaplingBlock& operator=(SaplingBlock const&);
    SaplingBlock(SaplingBlock const&);
    SaplingBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SaplingBlock@@UEAA@XZ
    virtual ~SaplingBlock();

    // vIndex: 56, symbol: ?canContainLiquid@SaplingBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 79, symbol:
    // ?onFertilized@SaplingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* actor, ::FertilizerType fType)
        const;

    // vIndex: 81, symbol: ?canBeFertilized@SaplingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 85, symbol: ?mayPlace@SaplingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148, symbol: ?randomTick@SaplingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 154, symbol: ?getRenderLayer@SaplingBlock@@UEBA?AW4BlockRenderLayer@@XZ
    virtual ::BlockRenderLayer getRenderLayer() const;

    // vIndex: 155, symbol:
    // ?getRenderLayer@SaplingBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const& block, class BlockSource&, class BlockPos const& pos) const;

    // symbol: ??0SaplingBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SaplingBlock(std::string const& nameId, int id);

    // symbol: ?setSaplingType@SaplingBlock@@QEAAAEAV1@W4SaplingType@@@Z
    MCAPI class SaplingBlock& setSaplingType(::SaplingType);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?advanceTree@SaplingBlock@@IEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@PEAVActor@@@Z
    MCAPI bool
    advanceTree(class BlockSource& region, class BlockPos const& pos, class Random& random, class Actor*) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateJungleTree@SaplingBlock@@AEBA?AV?$WeakRef@VIFeature@@@@AEAH0AEA_NAEBVBlockPos@@AEAVBlockSource@@AEBVFeatureRegistry@@@Z
    MCAPI class WeakRef<class IFeature> _generateJungleTree(
        int&                         ox,
        int&                         oz,
        bool&                        multiblock,
        class BlockPos const&        pos,
        class BlockSource&           region,
        class FeatureRegistry const& registry
    ) const;

    // symbol:
    // ?_generateOakTree@SaplingBlock@@AEBA?AV?$WeakRef@VIFeature@@@@AEBVFeatureRegistry@@AEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@_N@Z
    MCAPI class WeakRef<class IFeature> _generateOakTree(
        class FeatureRegistry const& registry,
        class BlockPos const&        pos,
        class BlockSource&           region,
        class Random&                random,
        bool                         useRandom
    ) const;

    // symbol:
    // ?_generateRedwoodTree@SaplingBlock@@AEBA?AV?$WeakRef@VIFeature@@@@AEAH0AEA_NAEBVBlockPos@@AEAVBlockSource@@AEBVFeatureRegistry@@@Z
    MCAPI class WeakRef<class IFeature> _generateRedwoodTree(
        int&                         ox,
        int&                         oz,
        bool&                        multiblock,
        class BlockPos const&        pos,
        class BlockSource&           region,
        class FeatureRegistry const& registry
    ) const;

    // symbol:
    // ?_generateRoofTree@SaplingBlock@@AEBA?AV?$WeakRef@VIFeature@@@@AEAH0AEA_NAEBVBlockPos@@AEAVBlockSource@@AEBVFeatureRegistry@@@Z
    MCAPI class WeakRef<class IFeature> _generateRoofTree(
        int&                         ox,
        int&                         oz,
        bool&                        multiblock,
        class BlockPos const&        pos,
        class BlockSource&           region,
        class FeatureRegistry const& registry
    ) const;

    // symbol: ?_growTree@SaplingBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
    MCAPI bool
    _growTree(class BlockSource& region, class BlockPos const& pos, class Random& random, bool useRandom) const;

    // NOLINTEND
};
