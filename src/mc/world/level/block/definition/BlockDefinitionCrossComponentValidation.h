#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct BlockComponentGroupDescription;
// clang-format on

namespace BlockDefinitionCrossComponentValidation {
// functions
// NOLINTBEGIN
MCAPI bool validateCrossComponentConstraints(
    ::BlockComponentGroupDescription const& blockComponentGroupDescription,
    ::SemVersion const&                     originalFormatVersion
);
// NOLINTEND

} // namespace BlockDefinitionCrossComponentValidation
