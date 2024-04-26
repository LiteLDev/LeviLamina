#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/ElementType.h"
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

class ElementBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ElementBlock& operator=(ElementBlock const&);
    ElementBlock(ElementBlock const&);
    ElementBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ElementBlock@@UEAA@XZ
    virtual ~ElementBlock() = default;

    // vIndex: 60, symbol: ?canBeUsedInCommands@ElementBlock@@UEBA_NAEBVBaseGameVersion@@@Z
    virtual bool canBeUsedInCommands(class BaseGameVersion const& requiredBaseGameVersion) const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@ElementBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 137, symbol: ?tryLegacyUpgrade@ElementBlock@@UEBAPEBVBlock@@G@Z
    virtual class Block const* tryLegacyUpgrade(ushort extraData) const;

    // vIndex: 159, symbol: ?getMapColor@ElementBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const& block) const;

    // symbol: ??0ElementBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4ElementType@@@Z
    MCAPI ElementBlock(std::string const& nameId, int id, ::ElementType type);

    // symbol: ?getElementInfo@ElementBlock@@SA?AUElementInfo@@W4ElementType@@@Z
    MCAPI static struct ElementInfo getElementInfo(::ElementType e);

    // symbol: ?getIngredientForElement@ElementBlock@@SA?AVRecipeIngredient@@W4ElementType@@H@Z
    MCAPI static class RecipeIngredient getIngredientForElement(::ElementType e, int stackCount);

    // symbol: ?getItemForElement@ElementBlock@@SA?AVItemInstance@@W4ElementType@@H@Z
    MCAPI static class ItemInstance getItemForElement(::ElementType e, int stackCount);

    // symbol: ?initElements@ElementBlock@@SAXXZ
    MCAPI static void initElements();

    // symbol: ?isElement@ElementBlock@@SA_NAEBVItemStackBase@@@Z
    MCAPI static bool isElement(class ItemStackBase const& item);

    // symbol: ?shutdownElements@ElementBlock@@SAXXZ
    MCAPI static void shutdownElements();

    // symbol: ?tryGetBlockLegacyForElement@ElementBlock@@SAPEBVBlockLegacy@@W4ElementType@@@Z
    MCAPI static class BlockLegacy const* tryGetBlockLegacyForElement(::ElementType e);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mElements@ElementBlock@@0V?$vector@PEBVBlockLegacy@@V?$allocator@PEBVBlockLegacy@@@std@@@std@@A
    MCAPI static std::vector<class BlockLegacy const*> mElements;

    // NOLINTEND
};
