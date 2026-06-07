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

MCNAPI bool floatEqualsEpsilon(float a, float b, float epsilon);

MCNAPI ::glm::mat4x4 generateRotationAroundPivotMat(::glm::mat4x4 const& rotation, ::glm::vec3 const& pivot);

#ifdef LL_PLAT_C
MCNAPI void getBasis(::glm::vec3 const& vector, ::glm::vec3& resultA, ::glm::vec3& resultB);

MCNAPI ::glm::vec3
getBezier(::glm::vec3 const& start, ::glm::vec3 const& control, ::glm::vec3 const& end, float factor);

MCNAPI float
getPointToLineSegmentDistance(::glm::vec2 const& v, ::glm::vec2 const& w, ::glm::vec2 const& p, float* r_t);

MCNAPI ::glm::vec2 getRotationFromNegZToVector(::glm::vec3 const& vector);
#endif

MCNAPI bool isLinearlyDependent(::Vec3 const& a, ::Vec3 const& b, float epsilon);
// NOLINTEND

} // namespace mce::MathUtility
