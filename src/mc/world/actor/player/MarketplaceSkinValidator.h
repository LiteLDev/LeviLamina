#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MarketplaceSkinValidator {
public:
    // prevent constructor by default
    MarketplaceSkinValidator& operator=(MarketplaceSkinValidator const&);
    MarketplaceSkinValidator(MarketplaceSkinValidator const&);
    MarketplaceSkinValidator();

public:
    // NOLINTBEGIN
    MCAPI static bool checkIfValid(std::string const& geometry);

    // NOLINTEND
};
