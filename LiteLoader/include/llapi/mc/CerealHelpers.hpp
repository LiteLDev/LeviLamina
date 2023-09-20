/**
 * @file  CerealHelpers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

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
     * @symbol ?bindBoundingBox\@CerealHelpers\@\@YAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void bindBoundingBox(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?bindBrightness\@CerealHelpers\@\@YAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void bindBrightness(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?bindColor\@CerealHelpers\@\@YAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void bindColor(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?bindGlmVec2\@CerealHelpers\@\@YAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void bindGlmVec2(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?bindHelpers\@CerealHelpers\@\@YAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void bindHelpers(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?bindIdentifierString\@CerealHelpers\@\@YAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void bindIdentifierString(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?bindIntRange\@CerealHelpers\@\@YAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void bindIntRange(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?bindLocIdString\@CerealHelpers\@\@YAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void bindLocIdString(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?bindMceUUID\@CerealHelpers\@\@YAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void bindMceUUID(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?bindResourcePath\@CerealHelpers\@\@YAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void bindResourcePath(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?bindVec2\@CerealHelpers\@\@YAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void bindVec2(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?bindVec3\@CerealHelpers\@\@YAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void bindVec3(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?blockPosAsArray\@CerealHelpers\@\@YA?AV?$array\@H$02\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::array<int, 3> blockPosAsArray(class BlockPos const &);
    /**
     * @symbol ?blockPosFromArray\@CerealHelpers\@\@YAXAEAVBlockPos\@\@AEBV?$array\@H$02\@std\@\@\@Z
     */
    MCAPI void blockPosFromArray(class BlockPos &, class std::array<int, 3> const &);
    /**
     * @symbol ?colorFromFloatArray3\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$array\@M$02\@std\@\@\@Z
     */
    MCAPI void colorFromFloatArray3(class mce::Color &, class std::array<float, 3> const &);
    /**
     * @symbol ?colorFromFloatArray4\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$array\@M$03\@std\@\@\@Z
     */
    MCAPI void colorFromFloatArray4(class mce::Color &, class std::array<float, 4> const &);
    /**
     * @symbol ?colorFromHexString\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void colorFromHexString(class mce::Color &, std::string const &);
    /**
     * @symbol ?colorFromIntArray3\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$array\@H$02\@std\@\@\@Z
     */
    MCAPI void colorFromIntArray3(class mce::Color &, class std::array<int, 3> const &);
    /**
     * @symbol ?colorFromIntArray4\@CerealHelpers\@\@YAXAEAVColor\@mce\@\@AEBV?$array\@H$03\@std\@\@\@Z
     */
    MCAPI void colorFromIntArray4(class mce::Color &, class std::array<int, 4> const &);
    /**
     * @symbol ?colorToFloatArray3\@CerealHelpers\@\@YA?AV?$array\@M$02\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI class std::array<float, 3> colorToFloatArray3(class mce::Color const &);
    /**
     * @symbol ?colorToFloatArray4\@CerealHelpers\@\@YA?AV?$array\@M$03\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI class std::array<float, 4> colorToFloatArray4(class mce::Color const &);
    /**
     * @symbol ?colorToIntArray3\@CerealHelpers\@\@YA?AV?$array\@H$02\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI class std::array<int, 3> colorToIntArray3(class mce::Color const &);
    /**
     * @symbol ?colorToIntArray4\@CerealHelpers\@\@YA?AV?$array\@H$03\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI class std::array<int, 4> colorToIntArray4(class mce::Color const &);
    /**
     * @symbol ?glmVec2FromArray\@CerealHelpers\@\@YAXAEAU?$vec\@$01M$0A\@\@glm\@\@V?$array\@M$01\@std\@\@\@Z
     */
    MCAPI void glmVec2FromArray(struct glm::vec<2, float, 0> &, class std::array<float, 2>);
    /**
     * @symbol ?identifierStringFromString\@CerealHelpers\@\@YAXAEAUIdentifierString\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void identifierStringFromString(struct CerealHelpers::IdentifierString &, std::string const &);
    /**
     * @symbol ?initialize\@CerealHelpers\@\@YAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI void initialize(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?vec2FromArray\@CerealHelpers\@\@YAXAEAVVec2\@\@V?$array\@M$01\@std\@\@\@Z
     */
    MCAPI void vec2FromArray(class Vec2 &, class std::array<float, 2>);
    /**
     * @symbol ?vec3AsArray\@CerealHelpers\@\@YA?AV?$array\@M$02\@std\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class std::array<float, 3> vec3AsArray(class Vec3 const &);
    /**
     * @symbol ?vec3FromArray\@CerealHelpers\@\@YAXAEAVVec3\@\@V?$array\@M$02\@std\@\@\@Z
     */
    MCAPI void vec3FromArray(class Vec3 &, class std::array<float, 3>);

};