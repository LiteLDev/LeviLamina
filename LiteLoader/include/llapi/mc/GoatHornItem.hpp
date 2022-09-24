/**
 * @file  GoatHornItem.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~GoatHornItem();
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
     * @hash   -135659842
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@GoatHornItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
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
     * @hash   -1497348323
     * @vftbl  85
     * @symbol ?use@GoatHornItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   401856905
     * @vftbl  104
     * @symbol ?getCooldownType@GoatHornItem@@UEBAAEBVHashedString@@XZ
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @hash   -1853690936
     * @vftbl  105
     * @symbol ?getCooldownTime@GoatHornItem@@UEBAHXZ
     */
    virtual int getCooldownTime() const;
    /**
     * @hash   1148740260
     * @vftbl  127
     * @symbol ?canBeCharged@GoatHornItem@@UEBA_NXZ
     */
    virtual bool canBeCharged() const;
    /**
     * @hash   -576802401
     * @symbol ??0GoatHornItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI GoatHornItem(std::string const &, int);
    /**
     * @hash   1514238419
     * @symbol ?addGoatHornVarationSaveData@GoatHornItem@@SAXAEAVGoat@@AEAVItemStack@@@Z
     */
    MCAPI static void addGoatHornVarationSaveData(class Goat &, class ItemStack &);

};