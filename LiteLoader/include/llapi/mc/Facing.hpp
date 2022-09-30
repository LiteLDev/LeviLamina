/**
 * @file  Facing.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FACING
public:
    class Facing& operator=(class Facing const &) = delete;
    Facing(class Facing const &) = delete;
    Facing() = delete;
#endif

public:
    /**
     * @hash   -364199173
     * @symbol ?ALL_EXCEPT@Facing@@2V?$array@V?$vector@EV?$allocator@E@std@@@std@@$05@std@@B
     */
    MCAPI static class std::array<std::vector<unsigned char>, 6> const ALL_EXCEPT;
    /**
     * @hash   304382633
     * @symbol ?ALL_EXCEPT_AXIS_Y@Facing@@2V?$array@V?$vector@EV?$allocator@E@std@@@std@@$05@std@@B
     */
    MCAPI static class std::array<std::vector<unsigned char>, 6> const ALL_EXCEPT_AXIS_Y;
    /**
     * @hash   -846258067
     * @symbol ?ALL_FACES@Facing@@2V?$vector@EV?$allocator@E@std@@@std@@B
     */
    MCAPI static std::vector<unsigned char> const ALL_FACES;
    /**
     * @hash   1730635296
     * @symbol ?BY2DDATA@Facing@@2QBW4Name@1@B
     */
    MCAPI static enum class Facing::Name const BY2DDATA[];
    /**
     * @hash   371635704
     * @symbol ?DIRECTIONS@Facing@@2QBW4Name@1@B
     */
    MCAPI static enum class Facing::Name const DIRECTIONS[];
    /**
     * @hash   -1389575647
     * @symbol ?DIRECTION@Facing@@2QBVBlockPos@@B
     */
    MCAPI static class BlockPos const DIRECTION[];
    /**
     * @hash   -1718104539
     * @symbol ?FACINGMASK@Facing@@2QBEB
     */
    MCAPI static unsigned char const FACINGMASK[];
    /**
     * @hash   -1471973395
     * @symbol ?FACINGMASK_INV@Facing@@2QBEB
     */
    MCAPI static unsigned char const FACINGMASK_INV[];
    /**
     * @hash   1732225875
     * @symbol ?NORMAL@Facing@@2QBVVec3@@B
     */
    MCAPI static class Vec3 const NORMAL[];
    /**
     * @hash   -147540205
     * @symbol ?OPPOSITE_FACING@Facing@@2QBEB
     */
    MCAPI static unsigned char const OPPOSITE_FACING[];
    /**
     * @hash   1184563798
     * @symbol ?STEP_X@Facing@@2QBHB
     */
    MCAPI static int const STEP_X[];
    /**
     * @hash   1561556366
     * @symbol ?STEP_Y@Facing@@2QBHB
     */
    MCAPI static int const STEP_Y[];
    /**
     * @hash   1938548934
     * @symbol ?STEP_Z@Facing@@2QBHB
     */
    MCAPI static int const STEP_Z[];
    /**
     * @hash   -400436572
     * @symbol ?convertDirectionToFacingDirection@Facing@@SAEW4Type@Direction@@@Z
     */
    MCAPI static unsigned char convertDirectionToFacingDirection(enum class Direction::Type);
    /**
     * @hash   2056158622
     * @symbol ?convertWeirdoDirectionToFacingDirection@Facing@@SAEW4WeirdoDirection@@@Z
     */
    MCAPI static unsigned char convertWeirdoDirectionToFacingDirection(enum class WeirdoDirection);
    /**
     * @hash   -1737458650
     * @symbol ?convertYRotationToFacingDirection@Facing@@SAEM@Z
     */
    MCAPI static unsigned char convertYRotationToFacingDirection(float);
    /**
     * @hash   -575601250
     * @symbol ?from2DDataValue@Facing@@SA?AW4Name@1@H@Z
     */
    MCAPI static enum class Facing::Name from2DDataValue(int);
    /**
     * @hash   -686835096
     * @symbol ?fromVec3@Facing@@SAEAEBVVec3@@@Z
     */
    MCAPI static unsigned char fromVec3(class Vec3 const &);
    /**
     * @hash   -1200629193
     * @symbol ?getClockWise@Facing@@SAEE@Z
     */
    MCAPI static unsigned char getClockWise(unsigned char);
    /**
     * @hash   409289850
     * @symbol ?getClosestRotation@Facing@@SA?AW4Rotation@1@M@Z
     */
    MCAPI static enum class Facing::Rotation getClosestRotation(float);
    /**
     * @hash   -570130375
     * @symbol ?getCounterClockWise@Facing@@SAEE@Z
     */
    MCAPI static unsigned char getCounterClockWise(unsigned char);
    /**
     * @hash   330009728
     * @symbol ?getFaceLocation@Facing@@SA?AVVec3@@EMM@Z
     */
    MCAPI static class Vec3 getFaceLocation(unsigned char, float, float);
    /**
     * @hash   -2096539229
     * @symbol ?getFaceLocationXY@Facing@@SA?AVVec2@@EAEBVVec3@@@Z
     */
    MCAPI static class Vec2 getFaceLocationXY(unsigned char, class Vec3 const &);
    /**
     * @hash   354516542
     * @symbol ?getFacingDirection@Facing@@SAEAEBVVec3@@0@Z
     */
    MCAPI static unsigned char getFacingDirection(class Vec3 const &, class Vec3 const &);
    /**
     * @hash   -2027607159
     * @symbol ?getOpposite@Facing@@SAEE@Z
     */
    MCAPI static unsigned char getOpposite(unsigned char);
    /**
     * @hash   -1448731967
     * @symbol ?getRandomFace@Facing@@SAHAEAVRandom@@@Z
     */
    MCAPI static int getRandomFace(class Random &);
    /**
     * @hash   -1997333879
     * @symbol ?getRandomFaceHorizontal@Facing@@SAHAEAVRandom@@@Z
     */
    MCAPI static int getRandomFaceHorizontal(class Random &);
    /**
     * @hash   -766060055
     * @symbol ?getRotationMatrix@Facing@@SA?AU?$mat@$02$02M$0A@@glm@@EW4Rotation@1@@Z
     */
    MCAPI static struct glm::mat<3, 3, float, 0> getRotationMatrix(unsigned char, enum class Facing::Rotation);
    /**
     * @hash   -1973145249
     * @symbol ?getShuffledDirections@Facing@@SA?AV?$vector@EV?$allocator@E@std@@@std@@AEAVRandom@@@Z
     */
    MCAPI static std::vector<unsigned char> getShuffledDirections(class Random &);
    /**
     * @hash   -1957178238
     * @symbol ?getShuffledDirections@Facing@@SA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
     */
    MCAPI static std::vector<unsigned char> getShuffledDirections();
    /**
     * @hash   -378987624
     * @symbol ?getStepX@Facing@@SAHE@Z
     */
    MCAPI static int getStepX(unsigned char);
    /**
     * @hash   1002981976
     * @symbol ?getStepY@Facing@@SAHE@Z
     */
    MCAPI static int getStepY(unsigned char);
    /**
     * @hash   -1910015720
     * @symbol ?getStepZ@Facing@@SAHE@Z
     */
    MCAPI static int getStepZ(unsigned char);
    /**
     * @hash   83687649
     * @symbol ?isValidDirection@Facing@@SA_NH@Z
     */
    MCAPI static bool isValidDirection(int);
    /**
     * @hash   644863705
     * @symbol ?rotateFace@Facing@@SAEEW4Rotation@1@@Z
     */
    MCAPI static unsigned char rotateFace(unsigned char, enum class Facing::Rotation);
    /**
     * @hash   -1239165631
     * @symbol ?rotateFaceAroundGivenFace@Facing@@SAEEEW4Rotation@1@@Z
     */
    MCAPI static unsigned char rotateFaceAroundGivenFace(unsigned char, unsigned char, enum class Facing::Rotation);
    /**
     * @hash   1918900542
     * @symbol ?toString@Facing@@SA?AV?$basic_string_span@$$CBD$0?0@gsl@@E@Z
     */
    MCAPI static class gsl::basic_string_span<char const, -1> toString(unsigned char);

};