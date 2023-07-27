#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

    enum class Name : char {
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
        Plane& operator=(Plane const&) = delete;
        Plane(Plane const&)            = delete;
        Plane()                        = delete;

    public:
        /**
         * @symbol ?HORIZONTAL\@Plane\@Facing\@\@2V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@B
         */
        MCAPI static std::vector<unsigned char> const HORIZONTAL; // NOLINT
    };

public:
    // prevent constructor by default
    Facing& operator=(Facing const&) = delete;
    Facing(Facing const&)            = delete;
    Facing()                         = delete;

public:
    /**
     * @symbol ?convertDirectionToFacingDirection\@Facing\@\@SAEW4Type\@Direction\@\@\@Z
     */
    MCAPI static unsigned char convertDirectionToFacingDirection(enum class Direction::Type); // NOLINT
    /**
     * @symbol ?convertWeirdoDirectionToFacingDirection\@Facing\@\@SAEW4WeirdoDirection\@\@\@Z
     */
    MCAPI static unsigned char convertWeirdoDirectionToFacingDirection(enum class WeirdoDirection); // NOLINT
    /**
     * @symbol ?convertYRotationToFacingDirection\@Facing\@\@SAEM\@Z
     */
    MCAPI static unsigned char convertYRotationToFacingDirection(float); // NOLINT
    /**
     * @symbol ?from2DDataValue\@Facing\@\@SA?AW4Name\@1\@H\@Z
     */
    MCAPI static enum class Facing::Name from2DDataValue(int); // NOLINT
    /**
     * @symbol ?fromVec3\@Facing\@\@SAEAEBVVec3\@\@\@Z
     */
    MCAPI static unsigned char fromVec3(class Vec3 const&); // NOLINT
    /**
     * @symbol ?getAxis\@Facing\@\@SA?AW4Axis\@1\@E\@Z
     */
    MCAPI static enum class Facing::Axis getAxis(unsigned char); // NOLINT
    /**
     * @symbol ?getAxisFromStandingRotation\@Facing\@\@SA?AV?$optional\@W4Axis\@Facing\@\@\@std\@\@H\@Z
     */
    MCAPI static class std::optional<enum class Facing::Axis> getAxisFromStandingRotation(int); // NOLINT
    /**
     * @symbol ?getClockWise\@Facing\@\@SAEE\@Z
     */
    MCAPI static unsigned char getClockWise(unsigned char); // NOLINT
    /**
     * @symbol ?getClosestRotation\@Facing\@\@SA?AW4Rotation\@1\@M\@Z
     */
    MCAPI static enum class Facing::Rotation getClosestRotation(float); // NOLINT
    /**
     * @symbol ?getCounterClockWise\@Facing\@\@SAEE\@Z
     */
    MCAPI static unsigned char getCounterClockWise(unsigned char); // NOLINT
    /**
     * @symbol ?getFaceLocation\@Facing\@\@SA?AVVec3\@\@EMM\@Z
     */
    MCAPI static class Vec3 getFaceLocation(unsigned char, float, float); // NOLINT
    /**
     * @symbol ?getFacingDirection\@Facing\@\@SAEAEBVVec3\@\@0\@Z
     */
    MCAPI static unsigned char getFacingDirection(class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?getMostPrioritizedFacingDirection\@Facing\@\@SA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@AEBVVec2\@\@E_N\@Z
     */
    MCAPI static std::vector<unsigned char>
    getMostPrioritizedFacingDirection(class Vec2 const&, unsigned char, bool); // NOLINT
    /**
     * @symbol ?getMostPrioritizedFacingDirectionFromViewVector\@Facing\@\@SA?AV?$array\@E$05\@std\@\@AEBVVec2\@\@\@Z
     */
    MCAPI static class std::array<unsigned char, 6>
    getMostPrioritizedFacingDirectionFromViewVector(class Vec2 const&); // NOLINT
    /**
     * @symbol ?getOpposite\@Facing\@\@SAEE\@Z
     */
    MCAPI static unsigned char getOpposite(unsigned char); // NOLINT
    /**
     * @symbol ?getRandomFace\@Facing\@\@SAHAEAVRandom\@\@\@Z
     */
    MCAPI static int getRandomFace(class Random&); // NOLINT
    /**
     * @symbol ?getRandomFaceHorizontal\@Facing\@\@SAHAEAVRandom\@\@\@Z
     */
    MCAPI static int getRandomFaceHorizontal(class Random&); // NOLINT
    /**
     * @symbol ?getRotationMatrix\@Facing\@\@SA?AU?$mat\@$02$02M$0A\@\@glm\@\@EW4Rotation\@1\@\@Z
     */
    MCAPI static struct glm::mat<3, 3, float, 0>
    getRotationMatrix(unsigned char, enum class Facing::Rotation); // NOLINT
    /**
     * @symbol ?getShuffledDirections\@Facing\@\@SA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::vector<unsigned char> getShuffledDirections(); // NOLINT
    /**
     * @symbol ?getShuffledDirections\@Facing\@\@SA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static std::vector<unsigned char> getShuffledDirections(class Random&); // NOLINT
    /**
     * @symbol ?getStepX\@Facing\@\@SAHE\@Z
     */
    MCAPI static int getStepX(unsigned char); // NOLINT
    /**
     * @symbol ?getStepY\@Facing\@\@SAHE\@Z
     */
    MCAPI static int getStepY(unsigned char); // NOLINT
    /**
     * @symbol ?getStepZ\@Facing\@\@SAHE\@Z
     */
    MCAPI static int getStepZ(unsigned char); // NOLINT
    /**
     * @symbol ?isValidDirection\@Facing\@\@SA_NH\@Z
     */
    MCAPI static bool isValidDirection(int); // NOLINT
    /**
     * @symbol ?makeDirectionArray\@Facing\@\@SA?AV?$array\@E$05\@std\@\@EEE\@Z
     */
    MCAPI static class std::array<unsigned char, 6>
    makeDirectionArray(unsigned char, unsigned char, unsigned char); // NOLINT
    /**
     * @symbol ?rotateFace\@Facing\@\@SAEEW4Rotation\@1\@\@Z
     */
    MCAPI static unsigned char rotateFace(unsigned char, enum class Facing::Rotation); // NOLINT
    /**
     * @symbol ?rotateFaceAroundGivenFace\@Facing\@\@SAEEEW4Rotation\@1\@\@Z
     */
    MCAPI static unsigned char
    rotateFaceAroundGivenFace(unsigned char, unsigned char, enum class Facing::Rotation); // NOLINT
    /**
     * @symbol ?toString\@Facing\@\@SA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@E\@Z
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> toString(unsigned char); // NOLINT
    /**
     * @symbol ?ALL_EXCEPT\@Facing\@\@2V?$array\@V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@$05\@std\@\@B
     */
    MCAPI static class std::array<std::vector<unsigned char>, 6> const ALL_EXCEPT; // NOLINT
    /**
     * @symbol ?ALL_EXCEPT_AXIS_Y\@Facing\@\@2V?$array\@V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@$05\@std\@\@B
     */
    MCAPI static class std::array<std::vector<unsigned char>, 6> const ALL_EXCEPT_AXIS_Y; // NOLINT
    /**
     * @symbol ?ALL_FACES\@Facing\@\@2V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<unsigned char> const ALL_FACES; // NOLINT
    /**
     * @symbol ?BY2DDATA\@Facing\@\@2QBW4Name\@1\@B
     */
    MCAPI static enum class Facing::Name const BY2DDATA[]; // NOLINT
    /**
     * @symbol ?DIRECTIONS\@Facing\@\@2QBW4Name\@1\@B
     */
    MCAPI static enum class Facing::Name const DIRECTIONS[]; // NOLINT
    /**
     * @symbol ?DIRECTION\@Facing\@\@2QBVBlockPos\@\@B
     */
    MCAPI static class BlockPos const DIRECTION[]; // NOLINT
    /**
     * @symbol ?FACINGMASK\@Facing\@\@2QBEB
     */
    MCAPI static unsigned char const FACINGMASK[]; // NOLINT
    /**
     * @symbol ?FACINGMASK_INV\@Facing\@\@2QBEB
     */
    MCAPI static unsigned char const FACINGMASK_INV[]; // NOLINT
    /**
     * @symbol
     * ?FROM_STRING_MAP\@Facing\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@EU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@E\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<
        std::string,
        unsigned char,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,                                                               // NOLINT
        class std::allocator<struct std::pair<std::string const, unsigned char>>> const FROM_STRING_MAP; // NOLINT
    /**
     * @symbol ?NORMAL\@Facing\@\@2QBVVec3\@\@B
     */
    MCAPI static class Vec3 const NORMAL[]; // NOLINT
    /**
     * @symbol ?OPPOSITE_FACING\@Facing\@\@2QBEB
     */
    MCAPI static unsigned char const OPPOSITE_FACING[]; // NOLINT
    /**
     * @symbol ?STEP_X\@Facing\@\@2QBHB
     */
    MCAPI static int const STEP_X[]; // NOLINT
    /**
     * @symbol ?STEP_Y\@Facing\@\@2QBHB
     */
    MCAPI static int const STEP_Y[]; // NOLINT
    /**
     * @symbol ?STEP_Z\@Facing\@\@2QBHB
     */
    MCAPI static int const STEP_Z[]; // NOLINT
    /**
     * @symbol
     * ?TO_STRING_ARR\@Facing\@\@2V?$array\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$05\@std\@\@B
     */
    MCAPI static class std::array<std::string, 6> const TO_STRING_ARR; // NOLINT
};
