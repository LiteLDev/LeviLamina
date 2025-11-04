#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandSelector.h"

template <typename T0>
class WildcardCommandSelector : public CommandSelector<T0> {
public:
    using CommandSelector<T0>::CommandSelector;
};
