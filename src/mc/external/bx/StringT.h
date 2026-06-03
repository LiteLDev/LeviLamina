#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/external/bx/StringView.h"

namespace bx {

// StringT is actually a template class, this is a workaround.
class StringT : StringView {};

} // namespace bx
