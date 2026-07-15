#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Input { struct BindingInfo; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::Input {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::EnumBinding bindGeneralInputBindingCategoryEnum();

MCNAPI bool operator==(::Editor::Input::BindingInfo const&, ::Editor::Input::BindingInfo const&);
// NOLINTEND

} // namespace Editor::Input
