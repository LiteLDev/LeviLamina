/**
 * @file  MC/ElementBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ElementBlock.
 *
 */
class ElementBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ELEMENTBLOCK
public:
    class ElementBlock& operator=(class ElementBlock const &) = delete;
    ElementBlock(class ElementBlock const &) = delete;
    ElementBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ElementBlock();
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   -1531032066
     * @vftbl  65
     * @symbol ?canBeUsedInCommands@ElementBlock@@UEBA_NAEBVBaseGameVersion@@@Z
     */
    virtual bool canBeUsedInCommands(class BaseGameVersion const &) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   636094440
     * @vftbl  134
     * @symbol ?buildDescriptionId@ElementBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @hash   -1980972048
     * @vftbl  159
     * @symbol ?tryLegacyUpgrade@ElementBlock@@UEBAPEBVBlock@@G@Z
     */
    virtual class Block const * tryLegacyUpgrade(unsigned short) const;
    /**
     * @vftbl  168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -1142795451
     * @vftbl  187
     * @symbol ?getMapColor@ElementBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
    /**
     * @hash   803602984
     * @symbol ??0ElementBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4ElementType@@@Z
     */
    MCAPI ElementBlock(std::string const &, int, enum ElementType);
    /**
     * @hash   -1001918667
     * @symbol ?getElementInfo@ElementBlock@@SA?AUElementInfo@@W4ElementType@@@Z
     */
    MCAPI static struct ElementInfo getElementInfo(enum ElementType);
    /**
     * @hash   -1137521708
     * @symbol ?getIngredientForElement@ElementBlock@@SA?AVRecipeIngredient@@W4ElementType@@H@Z
     */
    MCAPI static class RecipeIngredient getIngredientForElement(enum ElementType, int);
    /**
     * @hash   166262642
     * @symbol ?getItemForElement@ElementBlock@@SA?AVItemInstance@@W4ElementType@@H@Z
     */
    MCAPI static class ItemInstance getItemForElement(enum ElementType, int);
    /**
     * @hash   1014569827
     * @symbol ?initElements@ElementBlock@@SAXXZ
     */
    MCAPI static void initElements();
    /**
     * @hash   -944957423
     * @symbol ?isElement@ElementBlock@@SA_NAEBVItemStackBase@@@Z
     */
    MCAPI static bool isElement(class ItemStackBase const &);
    /**
     * @hash   -832978669
     * @symbol ?shutdownElements@ElementBlock@@SAXXZ
     */
    MCAPI static void shutdownElements();
    /**
     * @hash   -1815161550
     * @symbol ?tryGetBlockLegacyForElement@ElementBlock@@SAPEBVBlockLegacy@@W4ElementType@@@Z
     */
    MCAPI static class BlockLegacy const * tryGetBlockLegacyForElement(enum ElementType);

//private:

private:
    /**
     * @hash   -2050498718
     * @symbol ?mElements@ElementBlock@@0V?$vector@PEBVBlockLegacy@@V?$allocator@PEBVBlockLegacy@@@std@@@std@@A
     */
    MCAPI static std::vector<class BlockLegacy const *> mElements;

};