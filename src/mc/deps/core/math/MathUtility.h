#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace mce::MathUtility { struct GramSchmidtResult; }
// clang-format on

namespace mce::MathUtility {
// functions
// NOLINTBEGIN
MCNAPI ::mce::MathUtility::GramSchmidtResult computeGramSchmidtBasis(::Vec3 const& forward, ::Vec3 const& up);

#ifdef LL_PLAT_C
MCNAPI ::glm::vec2 getRotationFromNegZToVector(::glm::vec3 const& vector);
#endif
// NOLINTEND

} // namespace mce::MathUtility
