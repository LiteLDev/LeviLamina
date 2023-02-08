/**
 * @file  CerealHelpers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -565088088
     * @symbol  ?bindBrightness\@CerealHelpers\@\@YAXXZ
     */
    MCAPI void bindBrightness();
    /**
     * @hash   72180218
     * @symbol  ?bindColor\@CerealHelpers\@\@YAXXZ
     */
    MCAPI void bindColor();
    /**
     * @hash   -791763298
     * @symbol  ?bindHelpers\@CerealHelpers\@\@YAXXZ
     */
    MCAPI void bindHelpers();
    /**
     * @hash   -1337717302
     * @symbol  ?bindIdentifierString\@CerealHelpers\@\@YAXXZ
     */
    MCAPI void bindIdentifierString();
    /**
     * @hash   -367532894
     * @symbol  ?bindIntRange\@CerealHelpers\@\@YAXXZ
     */
    MCAPI void bindIntRange();
    /**
     * @hash   1880821324
     * @symbol  ?bindLocIdString\@CerealHelpers\@\@YAXXZ
     */
    MCAPI void bindLocIdString();
    /**
     * @hash   583045720
     * @symbol  ?bindMceUUID\@CerealHelpers\@\@YAXXZ
     */
    MCAPI void bindMceUUID();
    /**
     * @hash   993510236
     * @symbol  ?bindResourcePath\@CerealHelpers\@\@YAXXZ
     */
    MCAPI void bindResourcePath();
    /**
     * @symbol  ?bindVec2\@CerealHelpers\@\@YAXXZ
     */
    MCAPI void bindVec2();
    /**
     * @hash   1269146676
     * @symbol  ?bindVec3\@CerealHelpers\@\@YAXXZ
     */
    MCAPI void bindVec3();
    /**
     * @hash   -1061131585
     * @symbol  ?blockPosAsArray\@CerealHelpers\@\@YA?AV?$array\@H$02\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::array<int, 3> blockPosAsArray(class BlockPos const &);
    /**
     * @hash   1650159085
     * @symbol  ?blockPosFromArray\@CerealHelpers\@\@YAXAEAVBlockPos\@\@AEBV?$array\@H$02\@std\@\@\@Z
     */
    MCAPI void blockPosFromArray(class BlockPos &, class std::array<int, 3> const &);
    /**
     * @hash   215745519
     * @symbol  ?colorFromFloatArray3\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$array\@M$02\@std\@\@\@Z
     */
    MCAPI void colorFromFloatArray3(class mce::Color &, class std::array<float, 3> const &);
    /**
     * @hash   -1779690945
     * @symbol  ?colorFromFloatArray4\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$array\@M$03\@std\@\@\@Z
     */
    MCAPI void colorFromFloatArray4(class mce::Color &, class std::array<float, 4> const &);
    /**
     * @hash   529536576
     * @symbol  ?colorFromHexString\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void colorFromHexString(class mce::Color &, std::string const &);
    /**
     * @hash   -788859769
     * @symbol  ?colorFromIntArray3\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$array\@H$02\@std\@\@\@Z
     */
    MCAPI void colorFromIntArray3(class mce::Color &, class std::array<int, 3> const &);
    /**
     * @hash   1510701815
     * @symbol  ?colorFromIntArray4\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$array\@H$03\@std\@\@\@Z
     */
    MCAPI void colorFromIntArray4(class mce::Color &, class std::array<int, 4> const &);
    /**
     * @hash   -929459305
     * @symbol  ?colorToFloatArray3\@CerealHelpers\@\@YA?AV?$array\@M$02\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI class std::array<float, 3> colorToFloatArray3(class mce::Color const &);
    /**
     * @hash   -809774283
     * @symbol  ?colorToFloatArray4\@CerealHelpers\@\@YA?AV?$array\@M$03\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI class std::array<float, 4> colorToFloatArray4(class mce::Color const &);
    /**
     * @hash   1827826185
     * @symbol  ?colorToIntArray3\@CerealHelpers\@\@YA?AV?$array\@H$02\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI class std::array<int, 3> colorToIntArray3(class mce::Color const &);
    /**
     * @hash   1947142183
     * @symbol  ?colorToIntArray4\@CerealHelpers\@\@YA?AV?$array\@H$03\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI class std::array<int, 4> colorToIntArray4(class mce::Color const &);
    /**
     * @hash   1848893138
     * @symbol  ?hashedStringFromString\@CerealHelpers\@\@YAXAEAVHashedString\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void hashedStringFromString(class HashedString &, std::string const &);
    /**
     * @hash   1925852056
     * @symbol  ?identifierStringFromString\@CerealHelpers\@\@YAXAEAUIdentifierString\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void identifierStringFromString(struct CerealHelpers::IdentifierString &, std::string const &);
    /**
     * @symbol  ?vec2FromArray\@CerealHelpers\@\@YAXAEAU?$vec\@$01M$0A\@\@glm\@\@V?$array\@M$01\@std\@\@\@Z
     */
    MCAPI void vec2FromArray(struct glm::vec<2, float, 0> &, class std::array<float, 2>);
    /**
     * @hash   53342273
     * @symbol  ?vec3AsArray\@CerealHelpers\@\@YA?AV?$array\@M$02\@std\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class std::array<float, 3> vec3AsArray(class Vec3 const &);
    /**
     * @hash   -1523577819
     * @symbol  ?vec3FromArray\@CerealHelpers\@\@YAXAEAVVec3\@\@V?$array\@M$02\@std\@\@\@Z
     */
    MCAPI void vec3FromArray(class Vec3 &, class std::array<float, 3>);

};