#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Name.h"
#include "mc/legacy/facing/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Random;
class Vec2;
class Vec3;
// clang-format on

namespace Facing {
// functions
// NOLINTBEGIN
MCAPI uchar fromVec3(::Vec3 const& dir);

MCAPI ::std::vector<uchar>
getMostPrioritizedFacingDirection(::Vec2 const& viewVector, uchar clickedFace, bool isReplacingABlock);

MCAPI ::std::array<uchar, 6> getMostPrioritizedFacingDirectionFromViewVector(::Vec2 const& viewVector);

MCAPI uchar getOpposite(uchar face);

MCAPI ::glm::mat3x3 getRotationMatrix(uchar facing, ::Facing::Rotation rotation);

MCAPI ::std::vector<uchar> getShuffledDirections(::Random& random);

MCAPI int getStepX(uchar facing);

MCAPI int getStepY(uchar facing);

MCAPI int getStepZ(uchar facing);

MCAPI ::std::array<uchar, 6> makeDirectionArray(uchar axis1, uchar axis2, uchar axis3);

MCAPI uchar rotateFaceAroundGivenFace(uchar faceToRotate, uchar faceToRotateAround, ::Facing::Rotation rotation);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::array<::std::vector<uchar>, 6> const& ALL_EXCEPT();

MCAPI ::std::array<::std::vector<uchar>, 6> const& ALL_EXCEPT_AXIS_Y();

MCAPI ::std::vector<uchar> const& ALL_FACES();

MCAPI ::std::add_lvalue_reference_t<::Facing::Name const[]> BY2DDATA();

MCAPI ::std::add_lvalue_reference_t<::BlockPos const[]> DIRECTION();

MCAPI ::std::add_lvalue_reference_t<::Facing::Name const[]> DIRECTIONS();

MCAPI ::std::add_lvalue_reference_t<uchar const[]> FACINGMASK();

MCAPI ::std::unordered_map<::std::string, uchar> const& FROM_STRING_MAP();

MCAPI ::std::add_lvalue_reference_t<::Vec3 const[]> NORMAL();

MCAPI ::std::add_lvalue_reference_t<uchar const[]> OPPOSITE_FACING();

MCAPI ::std::add_lvalue_reference_t<int const[]> STEP_X();

MCAPI ::std::add_lvalue_reference_t<int const[]> STEP_Y();

MCAPI ::std::add_lvalue_reference_t<int const[]> STEP_Z();

MCAPI ::std::array<::std::string, 6> const& TO_STRING_ARR();
// NOLINTEND

} // namespace Facing
