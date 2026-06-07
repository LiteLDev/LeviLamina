#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Facing.h"
#include "mc/legacy/facing/Axis.h"
#include "mc/legacy/facing/Name.h"
#include "mc/legacy/facing/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/WeirdoDirection.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Matrix;
class Random;
class Vec2;
class Vec3;
namespace Facing { class StringMap; }
// clang-format on

namespace Facing {
// functions
// NOLINTBEGIN
MCAPI uchar computeRotatedFacingID(::Matrix const& transformMatrix, uchar originalFacingID);

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

MCAPI ::std::array<uchar, 6> getShuffledDirections();

MCAPI ::std::array<uchar, 6> getShuffledDirections(::Random& random);

MCAPI int getStepX(uchar facing);

MCAPI int getStepY(uchar facing);

MCAPI int getStepZ(uchar facing);

MCAPI bool isHorizontal(uchar facing);

MCAPI bool isValidDirection(int face);

MCAPI uchar rotateFace(uchar face, ::Facing::Rotation rot);

MCAPI uchar rotateFaceAroundGivenFace(uchar faceToRotate, uchar faceToRotateAround, ::Facing::Rotation rotation);

MCFOLD ::SharedTypes::Facing toSharedTypesFacing(uchar facing);

MCAPI ::std::string_view toString(uchar face);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::array<::std::array<uchar, 5>, 6> const& ALL_EXCEPT();

MCAPI ::std::array<uchar, 6> const& ALL_FACES();

MCAPI ::std::array<::Facing::Name, 4> const& BY2DDATA();

MCAPI ::std::array<::BlockPos, 6> const& DIRECTION();

MCAPI ::std::array<::Facing::Name, 6> const& DIRECTIONS();

MCAPI ::std::array<uchar, 6> const& FACINGMASK();

MCAPI ::Facing::StringMap const& FROM_STRING_MAP();

MCAPI ::std::array<::Vec3, 6> const& NORMAL();

MCAPI ::std::add_lvalue_reference_t<uchar const[]> OPPOSITE_FACING();

MCAPI ::std::array<schar, 6> const& STEP_X();

MCAPI ::std::array<schar, 6> const& STEP_Y();

MCAPI ::std::array<schar, 6> const& STEP_Z();

MCAPI ::std::array<::std::string_view, 6> const& TO_STRING_ARR();
// NOLINTEND

} // namespace Facing
