#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleCommon::Releases {
// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<::Scripting::Version const[]> ALL_V1_RELEASES();

MCAPI ::Scripting::Version const& LATEST();

MCAPI ::Scripting::Version const& V1_0_0();

MCAPI ::Scripting::Version const& V1_1_0();

MCAPI ::Scripting::Version const& V1_2_0();
// NOLINTEND

} // namespace ScriptModuleCommon::Releases
