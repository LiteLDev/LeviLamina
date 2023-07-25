#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaBlockUpdater {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABLOCKUPDATER
public:
    VanillaBlockUpdater& operator=(VanillaBlockUpdater const&) = delete;
    VanillaBlockUpdater(VanillaBlockUpdater const&)            = delete;
    VanillaBlockUpdater()                                      = delete;
#endif

public:
    /**
     * @symbol ?destroy\@VanillaBlockUpdater\@\@SAXXZ
     */
    MCAPI static void destroy();
    /**
     * @symbol ?get\@VanillaBlockUpdater\@\@SAAEAVCompoundTagUpdaterContext\@\@XZ
     */
    MCAPI static class CompoundTagUpdaterContext& get();
    /**
     * @symbol ?initialize\@VanillaBlockUpdater\@\@SAXXZ
     */
    MCAPI static void initialize();

    // private:
    /**
     * @symbol ?addBaseUpdater\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addBaseUpdater(class CompoundTagUpdaterContext&);
    /**
     * @symbol
     * ?addRailUpdater_1_14_0\@VanillaBlockUpdater\@\@CAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addRailUpdater_1_14_0(std::string const&, class CompoundTagUpdaterContext&);
    /**
     * @symbol ?addUpdaters_1_10_0\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_10_0(class CompoundTagUpdaterContext&);
    /**
     * @symbol ?addUpdaters_1_12_0\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_12_0(class CompoundTagUpdaterContext&);
    /**
     * @symbol ?addUpdaters_1_13_0\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_13_0(class CompoundTagUpdaterContext&);
    /**
     * @symbol ?addUpdaters_1_14_0\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_14_0(class CompoundTagUpdaterContext&);
    /**
     * @symbol ?addUpdaters_1_15_0\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_15_0(class CompoundTagUpdaterContext&);
    /**
     * @symbol ?addUpdaters_1_16_0\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_16_0(class CompoundTagUpdaterContext&);
    /**
     * @symbol ?addUpdaters_1_16_210\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_16_210(class CompoundTagUpdaterContext&);
    /**
     * @symbol ?addUpdaters_1_18_10\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_18_10(class CompoundTagUpdaterContext&);
    /**
     * @symbol ?addUpdaters_1_19_70\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_19_70(class CompoundTagUpdaterContext&);
    /**
     * @symbol ?addUpdaters_1_19_80\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_19_80(class CompoundTagUpdaterContext&);
    /**
     * @symbol ?addUpdaters_1_20_0\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_20_0(class CompoundTagUpdaterContext&);
    /**
     * @symbol ?addUpdaters_1_20_10\@VanillaBlockUpdater\@\@CAXAEAVCompoundTagUpdaterContext\@\@\@Z
     */
    MCAPI static void addUpdaters_1_20_10(class CompoundTagUpdaterContext&);

private:
    /**
     * @symbol
     * ?mContext\@VanillaBlockUpdater\@\@0V?$unique_ptr\@VCompoundTagUpdaterContext\@\@U?$default_delete\@VCompoundTagUpdaterContext\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class CompoundTagUpdaterContext> mContext;
};
