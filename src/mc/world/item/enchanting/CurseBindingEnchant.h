#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class CurseBindingEnchant : public ::Enchant {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CURSEBINDINGENCHANT
public:
    CurseBindingEnchant& operator=(CurseBindingEnchant const&) = delete;
    CurseBindingEnchant(CurseBindingEnchant const&)            = delete;
    CurseBindingEnchant()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getMinCost\@CurseBindingEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl 3
     * @symbol ?getMaxCost\@CurseBindingEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CURSEBINDINGENCHANT
    /**
     * @symbol ?isTreasureOnly\@CurseBindingEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isTreasureOnly() const;
#endif
};
