#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class CurseVanishingEnchant : public ::Enchant {

public:
    // prevent constructor by default
    CurseVanishingEnchant& operator=(CurseVanishingEnchant const&) = delete;
    CurseVanishingEnchant(CurseVanishingEnchant const&)            = delete;
    CurseVanishingEnchant()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getMinCost\@CurseVanishingEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getMaxCost\@CurseVanishingEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CURSEVANISHINGENCHANT
    /**
     * @symbol ?isTreasureOnly\@CurseVanishingEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isTreasureOnly() const; // NOLINT
#endif
};
