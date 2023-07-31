#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { enum class RenderState; }
namespace mce { struct Degree; }
namespace mce { struct Radian; }
// clang-format on

namespace mce {
// NOLINTBEGIN
/**
 * @symbol
 * ?featuresMap\@mce\@\@3AEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4RenderState\@mce\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4RenderState\@mce\@\@\@std\@\@\@2\@\@std\@\@EB
 */
MCAPI extern std::unordered_map<std::string, enum class mce::RenderState> const& featuresMap;
/**
 * @symbol ??Dmce\@\@YA?AURadian\@0\@U10\@M\@Z
 */
MCAPI struct mce::Radian operator*(struct mce::Radian, float);
/**
 * @symbol ??Gmce\@\@YA?AUDegree\@0\@U10\@M\@Z
 */
MCAPI struct mce::Degree operator-(struct mce::Degree, float);
// NOLINTEND

}; // namespace mce
