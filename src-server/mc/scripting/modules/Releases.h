#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleCommon::Releases {
// static variables
// NOLINTBEGIN
MCNAPI ::std::add_lvalue_reference_t<::Scripting::Version const[]> ALL_V1_RELEASES();

MCNAPI ::Scripting::Version const& LATEST();

MCNAPI ::Scripting::Version const& V1_0_0();

MCNAPI ::Scripting::Version const& V1_1_0();

MCNAPI ::Scripting::Version const& V1_2_0();
// NOLINTEND

}
