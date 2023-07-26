/**
 * @file  FireworkChargeItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~FireworkChargeItem();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  18
     * @symbol  ?isDyeable\@FireworkChargeItem\@\@UEBA_NXZ
     */
    virtual bool isDyeable() const;
    /**
     * @vftbl  51
     * @symbol  __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @symbol  __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  60
     * @symbol  ?appendFormattedHovertext\@FireworkChargeItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  67
     * @symbol  ?isValidAuxValue\@FireworkChargeItem\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  70
     * @symbol  __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @symbol  __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol  __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @symbol  ?getColor\@FireworkChargeItem\@\@UEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol  __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @symbol  __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  115
     * @symbol  ?isSameItem\@FireworkChargeItem\@\@UEBA_NAEBVItemStackBase\@\@0\@Z
     */
    virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /**
     * @symbol  ??0FireworkChargeItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI FireworkChargeItem(std::string const &, int);
    /**
     * @symbol  ?TAG_EXPLOSION\@FireworkChargeItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_EXPLOSION;
    /**
     * @symbol  ?TAG_E_COLORS\@FireworkChargeItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_E_COLORS;
    /**
     * @symbol  ?TAG_E_FADECOLORS\@FireworkChargeItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_E_FADECOLORS;
    /**
     * @symbol  ?TAG_E_FLICKER\@FireworkChargeItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_E_FLICKER;
    /**
     * @symbol  ?TAG_E_TRAIL\@FireworkChargeItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_E_TRAIL;
    /**
     * @symbol  ?TAG_E_TYPE\@FireworkChargeItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_E_TYPE;
    /**
     * @symbol  ?getFormattedHoverText\@FireworkChargeItem\@\@SAXAEBVCompoundTag\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@\@Z
     */
    MCAPI static void getFormattedHoverText(class CompoundTag const &, std::string &, std::string const &);
    /**
     * @symbol  ?initFireworkChargeItem\@FireworkChargeItem\@\@SAAEBVItemInstance\@\@AEAV2\@W4Shape\@1\@V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@2_N3\@Z
     */
    MCAPI static class ItemInstance const & initFireworkChargeItem(class ItemInstance &, enum class FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    /**
     * @symbol  ?initFireworkChargeItem\@FireworkChargeItem\@\@SAAEBVItemStack\@\@AEAV2\@W4Shape\@1\@V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@2_N3\@Z
     */
    MCAPI static class ItemStack const & initFireworkChargeItem(class ItemStack &, enum class FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    /**
     * @symbol  ?setColor\@FireworkChargeItem\@\@SAXAEAVItemStackBase\@\@\@Z
     */
    MCAPI static void setColor(class ItemStackBase &);

//private:
    /**
     * @symbol  ?_initFireworkChargeItem\@FireworkChargeItem\@\@CAXAEAVItemStackBase\@\@W4Shape\@1\@V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@2_N3\@Z
     */
    MCAPI static void _initFireworkChargeItem(class ItemStackBase &, enum class FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    /**
     * @symbol  ?appendColors\@FireworkChargeItem\@\@CAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@EV?$allocator\@E\@std\@\@\@3\@\@Z
     */
    MCAPI static void appendColors(std::string &, std::vector<unsigned char>);

private:

};