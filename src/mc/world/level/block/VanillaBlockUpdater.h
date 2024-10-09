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
    MCAPI static void destroy();

    MCAPI static class CompoundTagUpdaterContext& get();

    MCAPI static void initialize();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void addBaseUpdater(class CompoundTagUpdaterContext& context);

    MCAPI static void addRailUpdater_1_14_0(std::string const& railName, class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_10_0(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_12_0(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_13_0(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_14_0(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_15_0(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_16_0(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_16_210(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_18_10(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_19_70(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_19_80(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_0(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_10(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_20(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_30(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_40(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_50(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_60(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_70(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_80(class CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_21_0(class CompoundTagUpdaterContext& context);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::unique_ptr<class CompoundTagUpdaterContext> mContext;

    // NOLINTEND
};
