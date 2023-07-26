#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CerealHelpers { struct IdentifierString; }
namespace glm { template<int T0, typename T1, int T2> struct vec; }
namespace mce { class Color; }
// clang-format on

namespace CerealHelpers {
/**
 * @symbol ?bindBoundingBox\@CerealHelpers\@\@YAXXZ
 */
MCAPI void bindBoundingBox(); // NOLINT
/**
 * @symbol ?bindBrightness\@CerealHelpers\@\@YAXXZ
 */
MCAPI void bindBrightness(); // NOLINT
/**
 * @symbol ?bindColor\@CerealHelpers\@\@YAXXZ
 */
MCAPI void bindColor(); // NOLINT
/**
 * @symbol ?bindGlmVec2\@CerealHelpers\@\@YAXXZ
 */
MCAPI void bindGlmVec2(); // NOLINT
/**
 * @symbol ?bindHelpers\@CerealHelpers\@\@YAXXZ
 */
MCAPI void bindHelpers(); // NOLINT
/**
 * @symbol ?bindIdentifierString\@CerealHelpers\@\@YAXXZ
 */
MCAPI void bindIdentifierString(); // NOLINT
/**
 * @symbol ?bindIntRange\@CerealHelpers\@\@YAXXZ
 */
MCAPI void bindIntRange(); // NOLINT
/**
 * @symbol ?bindLocIdString\@CerealHelpers\@\@YAXXZ
 */
MCAPI void bindLocIdString(); // NOLINT
/**
 * @symbol ?bindMceUUID\@CerealHelpers\@\@YAXXZ
 */
MCAPI void bindMceUUID(); // NOLINT
/**
 * @symbol ?bindResourcePath\@CerealHelpers\@\@YAXXZ
 */
MCAPI void bindResourcePath(); // NOLINT
/**
 * @symbol ?bindVec2\@CerealHelpers\@\@YAXXZ
 */
MCAPI void bindVec2(); // NOLINT
/**
 * @symbol ?bindVec3\@CerealHelpers\@\@YAXXZ
 */
MCAPI void bindVec3(); // NOLINT
/**
 * @symbol ?blockPosAsArray\@CerealHelpers\@\@YA?AV?$array\@H$02\@std\@\@AEBVBlockPos\@\@\@Z
 */
MCAPI class std::array<int, 3> blockPosAsArray(class BlockPos const&); // NOLINT
/**
 * @symbol ?blockPosFromArray\@CerealHelpers\@\@YAXAEAVBlockPos\@\@AEBV?$array\@H$02\@std\@\@\@Z
 */
MCAPI void blockPosFromArray(class BlockPos&, class std::array<int, 3> const&); // NOLINT
/**
 * @symbol ?colorFromFloatArray3\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$array\@M$02\@std\@\@\@Z
 */
MCAPI void colorFromFloatArray3(class mce::Color&, class std::array<float, 3> const&); // NOLINT
/**
 * @symbol ?colorFromFloatArray4\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$array\@M$03\@std\@\@\@Z
 */
MCAPI void colorFromFloatArray4(class mce::Color&, class std::array<float, 4> const&); // NOLINT
/**
 * @symbol
 * ?colorFromHexString\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void colorFromHexString(class mce::Color&, std::string const&); // NOLINT
/**
 * @symbol ?colorFromIntArray3\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$array\@H$02\@std\@\@\@Z
 */
MCAPI void colorFromIntArray3(class mce::Color&, class std::array<int, 3> const&); // NOLINT
/**
 * @symbol ?colorFromIntArray4\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$array\@H$03\@std\@\@\@Z
 */
MCAPI void colorFromIntArray4(class mce::Color&, class std::array<int, 4> const&); // NOLINT
/**
 * @symbol ?colorToFloatArray3\@CerealHelpers\@\@YA?AV?$array\@M$02\@std\@\@AEBVColor\@mce\@\@\@Z
 */
MCAPI class std::array<float, 3> colorToFloatArray3(class mce::Color const&); // NOLINT
/**
 * @symbol ?colorToFloatArray4\@CerealHelpers\@\@YA?AV?$array\@M$03\@std\@\@AEBVColor\@mce\@\@\@Z
 */
MCAPI class std::array<float, 4> colorToFloatArray4(class mce::Color const&); // NOLINT
/**
 * @symbol ?colorToIntArray3\@CerealHelpers\@\@YA?AV?$array\@H$02\@std\@\@AEBVColor\@mce\@\@\@Z
 */
MCAPI class std::array<int, 3> colorToIntArray3(class mce::Color const&); // NOLINT
/**
 * @symbol ?colorToIntArray4\@CerealHelpers\@\@YA?AV?$array\@H$03\@std\@\@AEBVColor\@mce\@\@\@Z
 */
MCAPI class std::array<int, 4> colorToIntArray4(class mce::Color const&); // NOLINT
/**
 * @symbol ?glmVec2FromArray\@CerealHelpers\@\@YAXAEAU?$vec\@$01M$0A\@\@glm\@\@V?$array\@M$01\@std\@\@\@Z
 */
MCAPI void glmVec2FromArray(struct glm::vec<2, float, 0>&, class std::array<float, 2>); // NOLINT
/**
 * @symbol
 * ?hashedStringFromString\@CerealHelpers\@\@YAXAEAVHashedString\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void hashedStringFromString(class HashedString&, std::string const&); // NOLINT
/**
 * @symbol
 * ?identifierStringFromString\@CerealHelpers\@\@YAXAEAUIdentifierString\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI void identifierStringFromString(struct CerealHelpers::IdentifierString&, std::string const&); // NOLINT
/**
 * @symbol ?initialize\@CerealHelpers\@\@YAXXZ
 */
MCAPI void initialize(); // NOLINT
/**
 * @symbol ?vec2FromArray\@CerealHelpers\@\@YAXAEAVVec2\@\@V?$array\@M$01\@std\@\@\@Z
 */
MCAPI void vec2FromArray(class Vec2&, class std::array<float, 2>); // NOLINT
/**
 * @symbol ?vec3AsArray\@CerealHelpers\@\@YA?AV?$array\@M$02\@std\@\@AEBVVec3\@\@\@Z
 */
MCAPI class std::array<float, 3> vec3AsArray(class Vec3 const&); // NOLINT
/**
 * @symbol ?vec3FromArray\@CerealHelpers\@\@YAXAEAVVec3\@\@V?$array\@M$02\@std\@\@\@Z
 */
MCAPI void vec3FromArray(class Vec3&, class std::array<float, 3>); // NOLINT

}; // namespace CerealHelpers
