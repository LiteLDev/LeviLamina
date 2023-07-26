/**
 * @file  SoulSpeedEnchant.hpp
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
 * @brief MC class SoulSpeedEnchant.
 *
 */
class SoulSpeedEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOULSPEEDENCHANT
public:
    class SoulSpeedEnchant& operator=(class SoulSpeedEnchant const &) = delete;
    SoulSpeedEnchant(class SoulSpeedEnchant const &) = delete;
    SoulSpeedEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SoulSpeedEnchant();
    /**
     * @vftbl  2
     * @symbol  ?getMinCost\@SoulSpeedEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol  ?getMaxCost\@SoulSpeedEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  5
     * @symbol  ?getMaxLevel\@SoulSpeedEnchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const;
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SOULSPEEDENCHANT
    /**
     * @symbol  ?isDiscoverable\@SoulSpeedEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isDiscoverable() const;
    /**
     * @symbol  ?isTreasureOnly\@SoulSpeedEnchant\@\@UEBA_NXZ
     */
    MCVAPI bool isTreasureOnly() const;
#endif
    /**
     * @symbol  ??0SoulSpeedEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@2HH\@Z
     */
    MCAPI SoulSpeedEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @symbol  ?SOUL_SPEED_BOOST_UUID\@SoulSpeedEnchant\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const SOUL_SPEED_BOOST_UUID;
    /**
     * @symbol  ?getLevel\@SoulSpeedEnchant\@\@SAHAEBVActor\@\@\@Z
     */
    MCAPI static int getLevel(class Actor const &);
    /**
     * @symbol  ?getSpeedBoost\@SoulSpeedEnchant\@\@SAMH\@Z
     */
    MCAPI static float getSpeedBoost(int);
    /**
     * @symbol  ?isActive\@SoulSpeedEnchant\@\@SA_NAEBVActor\@\@\@Z
     */
    MCAPI static bool isActive(class Actor const &);
    /**
     * @symbol  ?shouldSpawnParticles\@SoulSpeedEnchant\@\@SA_NAEBVActor\@\@\@Z
     */
    MCAPI static bool shouldSpawnParticles(class Actor const &);

};