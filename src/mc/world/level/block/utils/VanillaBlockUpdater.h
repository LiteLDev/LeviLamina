#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaBlockUpdater {
public:
    // prevent constructor by default
    VanillaBlockUpdater& operator=(VanillaBlockUpdater const&);
    VanillaBlockUpdater(VanillaBlockUpdater const&);
    VanillaBlockUpdater();

public:
    // NOLINTBEGIN
    // symbol: ?destroy@VanillaBlockUpdater@@SAXXZ
    MCAPI static void destroy();

    // symbol: ?get@VanillaBlockUpdater@@SAAEAVCompoundTagUpdaterContext@@XZ
    MCAPI static class CompoundTagUpdaterContext& get();

    // symbol: ?initialize@VanillaBlockUpdater@@SAXXZ
    MCAPI static void initialize();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?addBaseUpdater@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addBaseUpdater(class CompoundTagUpdaterContext& context);

    // symbol:
    // ?addRailUpdater_1_14_0@VanillaBlockUpdater@@CAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addRailUpdater_1_14_0(std::string const& railName, class CompoundTagUpdaterContext& context);

    // symbol: ?addUpdaters_1_10_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_10_0(class CompoundTagUpdaterContext& context);

    // symbol: ?addUpdaters_1_12_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_12_0(class CompoundTagUpdaterContext& context);

    // symbol: ?addUpdaters_1_13_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_13_0(class CompoundTagUpdaterContext& context);

    // symbol: ?addUpdaters_1_14_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_14_0(class CompoundTagUpdaterContext& context);

    // symbol: ?addUpdaters_1_15_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_15_0(class CompoundTagUpdaterContext& context);

    // symbol: ?addUpdaters_1_16_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_16_0(class CompoundTagUpdaterContext& context);

    // symbol: ?addUpdaters_1_16_210@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_16_210(class CompoundTagUpdaterContext& context);

    // symbol: ?addUpdaters_1_18_10@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_18_10(class CompoundTagUpdaterContext& context);

    // symbol: ?addUpdaters_1_19_70@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_19_70(class CompoundTagUpdaterContext& context);

    // symbol: ?addUpdaters_1_19_80@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_19_80(class CompoundTagUpdaterContext& context);

    // symbol: ?addUpdaters_1_20_0@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_20_0(class CompoundTagUpdaterContext& context);

    // symbol: ?addUpdaters_1_20_10@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_20_10(class CompoundTagUpdaterContext&);

    // symbol: ?addUpdaters_1_20_20@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_20_20(class CompoundTagUpdaterContext&);

    // symbol: ?addUpdaters_1_20_30@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_20_30(class CompoundTagUpdaterContext&);

    // symbol: ?addUpdaters_1_20_40@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_20_40(class CompoundTagUpdaterContext&);

    // symbol: ?addUpdaters_1_20_50@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_20_50(class CompoundTagUpdaterContext&);

    // symbol: ?addUpdaters_1_20_60@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_20_60(class CompoundTagUpdaterContext&);

    // symbol: ?addUpdaters_1_20_70@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_20_70(class CompoundTagUpdaterContext&);

    // symbol: ?addUpdaters_1_20_80@VanillaBlockUpdater@@CAXAEAVCompoundTagUpdaterContext@@@Z
    MCAPI static void addUpdaters_1_20_80(class CompoundTagUpdaterContext&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mContext@VanillaBlockUpdater@@0V?$unique_ptr@VCompoundTagUpdaterContext@@U?$default_delete@VCompoundTagUpdaterContext@@@std@@@std@@A
    MCAPI static std::unique_ptr<class CompoundTagUpdaterContext> mContext;

    // NOLINTEND
};
