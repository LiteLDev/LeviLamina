#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class SwiftSneakEnchant : public ::Enchant {

public:
    // prevent constructor by default
    SwiftSneakEnchant& operator=(SwiftSneakEnchant const&) = delete;
    SwiftSneakEnchant(SwiftSneakEnchant const&)            = delete;
    SwiftSneakEnchant()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getMinCost\@SwiftSneakEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getMaxCost\@SwiftSneakEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getMaxLevel\@SwiftSneakEnchant\@\@UEBAHXZ
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SWIFTSNEAKENCHANT
    /**
     * @symbol ?isDiscoverable\@SwiftSneakEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isDiscoverable() const; // NOLINT
    /**
     * @symbol ?isTreasureOnly\@SwiftSneakEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isTreasureOnly() const; // NOLINT
#endif
    /**
     * @symbol
     * ??0SwiftSneakEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@2HH\@Z
     */
    MCAPI SwiftSneakEnchant(
        enum class Enchant::Type,
        enum class Enchant::Frequency,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        int,
        int
    ); // NOLINT
    /**
     * @symbol ?getExtraSneakingMovementFactor\@SwiftSneakEnchant\@\@SAMAEBVActor\@\@\@Z
     */
    MCAPI static float getExtraSneakingMovementFactor(class Actor const&); // NOLINT
    /**
     * @symbol ?getLevel\@SwiftSneakEnchant\@\@SAHAEBVActor\@\@\@Z
     */
    MCAPI static int getLevel(class Actor const&); // NOLINT
};
