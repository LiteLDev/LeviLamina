#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class CommandSelectorResults {

public:
    // prevent constructor by default
    CommandSelectorResults& operator=(CommandSelectorResults const&) = delete;
    CommandSelectorResults(CommandSelectorResults const&)            = delete;
    CommandSelectorResults()                                         = delete;
};
