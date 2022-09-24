/**
 * @file  CerealHelpers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace CerealHelpers.
 *
 */
namespace CerealHelpers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   1139105482
     * @symbol ?bindColor@CerealHelpers@@YAXXZ
     */
    MCAPI void bindColor();
    /**
     * @hash   273916510
     * @symbol ?bindHelpers@CerealHelpers@@YAXXZ
     */
    MCAPI void bindHelpers();
    /**
     * @hash   -271714598
     * @symbol ?bindIdentifierString@CerealHelpers@@YAXXZ
     */
    MCAPI void bindIdentifierString();
    /**
     * @hash   698408306
     * @symbol ?bindIntRange@CerealHelpers@@YAXXZ
     */
    MCAPI void bindIntRange();
    /**
     * @hash   -1348927444
     * @symbol ?bindLocIdString@CerealHelpers@@YAXXZ
     */
    MCAPI void bindLocIdString();
    /**
     * @hash   2057683196
     * @symbol ?bindResourcePath@CerealHelpers@@YAXXZ
     */
    MCAPI void bindResourcePath();
    /**
     * @hash   -1962032060
     * @symbol ?bindVec3@CerealHelpers@@YAXXZ
     */
    MCAPI void bindVec3();
    /**
     * @hash   1165503
     * @symbol ?blockPosAsArray@CerealHelpers@@YA?AV?$array@H$02@std@@AEBVBlockPos@@@Z
     */
    MCAPI class std::array<int, 3> blockPosAsArray(class BlockPos const &);
    /**
     * @hash   -1678088339
     * @symbol ?blockPosFromArray@CerealHelpers@@YAXAEAVBlockPos@@AEBV?$array@H$02@std@@@Z
     */
    MCAPI void blockPosFromArray(class BlockPos &, class std::array<int, 3> const &);
    /**
     * @hash   1278042607
     * @symbol ?colorFromFloatArray3@CerealHelpers@@YAXAEAVColor@mce@@AEBV?$array@M$02@std@@@Z
     */
    MCAPI void colorFromFloatArray3(class mce::Color &, class std::array<float, 3> const &);
    /**
     * @hash   -717393857
     * @symbol ?colorFromFloatArray4@CerealHelpers@@YAXAEAVColor@mce@@AEBV?$array@M$03@std@@@Z
     */
    MCAPI void colorFromFloatArray4(class mce::Color &, class std::array<float, 4> const &);
    /**
     * @hash   1591833664
     * @symbol ?colorFromHexString@CerealHelpers@@YAXAEAVColor@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void colorFromHexString(class mce::Color &, std::string const &);
    /**
     * @hash   273714087
     * @symbol ?colorFromIntArray3@CerealHelpers@@YAXAEAVColor@mce@@AEBV?$array@H$02@std@@@Z
     */
    MCAPI void colorFromIntArray3(class mce::Color &, class std::array<int, 3> const &);
    /**
     * @hash   -1721691625
     * @symbol ?colorFromIntArray4@CerealHelpers@@YAXAEAVColor@mce@@AEBV?$array@H$03@std@@@Z
     */
    MCAPI void colorFromIntArray4(class mce::Color &, class std::array<int, 4> const &);
    /**
     * @hash   132837783
     * @symbol ?colorToFloatArray3@CerealHelpers@@YA?AV?$array@M$02@std@@AEBVColor@mce@@@Z
     */
    MCAPI class std::array<float, 3> colorToFloatArray3(class mce::Color const &);
    /**
     * @hash   252799573
     * @symbol ?colorToFloatArray4@CerealHelpers@@YA?AV?$array@M$03@std@@AEBVColor@mce@@@Z
     */
    MCAPI class std::array<float, 4> colorToFloatArray4(class mce::Color const &);
    /**
     * @hash   -1404567255
     * @symbol ?colorToIntArray3@CerealHelpers@@YA?AV?$array@H$02@std@@AEBVColor@mce@@@Z
     */
    MCAPI class std::array<int, 3> colorToIntArray3(class mce::Color const &);
    /**
     * @hash   -1285251257
     * @symbol ?colorToIntArray4@CerealHelpers@@YA?AV?$array@H$03@std@@AEBVColor@mce@@@Z
     */
    MCAPI class std::array<int, 4> colorToIntArray4(class mce::Color const &);
    /**
     * @hash   -1385053278
     * @symbol ?hashedStringFromString@CerealHelpers@@YAXAEAVHashedString@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void hashedStringFromString(class HashedString &, std::string const &);
    /**
     * @symbol ?identifierStringFromString@CerealHelpers@@YAXAEAUIdentifierString@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void identifierStringFromString(struct CerealHelpers::IdentifierString &, std::string const &);
    /**
     * @hash   1115639361
     * @symbol ?vec3AsArray@CerealHelpers@@YA?AV?$array@M$02@std@@AEBVVec3@@@Z
     */
    MCAPI class std::array<float, 3> vec3AsArray(class Vec3 const &);
    /**
     * @hash   -556857947
     * @symbol ?vec3FromArray@CerealHelpers@@YAXAEAVVec3@@V?$array@M$02@std@@@Z
     */
    MCAPI void vec3FromArray(class Vec3 &, class std::array<float, 3>);

};