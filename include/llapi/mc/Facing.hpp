/**
 * @file  Facing.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Direction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
namespace glm {
template <int a1, int a2, typename a3, int a4>
struct mat;
}

#undef BEFORE_EXTRA

/**
 * @brief MC class Facing.
 *
 */
class Facing {

#define AFTER_EXTRA
// Add Member There
public:
enum class Rotation : unsigned int;
enum class Name : unsigned char;
enum class Axis : int;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FACING
public:
    class Facing& operator=(class Facing const &) = delete;
    Facing(class Facing const &) = delete;
    Facing() = delete;
#endif

public:
    /**
     * @symbol  ?ALL_EXCEPT\@Facing\@\@2V?$array\@V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@$05\@std\@\@B
     */
    MCAPI static class std::array<std::vector<unsigned char>, 6> const ALL_EXCEPT;
    /**
     * @symbol  ?ALL_EXCEPT_AXIS_Y\@Facing\@\@2V?$array\@V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@$05\@std\@\@B
     */
    MCAPI static class std::array<std::vector<unsigned char>, 6> const ALL_EXCEPT_AXIS_Y;
    /**
     * @symbol  ?ALL_FACES\@Facing\@\@2V?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<unsigned char> const ALL_FACES;
    /**
     * @symbol  ?BY2DDATA\@Facing\@\@2QBW4Name\@1\@B
     */
    MCAPI static enum class Facing::Name const BY2DDATA[];
    /**
     * @symbol  ?DIRECTIONS\@Facing\@\@2QBW4Name\@1\@B
     */
    MCAPI static enum class Facing::Name const DIRECTIONS[];
    /**
     * @symbol  ?DIRECTION\@Facing\@\@2QBVBlockPos\@\@B
     */
    MCAPI static class BlockPos const DIRECTION[];
    /**
     * @symbol  ?FACINGMASK\@Facing\@\@2QBEB
     */
    MCAPI static unsigned char const FACINGMASK[];
    /**
     * @symbol  ?FACINGMASK_INV\@Facing\@\@2QBEB
     */
    MCAPI static unsigned char const FACINGMASK_INV[];
    /**
     * @symbol  ?NORMAL\@Facing\@\@2QBVVec3\@\@B
     */
    MCAPI static class Vec3 const NORMAL[];
    /**
     * @symbol  ?OPPOSITE_FACING\@Facing\@\@2QBEB
     */
    MCAPI static unsigned char const OPPOSITE_FACING[];
    /**
     * @symbol  ?STEP_X\@Facing\@\@2QBHB
     */
    MCAPI static int const STEP_X[];
    /**
     * @symbol  ?STEP_Y\@Facing\@\@2QBHB
     */
    MCAPI static int const STEP_Y[];
    /**
     * @symbol  ?STEP_Z\@Facing\@\@2QBHB
     */
    MCAPI static int const STEP_Z[];
    /**
     * @symbol  ?convertDirectionToFacingDirection\@Facing\@\@SAEW4Type\@Direction\@\@\@Z
     */
    MCAPI static unsigned char convertDirectionToFacingDirection(enum class Direction::Type);
    /**
     * @symbol  ?convertWeirdoDirectionToFacingDirection\@Facing\@\@SAEW4WeirdoDirection\@\@\@Z
     */
    MCAPI static unsigned char convertWeirdoDirectionToFacingDirection(enum class WeirdoDirection);
    /**
     * @symbol  ?convertYRotationToFacingDirection\@Facing\@\@SAEM\@Z
     */
    MCAPI static unsigned char convertYRotationToFacingDirection(float);
    /**
     * @symbol  ?from2DDataValue\@Facing\@\@SA?AW4Name\@1\@H\@Z
     */
    MCAPI static enum class Facing::Name from2DDataValue(int);
    /**
     * @symbol  ?fromVec3\@Facing\@\@SAEAEBVVec3\@\@\@Z
     */
    MCAPI static unsigned char fromVec3(class Vec3 const &);
    /**
     * @symbol  ?getAxis\@Facing\@\@SA?AW4Axis\@1\@E\@Z
     */
    MCAPI static enum class Facing::Axis getAxis(unsigned char);
    /**
     * @symbol  ?getAxisFromStandingRotation\@Facing\@\@SA?AV?$optional\@W4Axis\@Facing\@\@\@std\@\@H\@Z
     */
    MCAPI static class std::optional<enum class Facing::Axis> getAxisFromStandingRotation(int);
    /**
     * @symbol  ?getClockWise\@Facing\@\@SAEE\@Z
     */
    MCAPI static unsigned char getClockWise(unsigned char);
    /**
     * @symbol  ?getClosestRotation\@Facing\@\@SA?AW4Rotation\@1\@M\@Z
     */
    MCAPI static enum class Facing::Rotation getClosestRotation(float);
    /**
     * @symbol  ?getCounterClockWise\@Facing\@\@SAEE\@Z
     */
    MCAPI static unsigned char getCounterClockWise(unsigned char);
    /**
     * @symbol  ?getFaceLocation\@Facing\@\@SA?AVVec3\@\@EMM\@Z
     */
    MCAPI static class Vec3 getFaceLocation(unsigned char, float, float);
    /**
     * @symbol  ?getFaceLocationXY\@Facing\@\@SA?AVVec2\@\@EAEBVVec3\@\@\@Z
     */
    MCAPI static class Vec2 getFaceLocationXY(unsigned char, class Vec3 const &);
    /**
     * @symbol  ?getFacingDirection\@Facing\@\@SAEAEBVVec3\@\@0\@Z
     */
    MCAPI static unsigned char getFacingDirection(class Vec3 const &, class Vec3 const &);
    /**
     * @symbol  ?getMostPrioritizedFacingDirection\@Facing\@\@SA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@AEBVVec2\@\@E_N\@Z
     */
    MCAPI static std::vector<unsigned char> getMostPrioritizedFacingDirection(class Vec2 const &, unsigned char, bool);
    /**
     * @symbol  ?getMostPrioritizedFacingDirectionFromViewVector\@Facing\@\@SA?AV?$array\@E$05\@std\@\@AEBVVec2\@\@\@Z
     */
    MCAPI static class std::array<unsigned char, 6> getMostPrioritizedFacingDirectionFromViewVector(class Vec2 const &);
    /**
     * @symbol  ?getOpposite\@Facing\@\@SAEE\@Z
     */
    MCAPI static unsigned char getOpposite(unsigned char);
    /**
     * @symbol  ?getRandomFace\@Facing\@\@SAHAEAVRandom\@\@\@Z
     */
    MCAPI static int getRandomFace(class Random &);
    /**
     * @symbol  ?getRandomFaceHorizontal\@Facing\@\@SAHAEAVRandom\@\@\@Z
     */
    MCAPI static int getRandomFaceHorizontal(class Random &);
    /**
     * @symbol  ?getRotationMatrix\@Facing\@\@SA?AU?$mat\@$02$02M$0A\@\@glm\@\@EW4Rotation\@1\@\@Z
     */
    MCAPI static struct glm::mat<3, 3, float, 0> getRotationMatrix(unsigned char, enum class Facing::Rotation);
    /**
     * @symbol  ?getShuffledDirections\@Facing\@\@SA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static std::vector<unsigned char> getShuffledDirections(class Random &);
    /**
     * @symbol  ?getShuffledDirections\@Facing\@\@SA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::vector<unsigned char> getShuffledDirections();
    /**
     * @symbol  ?getStepX\@Facing\@\@SAHE\@Z
     */
    MCAPI static int getStepX(unsigned char);
    /**
     * @symbol  ?getStepY\@Facing\@\@SAHE\@Z
     */
    MCAPI static int getStepY(unsigned char);
    /**
     * @symbol  ?getStepZ\@Facing\@\@SAHE\@Z
     */
    MCAPI static int getStepZ(unsigned char);
    /**
     * @symbol  ?isValidDirection\@Facing\@\@SA_NH\@Z
     */
    MCAPI static bool isValidDirection(int);
    /**
     * @symbol  ?makeDirectionArray\@Facing\@\@SA?AV?$array\@E$05\@std\@\@EEE\@Z
     */
    MCAPI static class std::array<unsigned char, 6> makeDirectionArray(unsigned char, unsigned char, unsigned char);
    /**
     * @symbol  ?rotateFace\@Facing\@\@SAEEW4Rotation\@1\@\@Z
     */
    MCAPI static unsigned char rotateFace(unsigned char, enum class Facing::Rotation);
    /**
     * @symbol  ?rotateFaceAroundGivenFace\@Facing\@\@SAEEEW4Rotation\@1\@\@Z
     */
    MCAPI static unsigned char rotateFaceAroundGivenFace(unsigned char, unsigned char, enum class Facing::Rotation);
    /**
     * @symbol  ?toString\@Facing\@\@SA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@E\@Z
     */
    MCAPI static class gsl::basic_string_span<char const, -1> toString(unsigned char);

};