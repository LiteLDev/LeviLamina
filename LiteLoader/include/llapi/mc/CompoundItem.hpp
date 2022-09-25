/**
 * @file  CompoundItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompoundItem.
 *
 */
class CompoundItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDITEM
public:
    class CompoundItem& operator=(class CompoundItem const &) = delete;
    CompoundItem(class CompoundItem const &) = delete;
    CompoundItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CompoundItem();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  52
     * @symbol __unk_vfn_52
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   2125031620
     * @vftbl  68
     * @symbol ?isValidAuxValue@CompoundItem@@UEBA_NH@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @symbol __unk_vfn_73
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -2064694788
     * @vftbl  96
     * @symbol ?buildDescriptionId@CompoundItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   142666401
     * @vftbl  122
     * @symbol ?getIcon@CompoundItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   468847086
     * @vftbl  124
     * @symbol ?setIcon@CompoundItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @hash   1990609157
     * @symbol ??0CompoundItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVExperiments@@@Z
     */
    MCAPI CompoundItem(std::string const &, int, class Experiments const &);
    /**
     * @hash   581722267
     * @symbol ?getCompoundType@CompoundItem@@SA?AW4CompoundType@@AEBVItemDescriptor@@@Z
     */
    MCAPI static enum CompoundType getCompoundType(class ItemDescriptor const &);
    /**
     * @hash   326934885
     * @symbol ?getIngredientForCompound@CompoundItem@@SA?AVRecipeIngredient@@W4CompoundType@@@Z
     */
    MCAPI static class RecipeIngredient getIngredientForCompound(enum CompoundType);
    /**
     * @hash   -794443298
     * @symbol ?getItemForCompound@CompoundItem@@SA?AVItemInstance@@W4CompoundType@@H@Z
     */
    MCAPI static class ItemInstance getItemForCompound(enum CompoundType, int);
    /**
     * @hash   -715824255
     * @symbol ?isCompoundItem@CompoundItem@@SA_NAEBVItemStackBase@@@Z
     */
    MCAPI static bool isCompoundItem(class ItemStackBase const &);
    /**
     * @hash   1772406515
     * @symbol ?unregisterSpecialCompounds@CompoundItem@@SAXXZ
     */
    MCAPI static void unregisterSpecialCompounds();

//private:
    /**
     * @hash   55368246
     * @symbol ?_registerSpecialCompound@CompoundItem@@AEAAXAEBVItemInstance@@W4CompoundType@@@Z
     */
    MCAPI void _registerSpecialCompound(class ItemInstance const &, enum CompoundType);
    /**
     * @hash   41539028
     * @symbol ?_registerSpecialCompounds@CompoundItem@@AEAAXAEBVExperiments@@@Z
     */
    MCAPI void _registerSpecialCompounds(class Experiments const &);
    /**
     * @hash   -481441301
     * @symbol ?_getName@CompoundItem@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CompoundType@@@Z
     */
    MCAPI static std::string _getName(enum CompoundType);

private:
    /**
     * @hash   -1362731435
     * @symbol ?mIdToSpecialCompound@CompoundItem@@0V?$unordered_map@HHU?$hash@H@std@@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHH@std@@@2@@std@@A
     */
    MCAPI static class std::unordered_map<int, int, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, int>>> mIdToSpecialCompound;
    /**
     * @hash   309631600
     * @symbol ?mTypeToSpecialCompound@CompoundItem@@0V?$unordered_map@HVItemInstance@@U?$hash@H@std@@U?$equal_to@H@3@V?$allocator@U?$pair@$$CBHVItemInstance@@@std@@@3@@std@@A
     */
    MCAPI static class std::unordered_map<int, class ItemInstance, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, class ItemInstance>>> mTypeToSpecialCompound;

};