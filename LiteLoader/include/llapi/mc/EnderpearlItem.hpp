/**
 * @file  EnderpearlItem.hpp
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
 * @brief MC class EnderpearlItem.
 *
 */
class EnderpearlItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERPEARLITEM
public:
    class EnderpearlItem& operator=(class EnderpearlItem const &) = delete;
    EnderpearlItem(class EnderpearlItem const &) = delete;
    EnderpearlItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EnderpearlItem();
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
     * @hash   -2129482179
     * @vftbl  23
     * @symbol ?isThrowable@EnderpearlItem@@UEBA_NXZ
     */
    virtual bool isThrowable() const;
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
     * @hash   743306221
     * @vftbl  85
     * @symbol ?use@EnderpearlItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   1241753177
     * @vftbl  104
     * @symbol ?getCooldownType@EnderpearlItem@@UEBAAEBVHashedString@@XZ
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @hash   -117968312
     * @vftbl  105
     * @symbol ?getCooldownTime@EnderpearlItem@@UEBAHXZ
     */
    virtual int getCooldownTime() const;
    /**
     * @hash   -1407471505
     * @symbol ??0EnderpearlItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI EnderpearlItem(std::string const &, int);
    /**
     * @hash   -986154957
     * @symbol ?ENDER_PEARL_COOLDOWN@EnderpearlItem@@2VHashedString@@B
     */
    MCAPI static class HashedString const ENDER_PEARL_COOLDOWN;

};