/**
 * @file  MC/ProtectionEnchant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ProtectionEnchant.
 *
 */
class ProtectionEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROTECTIONENCHANT
public:
    class ProtectionEnchant& operator=(class ProtectionEnchant const &) = delete;
    ProtectionEnchant(class ProtectionEnchant const &) = delete;
    ProtectionEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ProtectionEnchant();
    /**
     * @hash   1604409417
     * @vftbl  2
     * @symbol ?getMinCost@ProtectionEnchant@@UEBAHH@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @hash   1899889383
     * @vftbl  3
     * @symbol ?getMaxCost@ProtectionEnchant@@UEBAHH@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @hash   1499127841
     * @vftbl  5
     * @symbol ?getMaxLevel@ProtectionEnchant@@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @hash   1466188436
     * @vftbl  6
     * @symbol ?getDamageProtection@ProtectionEnchant@@UEBAHHAEBVActorDamageSource@@@Z
     */
    virtual int getDamageProtection(int, class ActorDamageSource const &) const;
    /**
     * @hash   -86206109
     * @vftbl  9
     * @symbol ?doPostHurt@ProtectionEnchant@@UEBAXAEAVItemInstance@@AEAVActor@@1H@Z
     */
    virtual void doPostHurt(class ItemInstance &, class Actor &, class Actor &, int) const;
    /**
     * @vftbl  10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @hash   653377402
     * @vftbl  14
     * @symbol ?_isValidEnchantmentTypeForCategory@ProtectionEnchant@@EEBA_NW4Type@Enchant@@@Z
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum Enchant::Type) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PROTECTIONENCHANT
    /**
     * @hash   -1226170642
     * @symbol ?isProtectionEnchant@ProtectionEnchant@@UEBA_NXZ
     */
    MCVAPI bool isProtectionEnchant() const;
#endif
    /**
     * @hash   1386380649
     * @symbol ??0ProtectionEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     */
    MCAPI ProtectionEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

//private:

private:
    /**
     * @hash   1583411333
     * @symbol ?THORNS_CHANCE_PER_LEVEL@ProtectionEnchant@@0MB
     */
    MCAPI static float const THORNS_CHANCE_PER_LEVEL;
    /**
     * @hash   1363626913
     * @symbol ?VALID_ENCHANTMENTS@ProtectionEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
     */
    MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;

};