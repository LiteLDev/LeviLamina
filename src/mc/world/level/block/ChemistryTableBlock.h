#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/ChemistryTableType.h"
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

class ChemistryTableBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    ChemistryTableBlock& operator=(ChemistryTableBlock const&);
    ChemistryTableBlock(ChemistryTableBlock const&);
    ChemistryTableBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ChemistryTableBlock@@UEAA@XZ
    virtual ~ChemistryTableBlock() = default;

    // vIndex: 31, symbol: ?isCraftingBlock@ChemistryTableBlock@@UEBA_NXZ
    virtual bool isCraftingBlock() const;

    // vIndex: 32, symbol: ?isWaterBlocking@ChemistryTableBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 49, symbol: ?isValidAuxValue@ChemistryTableBlock@@UEBA_NH@Z
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 52, symbol: ?onFillBlock@ChemistryTableBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual void onFillBlock(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // vIndex: 60, symbol: ?canBeUsedInCommands@ChemistryTableBlock@@UEBA_NAEBVBaseGameVersion@@@Z
    virtual bool canBeUsedInCommands(class BaseGameVersion const& requiredBaseGameVersion) const;

    // vIndex: 95, symbol: ?asItemInstance@ChemistryTableBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 97, symbol:
    // ?getPlacementBlock@ChemistryTableBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@ChemistryTableBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 119, symbol: ?isAuxValueRelevantForPicking@ChemistryTableBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 128, symbol: ?getVariant@ChemistryTableBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 131, symbol: ?getMappedFace@ChemistryTableBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 142, symbol: ?onRemove@ChemistryTableBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@ChemistryTableBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@ChemistryTableBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0ChemistryTableBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ChemistryTableBlock(std::string const& nameId, int id);

    // symbol: ?getItemForType@ChemistryTableBlock@@SA?AVItemInstance@@W4ChemistryTableType@@H@Z
    MCAPI static class ItemInstance getItemForType(::ChemistryTableType type, int stackCount);

    // symbol: ?isUIValidForPlayer@ChemistryTableBlock@@SA_NAEBVBlockPos@@AEAVPlayer@@MW4ChemistryTableType@@@Z
    MCAPI static bool isUIValidForPlayer(
        class BlockPos const& pos,
        class Player&         player,
        float                 pickRange,
        ::ChemistryTableType  expectedType
    );

    // NOLINTEND
};
