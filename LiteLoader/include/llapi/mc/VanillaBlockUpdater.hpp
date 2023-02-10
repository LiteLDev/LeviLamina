/**
 * @file  VanillaBlockUpdater.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaBlockUpdater.
 *
 */
class VanillaBlockUpdater {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABLOCKUPDATER
public:
    class VanillaBlockUpdater& operator=(class VanillaBlockUpdater const &) = delete;
    VanillaBlockUpdater(class VanillaBlockUpdater const &) = delete;
    VanillaBlockUpdater() = delete;
#endif

public:
    /**
     * @hash   2102753015
     * @symbol  ?destroy\@VanillaBlockUpdater\@\@SAXXZ
     */
    MCAPI static void destroy();
    /**
     * @hash   1906644584
     * @symbol  ?get\@VanillaBlockUpdater\@\@SAAEAVCompoundTagUpdaterContext\@\@XZ
     */
    MCAPI static class CompoundTagUpdaterContext & get();
    /**
     * @hash   -1382284175
     * @symbol  ?initialize\@VanillaBlockUpdater\@\@SAXXZ
     */
    MCAPI static void initialize();

//private:
    /**
     * @hash   1730533131
     * @symbol  ?addBaseUpdater\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addBaseUpdater(class CompoundTagUpdaterContext &);
    /**
     * @hash   1790424591
     * @symbol  ?addRailUpdater_1_14_0\@VanillaBlockUpdater\@\@CAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addRailUpdater_1_14_0(std::string const &, class CompoundTagUpdaterContext &);
    /**
     * @hash   -858176752
     * @symbol  ?addUpdaters_1_10_0\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_10_0(class CompoundTagUpdaterContext &);
    /**
     * @hash   987438702
     * @symbol  ?addUpdaters_1_12_0\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_12_0(class CompoundTagUpdaterContext &);
    /**
     * @hash   -243080099
     * @symbol  ?addUpdaters_1_13_0\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_13_0(class CompoundTagUpdaterContext &);
    /**
     * @hash   -1466525940
     * @symbol  ?addUpdaters_1_14_0\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_14_0(class CompoundTagUpdaterContext &);
    /**
     * @hash   1598030187
     * @symbol  ?addUpdaters_1_15_0\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_15_0(class CompoundTagUpdaterContext &);
    /**
     * @hash   366834842
     * @symbol  ?addUpdaters_1_16_0\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_16_0(class CompoundTagUpdaterContext &);
    /**
     * @hash   -449971191
     * @symbol  ?addUpdaters_1_16_210\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_16_210(class CompoundTagUpdaterContext &);
    /**
     * @hash   -686566531
     * @symbol  ?addUpdaters_1_18_10\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_18_10(class CompoundTagUpdaterContext &);

private:
    /**
     * @hash   -503392628
     * @symbol  ?mContext\@VanillaBlockUpdater\@\@0V?$unique_ptr\@VCompoundTagUpdaterContext\@\@U?$default_delete\@VCompoundTagUpdaterContext\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class CompoundTagUpdaterContext> mContext;

};