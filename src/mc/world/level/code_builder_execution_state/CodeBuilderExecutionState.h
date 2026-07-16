#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/code_builder_execution_state/CodeStatus.h"

namespace CodeBuilderExecutionState {
// functions
// NOLINTBEGIN
MCNAPI ::CodeBuilderExecutionState::CodeStatus toCodeStatus(::std::string_view status);
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<::std::string_view, ::CodeBuilderExecutionState::CodeStatus> const& statusMap();
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::unordered_map<::std::string_view, ::CodeBuilderExecutionState::CodeStatus> const& statusMap();
#endif
// NOLINTEND

} // namespace CodeBuilderExecutionState
