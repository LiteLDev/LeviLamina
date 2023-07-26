/**
 * @file  ProtectionEnchant.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~ProtectionEnchant();
    /**
     * @vftbl  2
     * @symbol  ?getMinCost\@ProtectionEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol  ?getMaxCost\@ProtectionEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  5
     * @symbol  ?getMaxLevel\@ProtectionEnchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl  6
     * @symbol  ?getDamageProtection\@ProtectionEnchant\@\@UEBAHHAEBVActorDamageSource\@\@\@Z
     */
    virtual int getDamageProtection(int, class ActorDamageSource const &) const;
    /**
     * @vftbl  9
     * @symbol  ?doPostHurt\@ProtectionEnchant\@\@UEBAXAEAVItemInstance\@\@AEAVActor\@\@1H\@Z
     */
    virtual void doPostHurt(class ItemInstance &, class Actor &, class Actor &, int) const;
    /**
     * @vftbl  10
     * @symbol  __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol  ?_isValidEnchantmentTypeForCategory\@ProtectionEnchant\@\@EEBA_NW4Type\@Enchant\@\@\@Z
     */
    virtual bool _isValidEnchantmentTypeForCategory(enum class Enchant::Type) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PROTECTIONENCHANT
    /**
     * @symbol  ?isProtectionEnchant\@ProtectionEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isProtectionEnchant() const;
#endif
    /**
     * @symbol  ??0ProtectionEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@2HH\@Z
     */
    MCAPI ProtectionEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

//private:

private:
    /**
     * @symbol  ?THORNS_CHANCE_PER_LEVEL\@ProtectionEnchant\@\@0MB
     */
    MCAPI static float const THORNS_CHANCE_PER_LEVEL;
    /**
     * @symbol  ?VALID_ENCHANTMENTS\@ProtectionEnchant\@\@0V?$vector\@W4Type\@Enchant\@\@V?$allocator\@W4Type\@Enchant\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<enum class Enchant::Type> const VALID_ENCHANTMENTS;

};