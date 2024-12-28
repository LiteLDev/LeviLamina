#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTagUpdaterContext;
// clang-format on

class VanillaBlockUpdater {
public:
    // prevent constructor by default
    VanillaBlockUpdater& operator=(VanillaBlockUpdater const&);
    VanillaBlockUpdater(VanillaBlockUpdater const&);
    VanillaBlockUpdater();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addBaseUpdater(::CompoundTagUpdaterContext& context);

    MCAPI static void addRailUpdater_1_14_0(::std::string const& railName, ::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_10_0(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_12_0(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_13_0(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_14_0(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_15_0(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_16_0(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_16_210(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_18_10(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_19_70(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_19_80(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_0(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_10(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_20(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_30(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_40(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_50(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_60(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_70(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_20_80(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_21_0(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_21_10(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_21_20(::CompoundTagUpdaterContext& context);

    MCAPI static void addUpdaters_1_21_30(::CompoundTagUpdaterContext& context);

    MCAPI static void destroy();

    MCAPI static ::CompoundTagUpdaterContext& get();

    MCAPI static void initialize();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::CompoundTagUpdaterContext>& mContext();
    // NOLINTEND
};
