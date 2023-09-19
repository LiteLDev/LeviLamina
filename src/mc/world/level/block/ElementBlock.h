#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/ElementType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 46, symbol: __unk_vfn_46
    virtual void __unk_vfn_46();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 49, symbol: __unk_vfn_49
    virtual void __unk_vfn_49();

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 68, symbol: ?canBeUsedInCommands@ElementBlock@@UEBA_NAEBVBaseGameVersion@@@Z
    virtual bool canBeUsedInCommands(class BaseGameVersion const&) const;

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 84, symbol: __unk_vfn_84
    virtual void __unk_vfn_84();

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: __unk_vfn_125
    virtual void __unk_vfn_125();

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // vIndex: 131, symbol: __unk_vfn_131
    virtual void __unk_vfn_131();

    // vIndex: 133, symbol:
    // ?buildDescriptionId@ElementBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 154, symbol: ?tryLegacyUpgrade@ElementBlock@@UEBAPEBVBlock@@G@Z
    virtual class Block const* tryLegacyUpgrade(ushort) const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 182, symbol: ?getMapColor@ElementBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // symbol: ??0ElementBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4ElementType@@@Z
    MCAPI ElementBlock(std::string const&, int, ::ElementType);

    // symbol: ?getElementInfo@ElementBlock@@SA?AUElementInfo@@W4ElementType@@@Z
    MCAPI static struct ElementInfo getElementInfo(::ElementType);

    // symbol: ?getIngredientForElement@ElementBlock@@SA?AVRecipeIngredient@@W4ElementType@@H@Z
    MCAPI static class RecipeIngredient getIngredientForElement(::ElementType, int);

    // symbol: ?getItemForElement@ElementBlock@@SA?AVItemInstance@@W4ElementType@@H@Z
    MCAPI static class ItemInstance getItemForElement(::ElementType, int);

    // symbol: ?initElements@ElementBlock@@SAXXZ
    MCAPI static void initElements();

    // symbol: ?isElement@ElementBlock@@SA_NAEBVItemStackBase@@@Z
    MCAPI static bool isElement(class ItemStackBase const&);

    // symbol: ?shutdownElements@ElementBlock@@SAXXZ
    MCAPI static void shutdownElements();

    // symbol: ?tryGetBlockLegacyForElement@ElementBlock@@SAPEBVBlockLegacy@@W4ElementType@@@Z
    MCAPI static class BlockLegacy const* tryGetBlockLegacyForElement(::ElementType);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mElements@ElementBlock@@0V?$vector@PEBVBlockLegacy@@V?$allocator@PEBVBlockLegacy@@@std@@@std@@A
    MCAPI static std::vector<class BlockLegacy const*> mElements;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $mElements() { return mElements; }

    // NOLINTEND
};
