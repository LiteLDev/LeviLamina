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
    MCNAPI static ::ScriptModuleMinecraft::ScriptContainerRulesError
    createAddedZeroWeightItemToContainerWithLimitError(::ItemStack const& item);

    MCNAPI static ::ScriptModuleMinecraft::ScriptContainerRulesError createBannedItemTypeError(::ItemStack const& item);

    MCNAPI static ::ScriptModuleMinecraft::ScriptContainerRulesError
    createNotAllowedItemTypeError(::ItemStack const& item);

    MCNAPI static ::ScriptModuleMinecraft::ScriptContainerRulesError
    createTryingToAddNestedStorageItemError(::ItemStack const& item);

    MCNAPI static ::ScriptModuleMinecraft::ScriptContainerRulesError
    createWeightOverLimitError(::ItemStack const& item, int maxWeightLimit, int weightOverLimit);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
