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
// symbol:
// ?featuresMap@mce@@3AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4RenderState@mce@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4RenderState@mce@@@std@@@2@@std@@EB
MCAPI extern std::unordered_map<std::string, ::mce::RenderState> const& featuresMap;

// symbol: ??Dmce@@YA?AUDegree@0@MU10@@Z
MCAPI struct mce::Degree operator*(float lhs, struct mce::Degree rhs);

// symbol: ??Dmce@@YA?AURadian@0@U10@M@Z
MCAPI struct mce::Radian operator*(struct mce::Radian lhs, float rhs);

// symbol: ??Hmce@@YA?AUDegree@0@U10@M@Z
MCAPI struct mce::Degree operator+(struct mce::Degree lhs, float rhs);

// symbol: ??Gmce@@YA?AUDegree@0@U10@M@Z
MCAPI struct mce::Degree operator-(struct mce::Degree lhs, float rhs);

// symbol: ??Mmce@@YA_NUDegree@0@M@Z
MCAPI bool operator<(struct mce::Degree lhs, float rhs);
// NOLINTEND

}; // namespace mce
