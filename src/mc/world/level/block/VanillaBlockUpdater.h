#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTagUpdaterContext;
// clang-format on

class VanillaBlockUpdater {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addBaseUpdater(::CompoundTagUpdaterContext& context);

    MCNAPI static void addRailUpdater_1_14_0(::std::string const& railName, ::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_10_0(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_12_0(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_13_0(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_14_0(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_15_0(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_16_0(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_16_210(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_18_10(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_19_70(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_19_80(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_20_0(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_20_10(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_20_20(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_20_30(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_20_40(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_20_50(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_20_60(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_20_70(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_20_80(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_21_0(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_21_10(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_21_20(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_21_30(::CompoundTagUpdaterContext& context);

    MCNAPI static void addUpdaters_1_21_60(::CompoundTagUpdaterContext& context);

    MCNAPI static ::CompoundTagUpdaterContext& get();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::CompoundTagUpdaterContext>& mContext();
    // NOLINTEND
};
