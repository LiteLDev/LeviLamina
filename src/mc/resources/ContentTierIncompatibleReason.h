#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class I18n;
// clang-format on

class ContentTierIncompatibleReason {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk32cd20;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentTierIncompatibleReason& operator=(ContentTierIncompatibleReason const&);
    ContentTierIncompatibleReason(ContentTierIncompatibleReason const&);
    ContentTierIncompatibleReason();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string getExpandedI18nErrorList(
        ::I18n&                             loc,
        uint                                errorValue,
        ::std::string const&                i18nContextPrefix,
        ::std::vector<::std::string> const& arguments
    );

#ifdef LL_PLAT_C
    MCNAPI static ::std::vector<::std::string> getI18nErrorLabelList(uint errorValue, ::std::string const& i18nPrefix);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ContentTierIncompatibleReason& NoError();
    // NOLINTEND
};
