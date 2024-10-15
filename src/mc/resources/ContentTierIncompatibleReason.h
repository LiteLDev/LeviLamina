#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentTierIncompatibleReason {
public:
    // prevent constructor by default
    ContentTierIncompatibleReason& operator=(ContentTierIncompatibleReason const&);
    ContentTierIncompatibleReason(ContentTierIncompatibleReason const&);
    ContentTierIncompatibleReason();

public:
    // NOLINTBEGIN
    MCAPI explicit ContentTierIncompatibleReason(uint errorValue);

    MCAPI static std::string getExpandedI18nErrorList(
        uint                            errorValue,
        std::string const&              i18nContextPrefix,
        std::vector<std::string> const& arguments
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(uint errorValue);

    MCAPI static class ContentTierIncompatibleReason& NoError();

    // NOLINTEND
};
