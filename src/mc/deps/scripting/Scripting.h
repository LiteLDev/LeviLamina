#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ArgumentDetails; }
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting {
// functions
// NOLINTBEGIN
MCNAPI uint GetDefaultArgCount(::std::vector<::Scripting::ArgumentDetails> const& details);

MCNAPI uint GetInjectedArgCount(::Scripting::Reflection::IFunction* function);
// NOLINTEND

} // namespace Scripting
