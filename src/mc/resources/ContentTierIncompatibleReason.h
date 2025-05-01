#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        uint                                errorValue,
        ::std::string const&                i18nContextPrefix,
        ::std::vector<::std::string> const& arguments
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ContentTierIncompatibleReason& NoError();
    // NOLINTEND
};
