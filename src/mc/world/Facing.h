#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/WeirdoDirection.h"
#include "mc/external/glm/mat.h"
#include "mc/world/Direction.h"

class Facing {
public:
    // Facing inner types declare
    // clang-format off
    class Plane;
    // clang-format on

    // Facing inner types define
    enum class Axis : int {
        X     = 0x0,
        Y     = 0x1,
        Z     = 0x2,
        Count = 0x3,
    };

    enum class Name : schar {
        Down          = 0x0,
        Up            = 0x1,
        North         = 0x2,
        South         = 0x3,
        West          = 0x4,
        East          = 0x5,
        Max           = 0x6,
        NotDefined    = 0x6,
        NumCullingIds = 0x7,
    };

    enum class Rotation : int {
        None  = 0x0,
        CCW   = 0x1, // Counter-clockwise
        OPP   = 0x2, // Opposite
        CW    = 0x3, // Clockwise
        Count = 0x4,
    };

    class Plane {
    public:
        // prevent constructor by default
        Plane& operator=(Plane const&);
        Plane(Plane const&);
        Plane();

    public:
        // NOLINTBEGIN
        MCAPI static std::vector<uchar> const HORIZONTAL;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Facing& operator=(Facing const&);
    Facing(Facing const&);
    Facing();

public:
    // NOLINTBEGIN
    MCAPI static uchar convertDirectionToFacingDirection(::Direction::Type direction);

    MCAPI static uchar convertWeirdoDirectionToFacingDirection(::WeirdoDirection weirdoDirection);

    MCAPI static uchar convertYRotationToFacingDirection(float yRotation);

    MCAPI static ::Facing::Name from2DDataValue(int data);

    MCAPI static uchar fromVec3(class Vec3 const& dir);

    MCAPI static ::Facing::Axis getAxis(uchar face);

    MCAPI static std::optional<::Facing::Axis> getAxisFromStandingRotation(int standingRotation);

    MCAPI static uchar getClockWise(uchar face);

    MCAPI static ::Facing::Rotation getClosestRotation(float degree);

    MCAPI static uchar getCounterClockWise(uchar face);

    MCAPI static class Vec3 getFaceLocation(uchar face, float u, float v);

    MCAPI static uchar getFacingDirection(class Vec3 const& currentPos, class Vec3 const&);

    MCAPI static std::vector<uchar> getMostPrioritizedFacingDirection(class Vec2 const& viewVector, uchar, bool);

    MCAPI static std::array<uchar, 6> getMostPrioritizedFacingDirectionFromViewVector(class Vec2 const& viewVector);

    MCAPI static uchar getOpposite(uchar face);

    MCAPI static int getRandomFace(class Random& random);

    MCAPI static int getRandomFaceHorizontal(class Random& random);

    MCAPI static struct glm::mat<3, 3, float, 0> getRotationMatrix(uchar facing, ::Facing::Rotation rotation);

    MCAPI static std::vector<uchar> getShuffledDirections();

    MCAPI static std::vector<uchar> getShuffledDirections(class Random& random);

    MCAPI static int getStepX(uchar);

    MCAPI static int getStepY(uchar);

    MCAPI static int getStepZ(uchar);

    MCAPI static bool isValidDirection(int face);

    MCAPI static std::array<uchar, 6> makeDirectionArray(uchar, uchar, uchar);

    MCAPI static uchar rotateFace(uchar face, ::Facing::Rotation rot);

    MCAPI static uchar
    rotateFaceAroundGivenFace(uchar faceToRotate, uchar faceToRotateAround, ::Facing::Rotation rotation);

    MCAPI static std::string_view toString(uchar face);

    MCAPI static std::array<std::vector<uchar>, 6> const ALL_EXCEPT;

    MCAPI static std::array<std::vector<uchar>, 6> const ALL_EXCEPT_AXIS_Y;

    MCAPI static std::vector<uchar> const ALL_FACES;

    MCAPI static ::Facing::Name const BY2DDATA[];

    MCAPI static ::Facing::Name const DIRECTIONS[];

    MCAPI static class BlockPos const DIRECTION[];

    MCAPI static uchar const FACINGMASK[];

    MCAPI static uchar const FACINGMASK_INV[];

    MCAPI static std::unordered_map<std::string, uchar> const FROM_STRING_MAP;

    MCAPI static class Vec3 const NORMAL[];

    MCAPI static uchar const OPPOSITE_FACING[];

    MCAPI static int const STEP_X[];

    MCAPI static int const STEP_Y[];

    MCAPI static int const STEP_Z[];

    MCAPI static std::array<std::string, 6> const TO_STRING_ARR;

    // NOLINTEND
};
