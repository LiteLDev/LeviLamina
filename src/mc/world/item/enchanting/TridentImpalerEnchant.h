#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentImpalerEnchant : public ::Enchant {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTIMPALERENCHANT
public:
    TridentImpalerEnchant& operator=(TridentImpalerEnchant const&) = delete;
    TridentImpalerEnchant(TridentImpalerEnchant const&)            = delete;
    TridentImpalerEnchant()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getMinCost\@TridentImpalerEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl 3
     * @symbol ?getMaxCost\@TridentImpalerEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl 5
     * @symbol ?getMaxLevel\@TridentImpalerEnchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl 7
     * @symbol ?getDamageBonus\@TridentImpalerEnchant\@\@UEBAMHAEBVActor\@\@\@Z
     */
    virtual float getDamageBonus(int, class Actor const&) const;
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
    /**
     * @symbol
     * ??0TridentImpalerEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@2H_NH\@Z
     */
    MCAPI TridentImpalerEnchant(
        enum class Enchant::Type,
        enum class Enchant::Frequency,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        int,
        bool,
        int
    );
};
