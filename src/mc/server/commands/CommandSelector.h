#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandSelectorBase.h"

template <typename T0>
class CommandSelector : CommandSelectorBase {
    CommandSelector() : CommandSelectorBase(std::is_same_v<T0, class Player>) {}
};
