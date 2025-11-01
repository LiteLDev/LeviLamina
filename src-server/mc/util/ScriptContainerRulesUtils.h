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
MCNAPI ::std::optional<::ScriptModuleMinecraft::ScriptContainerRulesError> canAddItemToContainer(::ItemStack const& item, ::std::optional<::ScriptModuleMinecraft::ScriptContainerRules> const& containerRules);

MCNAPI int getAllowedAddItemStackSize(::ItemStack const& item, ::Container const& container, ::std::optional<::ScriptModuleMinecraft::ScriptContainerRules> const& containerRules);

MCNAPI int getContainerWeight(::Container const& container);

MCNAPI int getPerItemWeight(::ItemStackBase const& item);

MCNAPI ::std::optional<::ScriptModuleMinecraft::ScriptContainerRulesError> isItemAllowedInContainer(::ItemStack const& item, ::Container const& container, int containerSlot, ::std::optional<::ScriptModuleMinecraft::ScriptContainerRules> const& containerRules);
// NOLINTEND

}
