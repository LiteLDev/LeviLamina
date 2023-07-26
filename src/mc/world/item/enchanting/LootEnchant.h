#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class LootEnchant : public ::Enchant {

public:
    // prevent constructor by default
    LootEnchant& operator=(LootEnchant const&) = delete;
    LootEnchant(LootEnchant const&)            = delete;
    LootEnchant()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getMinCost\@LootEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getMaxCost\@LootEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getMaxLevel\@LootEnchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const; // NOLINT
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
    /**
     * @symbol
     * ??0LootEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@2HH\@Z
     */
    MCAPI LootEnchant(
        enum class Enchant::Type,
        enum class Enchant::Frequency,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        int,
        int
    ); // NOLINT
};
