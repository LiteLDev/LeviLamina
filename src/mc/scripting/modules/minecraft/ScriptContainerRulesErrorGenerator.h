#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptContainerRulesErrorGenerator {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleMinecraft::ScriptContainerRulesError
    createAddedZeroWeightItemToContainerWithLimitError(::ItemStack const& item);

    MCAPI static ::ScriptModuleMinecraft::ScriptContainerRulesError createBannedItemTypeError(::ItemStack const& item);

    MCAPI static ::ScriptModuleMinecraft::ScriptContainerRulesError
    createNotAllowedItemTypeError(::ItemStack const& item);

    MCAPI static ::ScriptModuleMinecraft::ScriptContainerRulesError
    createTryingToAddNestedStorageItemError(::ItemStack const& item);

    MCAPI static ::ScriptModuleMinecraft::ScriptContainerRulesError
    createWeightOverLimitError(::ItemStack const& item, int maxWeightLimit, int weightOverLimit);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
