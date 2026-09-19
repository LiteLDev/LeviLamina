#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

struct SurfaceParameters : public ::std::variant<::HWND__*, ::std::monostate> {};

} // namespace dragon::platform
