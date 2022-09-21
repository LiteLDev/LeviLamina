/**
 * @file  MC/VanillaBlockUpdater.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1223276567
     * @symbol ?destroy@VanillaBlockUpdater@@SAXXZ
     */
    MCAPI static void destroy();
    /**
     * @hash   1027168136
     * @symbol ?get@VanillaBlockUpdater@@SAAEAVCompoundTagUpdaterContext@@XZ
     */
    MCAPI static class CompoundTagUpdaterContext & get();
    /**
     * @hash   2033206673
     * @symbol ?initialize@VanillaBlockUpdater@@SAXXZ
     */
    MCAPI static void initialize();

//private:
    /**
     * @hash   850318635
     * @symbol ?addBaseUpdater@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     */
    MCAPI static void addBaseUpdater(class CompoundTagUpdaterContext &);
    /**
     * @hash   910210095
     * @symbol ?addRailUpdater_1_14_0@VanillaBlockUpdater@@CAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVCompoundTagUpdaterContext@@@Z
     */
    MCAPI static void addRailUpdater_1_14_0(std::string const &, class CompoundTagUpdaterContext &);
    /**
     * @hash   -1738391248
     * @symbol ?addUpdaters_1_10_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     */
    MCAPI static void addUpdaters_1_10_0(class CompoundTagUpdaterContext &);
    /**
     * @hash   107393342
     * @symbol ?addUpdaters_1_12_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     */
    MCAPI static void addUpdaters_1_12_0(class CompoundTagUpdaterContext &);
    /**
     * @hash   -1123156211
     * @symbol ?addUpdaters_1_13_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     */
    MCAPI static void addUpdaters_1_13_0(class CompoundTagUpdaterContext &);
    /**
     * @hash   1948964908
     * @symbol ?addUpdaters_1_14_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     */
    MCAPI static void addUpdaters_1_14_0(class CompoundTagUpdaterContext &);
    /**
     * @hash   718415355
     * @symbol ?addUpdaters_1_15_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     */
    MCAPI static void addUpdaters_1_15_0(class CompoundTagUpdaterContext &);
    /**
     * @hash   -512764614
     * @symbol ?addUpdaters_1_16_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     */
    MCAPI static void addUpdaters_1_16_0(class CompoundTagUpdaterContext &);
    /**
     * @hash   -1329216999
     * @symbol ?addUpdaters_1_16_210@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     */
    MCAPI static void addUpdaters_1_16_210(class CompoundTagUpdaterContext &);
    /**
     * @hash   -1565935347
     * @symbol ?addUpdaters_1_18_10@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
     */
    MCAPI static void addUpdaters_1_18_10(class CompoundTagUpdaterContext &);

private:
    /**
     * @hash   -1401458660
     * @symbol ?mContext@VanillaBlockUpdater@@0V?$unique_ptr@VCompoundTagUpdaterContext@@U?$default_delete@VCompoundTagUpdaterContext@@@std@@@std@@A
     */
    MCAPI static std::unique_ptr<class CompoundTagUpdaterContext> mContext;

};