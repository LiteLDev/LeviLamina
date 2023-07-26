#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class ProtectionEnchant : public ::Enchant {

public:
    // prevent constructor by default
    ProtectionEnchant& operator=(ProtectionEnchant const&) = delete;
    ProtectionEnchant(ProtectionEnchant const&)            = delete;
    ProtectionEnchant()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getMinCost\@ProtectionEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getMaxCost\@ProtectionEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getMaxLevel\@ProtectionEnchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getDamageProtection\@ProtectionEnchant\@\@UEBAHHAEBVActorDamageSource\@\@\@Z
     */
    virtual int getDamageProtection(int, class ActorDamageSource const&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?doPostHurt\@ProtectionEnchant\@\@UEBAXAEAVItemInstance\@\@AEAVActor\@\@1H\@Z
     */
    virtual void doPostHurt(class ItemInstance&, class Actor&, class Actor&, int) const; // NOLINT
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
     * @vftbl 14
     * @symbol ?_isValidEnchantmentTypeForCategory\@ProtectionEnchant\@\@EEBA_NW4Type\@Enchant\@\@\@Z
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum class Enchant::Type) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PROTECTIONENCHANT
    /**
     * @symbol ?isProtectionEnchant\@ProtectionEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isProtectionEnchant() const; // NOLINT
#endif
    /**
     * @symbol
     * ??0ProtectionEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@2HH\@Z
     */
    MCAPI ProtectionEnchant(
        enum class Enchant::Type,
        enum class Enchant::Frequency,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        class std::basic_string_view<char, struct std::char_traits<char>>,
        int,
        int
    ); // NOLINT

    // private:

private:
    /**
     * @symbol ?THORNS_CHANCE_PER_LEVEL\@ProtectionEnchant\@\@0MB
     */
    MCAPI static float const THORNS_CHANCE_PER_LEVEL; // NOLINT
    /**
     * @symbol
     * ?VALID_ENCHANTMENTS\@ProtectionEnchant\@\@0V?$vector\@W4Type\@Enchant\@\@V?$allocator\@W4Type\@Enchant\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<enum class Enchant::Type> const VALID_ENCHANTMENTS; // NOLINT
};
