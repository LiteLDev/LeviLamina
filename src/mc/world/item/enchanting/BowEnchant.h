#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class BowEnchant : public ::Enchant {

public:
    // prevent constructor by default
    BowEnchant& operator=(BowEnchant const&) = delete;
    BowEnchant(BowEnchant const&)            = delete;
    BowEnchant()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getMinCost\@BowEnchant\@\@UEBAHH\@Z
     */
    virtual int32_t getMinCost(int32_t) const;
    /**
     * @vftbl 3
     * @symbol ?getMaxCost\@BowEnchant\@\@UEBAHH\@Z
     */
    virtual int32_t getMaxCost(int32_t) const;
    /**
     * @vftbl 5
     * @symbol ?getMaxLevel\@BowEnchant\@\@UEBAHXZ
     */
    virtual int32_t getMaxLevel() const;
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
     * @vftbl 14
     * @symbol ?_isValidEnchantmentTypeForCategory\@BowEnchant\@\@EEBA_NW4Type\@Enchant\@\@\@Z
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum class Enchant::Type) const;
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?VALID_ENCHANTMENTS\@BowEnchant\@\@0V?$vector\@W4Type\@Enchant\@\@V?$allocator\@W4Type\@Enchant\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<::Enchant::Type> const VALID_ENCHANTMENTS;
    // NOLINTEND
};
