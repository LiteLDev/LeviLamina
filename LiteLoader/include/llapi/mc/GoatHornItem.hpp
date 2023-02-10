/**
 * @file  GoatHornItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GoatHornItem.
 *
 */
class GoatHornItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOATHORNITEM
public:
    class GoatHornItem& operator=(class GoatHornItem const &) = delete;
    GoatHornItem(class GoatHornItem const &) = delete;
    GoatHornItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GoatHornItem();
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
     * @hash   736943534
     * @vftbl  60
     * @symbol  ?appendFormattedHovertext\@GoatHornItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
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
     * @hash   -624929459
     * @vftbl  84
     * @symbol  ?use\@GoatHornItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   1274275769
     * @vftbl  103
     * @symbol  ?getCooldownType\@GoatHornItem\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @hash   1525158904
     * @vftbl  104
     * @symbol  ?getCooldownTime\@GoatHornItem\@\@UEBAHXZ
     */
    virtual int getCooldownTime() const;
    /**
     * @hash   1248638132
     * @vftbl  124
     * @symbol  ?canBeCharged\@GoatHornItem\@\@UEBA_NXZ
     */
    virtual bool canBeCharged() const;
    /**
     * @hash   295800975
     * @symbol  ??0GoatHornItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI GoatHornItem(std::string const &, int);
    /**
     * @hash   -1908125501
     * @symbol  ?addGoatHornVarationSaveData\@GoatHornItem\@\@SAXAEAVGoat\@\@AEAVItemStack\@\@\@Z
     */
    MCAPI static void addGoatHornVarationSaveData(class Goat &, class ItemStack &);

};