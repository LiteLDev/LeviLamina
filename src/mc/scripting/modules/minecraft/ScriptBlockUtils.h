#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
// clang-format on

namespace ScriptModuleMinecraft::ScriptBlockUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCAPI ::std::vector<::std::string> collectTags(::Block const& block);
#endif

MCAPI ::BlockDescriptor createBlockDescriptor(
    ::std::string                                                                                  blockName,
    ::std::optional<::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>>> properties
);
// NOLINTEND

} // namespace ScriptModuleMinecraft::ScriptBlockUtils
