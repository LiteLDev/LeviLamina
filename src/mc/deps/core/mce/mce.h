#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/mce/ImageFormat.h"
#include "mc/deps/core/mce/ImageUsage.h"
#include "mc/deps/core/mce/RenderState.h"
#include "mc/external/glm/mat.h"
#include "mc/external/glm/vec.h"

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
MCAPI extern std::unordered_map<std::string, ::mce::RenderState> const& featuresMap;

MCAPI struct mce::Radian operator*(struct mce::Radian lhs, float rhs);

MCAPI struct mce::Degree operator-(struct mce::Degree lhs, float rhs);
// NOLINTEND

}; // namespace mce
