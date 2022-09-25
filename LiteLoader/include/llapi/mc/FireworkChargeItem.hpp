/**
 * @file  FireworkChargeItem.hpp
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
 * @brief MC class FireworkChargeItem.
 *
 */
class FireworkChargeItem : public Item {

#define AFTER_EXTRA
// Add Member There
public:
enum class Shape;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKCHARGEITEM
public:
    class FireworkChargeItem& operator=(class FireworkChargeItem const &) = delete;
    FireworkChargeItem(class FireworkChargeItem const &) = delete;
    FireworkChargeItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FireworkChargeItem();
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
     * @hash   -541105430
     * @vftbl  18
     * @symbol ?isDyeable@FireworkChargeItem@@UEBA_NXZ
     */
    virtual bool isDyeable() const;
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
     * @hash   183502337
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@FireworkChargeItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   -1297179244
     * @vftbl  68
     * @symbol ?isValidAuxValue@FireworkChargeItem@@UEBA_NH@Z
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
     * @hash   -1636083413
     * @vftbl  74
     * @symbol ?getColor@FireworkChargeItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
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
     * @hash   -967943331
     * @vftbl  116
     * @symbol ?isSameItem@FireworkChargeItem@@UEBA_NAEBVItemStackBase@@0@Z
     */
    virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /**
     * @hash   -569118196
     * @symbol ??0FireworkChargeItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI FireworkChargeItem(std::string const &, int);
    /**
     * @hash   1796296473
     * @symbol ?TAG_EXPLOSION@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_EXPLOSION;
    /**
     * @hash   -1278567819
     * @symbol ?TAG_E_COLORS@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_E_COLORS;
    /**
     * @hash   -607974387
     * @symbol ?TAG_E_FADECOLORS@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_E_FADECOLORS;
    /**
     * @hash   2003236939
     * @symbol ?TAG_E_FLICKER@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_E_FLICKER;
    /**
     * @hash   -1298301049
     * @symbol ?TAG_E_TRAIL@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_E_TRAIL;
    /**
     * @hash   1509666985
     * @symbol ?TAG_E_TYPE@FireworkChargeItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_E_TYPE;
    /**
     * @hash   1084737358
     * @symbol ?getFormattedHoverText@FireworkChargeItem@@SAXAEBVCompoundTag@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@@Z
     */
    MCAPI static void getFormattedHoverText(class CompoundTag const &, std::string &, std::string const &);
    /**
     * @hash   -1328237617
     * @symbol ?initFireworkChargeItem@FireworkChargeItem@@SAAEBVItemInstance@@AEAV2@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
     */
    MCAPI static class ItemInstance const & initFireworkChargeItem(class ItemInstance &, enum FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    /**
     * @hash   -838134514
     * @symbol ?initFireworkChargeItem@FireworkChargeItem@@SAAEBVItemStack@@AEAV2@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
     */
    MCAPI static class ItemStack const & initFireworkChargeItem(class ItemStack &, enum FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    /**
     * @hash   1756559902
     * @symbol ?setColor@FireworkChargeItem@@SAXAEAVItemStackBase@@@Z
     */
    MCAPI static void setColor(class ItemStackBase &);

//private:
    /**
     * @hash   1574742240
     * @symbol ?_initFireworkChargeItem@FireworkChargeItem@@CAXAEAVItemStackBase@@W4Shape@1@V?$vector@EV?$allocator@E@std@@@std@@2_N3@Z
     */
    MCAPI static void _initFireworkChargeItem(class ItemStackBase &, enum FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    /**
     * @hash   1811674684
     * @symbol ?appendColors@FireworkChargeItem@@CAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@EV?$allocator@E@std@@@3@@Z
     */
    MCAPI static void appendColors(std::string &, std::vector<unsigned char>);

private:

};