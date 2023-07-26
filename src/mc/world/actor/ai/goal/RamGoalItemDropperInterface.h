#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RamAttackGoalUtils {

class RamGoalItemDropperInterface {

public:
    // prevent constructor by default
    RamGoalItemDropperInterface& operator=(RamGoalItemDropperInterface const&) = delete;
    RamGoalItemDropperInterface(RamGoalItemDropperInterface const&)            = delete;
    RamGoalItemDropperInterface()                                              = delete;
};

}; // namespace RamAttackGoalUtils
