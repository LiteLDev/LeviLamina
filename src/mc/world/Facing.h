#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/facing/Axis.h"
#include "mc/common/facing/Name.h"
#include "mc/common/facing/Rotation.h"
#include "mc/deps/shared_types/Facing.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/WeirdoDirection.h"

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
MCAPI uchar convertDirectionToFacingDirection(::Direction::Type direction);

MCAPI uchar convertWeirdoDirectionToFacingDirection(::WeirdoDirection weirdoDirection);

MCAPI uchar convertYRotationToFacingDirection(float yRotation);

MCAPI ::Facing::Name from2DDataValue(int data);

MCAPI uchar fromSharedTypesFacing(::SharedTypes::Facing facing);

MCAPI uchar fromVec3(::Vec3 const& dir);

MCAPI ::Facing::Axis getAxis(uchar face);

MCAPI ::std::optional<::Facing::Axis> getAxisFromStandingRotation(int standingRotation);

MCAPI uchar getClockWise(uchar face);

MCAPI ::Facing::Rotation getClosestRotation(float degree);

MCAPI uchar getCounterClockWise(uchar face);

MCAPI ::Vec3 getFaceLocation(uchar face, float u, float v);

MCAPI uchar getFacingDirection(::Vec3 const& currentPos, ::Vec3 const& TargetPos);

MCAPI ::std::vector<uchar>
getMostPrioritizedFacingDirection(::Vec2 const& viewVector, uchar clickedFace, bool isReplacingABlock);

MCAPI ::std::array<uchar, 6> getMostPrioritizedFacingDirectionFromViewVector(::Vec2 const& viewVector);

MCAPI uchar getOpposite(uchar face);

MCAPI int getRandomFace(::Random& random);

MCAPI int getRandomFaceHorizontal(::Random& random);

MCAPI ::glm::mat3x3 getRotationMatrix(uchar facing, ::Facing::Rotation rotation);

MCAPI ::std::vector<uchar> getShuffledDirections();

MCAPI ::std::vector<uchar> getShuffledDirections(::Random& random);

MCAPI int getStepX(uchar facing);

MCAPI int getStepY(uchar facing);

MCAPI int getStepZ(uchar facing);

MCAPI bool isHorizontal(uchar facing);

MCAPI bool isValidDirection(int face);

MCAPI uchar rotateFace(uchar face, ::Facing::Rotation rot);

MCAPI uchar rotateFaceAroundGivenFace(uchar faceToRotate, uchar faceToRotateAround, ::Facing::Rotation rotation);

MCAPI ::std::string_view toString(uchar face);
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

MCAPI ::std::add_lvalue_reference_t<uchar const[]> FACINGMASK_INV();

MCAPI ::std::unordered_map<::std::string, uchar> const& FROM_STRING_MAP();

MCAPI ::std::add_lvalue_reference_t<::Vec3 const[]> NORMAL();

MCAPI ::std::add_lvalue_reference_t<uchar const[]> OPPOSITE_FACING();

MCAPI ::std::add_lvalue_reference_t<int const[]> STEP_X();

MCAPI ::std::add_lvalue_reference_t<int const[]> STEP_Y();

MCAPI ::std::add_lvalue_reference_t<int const[]> STEP_Z();

MCAPI ::std::array<::std::string, 6> const& TO_STRING_ARR();
// NOLINTEND

} // namespace Facing
