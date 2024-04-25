#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class PistonBlock : public ::ActorBlock {
public:
    // PistonBlock inner types define
    enum class Type {};

public:
    // prevent constructor by default
    PistonBlock& operator=(PistonBlock const&);
    PistonBlock(PistonBlock const&);
    PistonBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PistonBlock@@UEAA@XZ
    virtual ~PistonBlock() = default;

    // vIndex: 23, symbol: ?canProvideSupport@PistonBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 49, symbol: ?isValidAuxValue@PistonBlock@@UEBA_NH@Z
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 56, symbol: ?canContainLiquid@PistonBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@PistonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@PistonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@PistonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@PistonBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 92, symbol: ?neighborChanged@PistonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 93, symbol: ?getSecondPart@PistonBlock@@UEBA_NAEBVIConstBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool
    getSecondPart(class IConstBlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    // vIndex: 97, symbol: ?getPlacementBlock@PistonBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 108, symbol: ?pushesUpFallingBlocks@PistonBlock@@UEBA_NXZ
    virtual bool pushesUpFallingBlocks() const;

    // vIndex: 128, symbol: ?getVariant@PistonBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 131, symbol: ?getMappedFace@PistonBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 145, symbol: ?onPlace@PistonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@PistonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 153, symbol: ?canSurvive@PistonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0PistonBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4Type@0@@Z
    MCAPI PistonBlock(std::string const& nameId, int id, ::PistonBlock::Type isSticky);

    // symbol: ?getFacingDir@PistonBlock@@SAAEBVBlockPos@@E@Z
    MCAPI static class BlockPos const& getFacingDir(uchar);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ARM_DIRECTION_OFFSETS@PistonBlock@@0QBVBlockPos@@B
    MCAPI static class BlockPos const ARM_DIRECTION_OFFSETS[];

    // NOLINTEND
};
