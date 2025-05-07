#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Name.h"
#include "mc/legacy/facing/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec2;
class Vec3;
namespace Facing { class StringMap; }
// clang-format on

namespace Facing {
// functions
// NOLINTBEGIN
MCNAPI uchar fromVec3(::Vec3 const& dir);

MCNAPI ::std::vector<uchar>
getMostPrioritizedFacingDirection(::Vec2 const& viewVector, uchar clickedFace, bool isReplacingABlock);

MCNAPI ::std::array<uchar, 6> getMostPrioritizedFacingDirectionFromViewVector(::Vec2 const& viewVector);

MCNAPI uchar getOpposite(uchar face);

MCNAPI ::glm::mat3x3 getRotationMatrix(uchar facing, ::Facing::Rotation rotation);

MCNAPI int getStepX(uchar facing);

MCNAPI int getStepY(uchar facing);

MCNAPI int getStepZ(uchar facing);

MCNAPI ::std::array<uchar, 6> makeDirectionArray(uchar axis1, uchar axis2, uchar axis3);

MCNAPI uchar rotateFaceAroundGivenFace(uchar faceToRotate, uchar faceToRotateAround, ::Facing::Rotation rotation);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::array<::std::array<uchar, 5>, 6> const& ALL_EXCEPT();

MCNAPI ::std::array<uchar, 6> const& ALL_FACES();

MCNAPI ::std::array<::Facing::Name, 4> const& BY2DDATA();

MCNAPI ::std::array<::BlockPos, 6> const& DIRECTION();

MCNAPI ::std::array<::Facing::Name, 6> const& DIRECTIONS();

MCNAPI ::std::array<uchar, 6> const& FACINGMASK();

MCNAPI ::Facing::StringMap const& FROM_STRING_MAP();

MCNAPI ::std::array<::Vec3, 6> const& NORMAL();

MCNAPI ::std::add_lvalue_reference_t<uchar const[]> OPPOSITE_FACING();

MCNAPI ::std::array<schar, 6> const& STEP_X();

MCNAPI ::std::array<schar, 6> const& STEP_Y();

MCNAPI ::std::array<schar, 6> const& STEP_Z();

MCNAPI ::std::array<::std::string_view, 6> const& TO_STRING_ARR();
// NOLINTEND

} // namespace Facing
