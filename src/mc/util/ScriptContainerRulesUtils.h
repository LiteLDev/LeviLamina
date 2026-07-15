#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
class ItemStackBase;
namespace ScriptModuleMinecraft { class ScriptContainerRules; }
namespace ScriptModuleMinecraft { struct ScriptContainerRulesError; }
// clang-format on

namespace ScriptContainerRulesUtils {
// functions
// NOLINTBEGIN
MCNAPI int getPerItemWeight(::ItemStackBase const& item);

MCNAPI ::std::optional<::ScriptModuleMinecraft::ScriptContainerRulesError> isItemAllowedInContainer(
    ::ItemStack const&                                                    item,
    ::Container const&                                                    container,
    int                                                                   containerSlot,
    ::std::optional<::ScriptModuleMinecraft::ScriptContainerRules> const& containerRules
);
// NOLINTEND

} // namespace ScriptContainerRulesUtils
