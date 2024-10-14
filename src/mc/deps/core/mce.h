#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core/image/ImageUsage.h"
#include "mc/deps/core_graphics/enums/RenderState.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Blob; }
namespace mce { class Color; }
namespace mce { class UUID; }
namespace mce { struct Degree; }
namespace mce { struct Image; }
namespace mce { struct Radian; }
// clang-format on

namespace mce {
// NOLINTBEGIN
MCAPI struct mce::Radian operator*(struct mce::Radian lhs, float rhs);

MCAPI struct mce::Degree operator-(struct mce::Degree lhs, float rhs);
// NOLINTEND

}; // namespace mce
