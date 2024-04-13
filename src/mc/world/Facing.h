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
        // symbol: ?HORIZONTAL@Plane@Facing@@2V?$vector@EV?$allocator@E@std@@@std@@B
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
    // symbol: ?convertDirectionToFacingDirection@Facing@@SAEW4Type@Direction@@@Z
    MCAPI static uchar convertDirectionToFacingDirection(::Direction::Type direction);

    // symbol: ?convertWeirdoDirectionToFacingDirection@Facing@@SAEW4WeirdoDirection@@@Z
    MCAPI static uchar convertWeirdoDirectionToFacingDirection(::WeirdoDirection weirdoDirection);

    // symbol: ?convertYRotationToFacingDirection@Facing@@SAEM@Z
    MCAPI static uchar convertYRotationToFacingDirection(float yRotation);

    // symbol: ?from2DDataValue@Facing@@SA?AW4Name@1@H@Z
    MCAPI static ::Facing::Name from2DDataValue(int data);

    // symbol: ?fromVec3@Facing@@SAEAEBVVec3@@@Z
    MCAPI static uchar fromVec3(class Vec3 const& dir);

    // symbol: ?getAxis@Facing@@SA?AW4Axis@1@E@Z
    MCAPI static ::Facing::Axis getAxis(uchar face);

    // symbol: ?getAxisFromStandingRotation@Facing@@SA?AV?$optional@W4Axis@Facing@@@std@@H@Z
    MCAPI static std::optional<::Facing::Axis> getAxisFromStandingRotation(int standingRotation);

    // symbol: ?getClockWise@Facing@@SAEE@Z
    MCAPI static uchar getClockWise(uchar face);

    // symbol: ?getClosestRotation@Facing@@SA?AW4Rotation@1@M@Z
    MCAPI static ::Facing::Rotation getClosestRotation(float degree);

    // symbol: ?getCounterClockWise@Facing@@SAEE@Z
    MCAPI static uchar getCounterClockWise(uchar face);

    // symbol: ?getFaceLocation@Facing@@SA?AVVec3@@EMM@Z
    MCAPI static class Vec3 getFaceLocation(uchar face, float u, float v);

    // symbol: ?getFacingDirection@Facing@@SAEAEBVVec3@@0@Z
    MCAPI static uchar getFacingDirection(class Vec3 const& currentPos, class Vec3 const&);

    // symbol: ?getMostPrioritizedFacingDirection@Facing@@SA?AV?$vector@EV?$allocator@E@std@@@std@@AEBVVec2@@E_N@Z
    MCAPI static std::vector<uchar> getMostPrioritizedFacingDirection(class Vec2 const& viewVector, uchar, bool);

    // symbol: ?getMostPrioritizedFacingDirectionFromViewVector@Facing@@SA?AV?$array@E$05@std@@AEBVVec2@@@Z
    MCAPI static std::array<uchar, 6> getMostPrioritizedFacingDirectionFromViewVector(class Vec2 const& viewVector);

    // symbol: ?getOpposite@Facing@@SAEE@Z
    MCAPI static uchar getOpposite(uchar face);

    // symbol: ?getRandomFace@Facing@@SAHAEAVRandom@@@Z
    MCAPI static int getRandomFace(class Random& random);

    // symbol: ?getRandomFaceHorizontal@Facing@@SAHAEAVRandom@@@Z
    MCAPI static int getRandomFaceHorizontal(class Random& random);

    // symbol: ?getRotationMatrix@Facing@@SA?AU?$mat@$02$02M$0A@@glm@@EW4Rotation@1@@Z
    MCAPI static struct glm::mat<3, 3, float, 0> getRotationMatrix(uchar facing, ::Facing::Rotation rotation);

    // symbol: ?getShuffledDirections@Facing@@SA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
    MCAPI static std::vector<uchar> getShuffledDirections();

    // symbol: ?getShuffledDirections@Facing@@SA?AV?$vector@EV?$allocator@E@std@@@std@@AEAVRandom@@@Z
    MCAPI static std::vector<uchar> getShuffledDirections(class Random& random);

    // symbol: ?getStepX@Facing@@SAHE@Z
    MCAPI static int getStepX(uchar);

    // symbol: ?getStepY@Facing@@SAHE@Z
    MCAPI static int getStepY(uchar);

    // symbol: ?getStepZ@Facing@@SAHE@Z
    MCAPI static int getStepZ(uchar);

    // symbol: ?isValidDirection@Facing@@SA_NH@Z
    MCAPI static bool isValidDirection(int face);

    // symbol: ?makeDirectionArray@Facing@@SA?AV?$array@E$05@std@@EEE@Z
    MCAPI static std::array<uchar, 6> makeDirectionArray(uchar, uchar, uchar);

    // symbol: ?rotateFace@Facing@@SAEEW4Rotation@1@@Z
    MCAPI static uchar rotateFace(uchar face, ::Facing::Rotation rot);

    // symbol: ?rotateFaceAroundGivenFace@Facing@@SAEEEW4Rotation@1@@Z
    MCAPI static uchar
    rotateFaceAroundGivenFace(uchar faceToRotate, uchar faceToRotateAround, ::Facing::Rotation rotation);

    // symbol: ?toString@Facing@@SA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@E@Z
    MCAPI static std::string_view toString(uchar face);

    // symbol: ?ALL_EXCEPT@Facing@@2V?$array@V?$vector@EV?$allocator@E@std@@@std@@$05@std@@B
    MCAPI static std::array<std::vector<uchar>, 6> const ALL_EXCEPT;

    // symbol: ?ALL_EXCEPT_AXIS_Y@Facing@@2V?$array@V?$vector@EV?$allocator@E@std@@@std@@$05@std@@B
    MCAPI static std::array<std::vector<uchar>, 6> const ALL_EXCEPT_AXIS_Y;

    // symbol: ?ALL_FACES@Facing@@2V?$vector@EV?$allocator@E@std@@@std@@B
    MCAPI static std::vector<uchar> const ALL_FACES;

    // symbol: ?BY2DDATA@Facing@@2QBW4Name@1@B
    MCAPI static ::Facing::Name const BY2DDATA[];

    // symbol: ?DIRECTIONS@Facing@@2QBW4Name@1@B
    MCAPI static ::Facing::Name const DIRECTIONS[];

    // symbol: ?DIRECTION@Facing@@2QBVBlockPos@@B
    MCAPI static class BlockPos const DIRECTION[];

    // symbol: ?FACINGMASK@Facing@@2QBEB
    MCAPI static uchar const FACINGMASK[];

    // symbol: ?FACINGMASK_INV@Facing@@2QBEB
    MCAPI static uchar const FACINGMASK_INV[];

    // symbol:
    // ?FROM_STRING_MAP@Facing@@2V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@EU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@E@std@@@2@@std@@B
    MCAPI static std::unordered_map<std::string, uchar> const FROM_STRING_MAP;

    // symbol: ?NORMAL@Facing@@2QBVVec3@@B
    MCAPI static class Vec3 const NORMAL[];

    // symbol: ?OPPOSITE_FACING@Facing@@2QBEB
    MCAPI static uchar const OPPOSITE_FACING[];

    // symbol: ?STEP_X@Facing@@2QBHB
    MCAPI static int const STEP_X[];

    // symbol: ?STEP_Y@Facing@@2QBHB
    MCAPI static int const STEP_Y[];

    // symbol: ?STEP_Z@Facing@@2QBHB
    MCAPI static int const STEP_Z[];

    // symbol: ?TO_STRING_ARR@Facing@@2V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$05@std@@B
    MCAPI static std::array<std::string, 6> const TO_STRING_ARR;

    // NOLINTEND
};
