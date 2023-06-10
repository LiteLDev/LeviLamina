/**
 * @file  SuspiciousStewItem.hpp
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
 * @brief MC class SuspiciousStewItem.
 *
 */
class SuspiciousStewItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUSPICIOUSSTEWITEM
public:
    class SuspiciousStewItem& operator=(class SuspiciousStewItem const &) = delete;
    SuspiciousStewItem(class SuspiciousStewItem const &) = delete;
    SuspiciousStewItem() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 86
     * @symbol ?useTimeDepleted\@SuspiciousStewItem\@\@UEBA?AW4ItemUseMethod\@\@AEAVItemStack\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115();
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUSPICIOUSSTEWITEM
    /**
     * @symbol ?uniqueAuxValues\@SuspiciousStewItem\@\@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @symbol ?applyStewEffect\@SuspiciousStewItem\@\@SAXAEBVItemStack\@\@AEAVActor\@\@\@Z
     */
    MCAPI static void applyStewEffect(class ItemStack const &, class Actor &);

//private:
    /**
     * @symbol ?_getStewEffects\@SuspiciousStewItem\@\@CAAEBV?$array\@VMobEffectInstance\@\@$0L\@\@std\@\@XZ
     */
    MCAPI static class std::array<class MobEffectInstance, 11> const & _getStewEffects();

private:

};
