#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Member.h"
#include "mc/external/glm/vec.h"

// auto generated forward declare list
// clang-format off
namespace CerealHelpers { struct IdentifierString; }
namespace CerealHelpers { struct Member; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

namespace CerealHelpers {
// NOLINTBEGIN
// symbol: ?bindBoundingBox@CerealHelpers@@YAXAEAUReflectionCtx@cereal@@@Z
MCAPI void bindBoundingBox(struct cereal::ReflectionCtx&);

// symbol: ?bindColor@CerealHelpers@@YAXAEAUReflectionCtx@cereal@@@Z
MCAPI void bindColor(struct cereal::ReflectionCtx&);

// symbol: ?bindGlmVec2@CerealHelpers@@YAXAEAUReflectionCtx@cereal@@@Z
MCAPI void bindGlmVec2(struct cereal::ReflectionCtx&);

// symbol: ?bindHelpers@CerealHelpers@@YAXAEAUReflectionCtx@cereal@@@Z
MCAPI void bindHelpers(struct cereal::ReflectionCtx&);

// symbol: ?bindIntRange@CerealHelpers@@YAXAEAUReflectionCtx@cereal@@@Z
MCAPI void bindIntRange(struct cereal::ReflectionCtx&);

// symbol: ?bindLocIdString@CerealHelpers@@YAXAEAUReflectionCtx@cereal@@@Z
MCAPI void bindLocIdString(struct cereal::ReflectionCtx&);

// symbol: ?bindResourcePath@CerealHelpers@@YAXAEAUReflectionCtx@cereal@@@Z
MCAPI void bindResourcePath(struct cereal::ReflectionCtx&);

// symbol: ?bindVec2@CerealHelpers@@YAXAEAUReflectionCtx@cereal@@@Z
MCAPI void bindVec2(struct cereal::ReflectionCtx&);

// symbol: ?bindVec3@CerealHelpers@@YAXAEAUReflectionCtx@cereal@@@Z
MCAPI void bindVec3(struct cereal::ReflectionCtx&);

// symbol: ?blockPosAsArray@CerealHelpers@@YA?AV?$array@H$02@std@@AEBVBlockPos@@@Z
MCAPI std::array<int, 3> blockPosAsArray(class BlockPos const& instance);

// symbol: ?blockPosFromArray@CerealHelpers@@YAXAEAVBlockPos@@AEBV?$array@H$02@std@@@Z
MCAPI void blockPosFromArray(class BlockPos& instance, std::array<int, 3> const& arr);

// symbol:
// ?checkBoolSchema@CerealHelpers@@YA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
MCAPI bool checkBoolSchema(rapidjson::GenericValue<
                           rapidjson::UTF8<char>,
                           rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);

// symbol:
// ?checkBrightnessSchema@CerealHelpers@@YA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@EE@Z
MCAPI bool checkBrightnessSchema(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&,
    uchar,
    uchar
);

// symbol:
// ?checkColor255RGBSchema@CerealHelpers@@YA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
MCAPI bool checkColor255RGBSchema(rapidjson::GenericValue<
                                  rapidjson::UTF8<char>,
                                  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);

// symbol:
// ?checkDefinitionTriggerSchema@CerealHelpers@@YA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
MCAPI bool checkDefinitionTriggerSchema(rapidjson::GenericValue<
                                        rapidjson::UTF8<char>,
                                        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);

// symbol:
// ?checkEnumSchema@CerealHelpers@@YA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@AEBVSerializerEnumMapping@cereal@@@Z
MCAPI bool
checkEnumSchema(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&, class cereal::SerializerEnumMapping const&);

// symbol:
// ?checkFloatSchema@CerealHelpers@@YA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@AEBV?$optional@M@std@@1@Z
MCAPI bool
checkFloatSchema(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&, std::optional<float> const&, std::optional<float> const&);

// symbol:
// ?checkIdentifierStringSchema@CerealHelpers@@YA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
MCAPI bool checkIdentifierStringSchema(rapidjson::GenericValue<
                                       rapidjson::UTF8<char>,
                                       rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);

// symbol:
// ?checkItemDescriptorSchema@CerealHelpers@@YA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
MCAPI bool checkItemDescriptorSchema(rapidjson::GenericValue<
                                     rapidjson::UTF8<char>,
                                     rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);

// symbol:
// ?checkMembers@CerealHelpers@@YA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@V?$initializer_list@UMember@CerealHelpers@@@std@@@Z
MCAPI bool
checkMembers(rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&, std::initializer_list<struct CerealHelpers::Member>);

// symbol:
// ?checkVec3Schema@CerealHelpers@@YA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
MCAPI bool checkVec3Schema(rapidjson::GenericValue<
                           rapidjson::UTF8<char>,
                           rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);

// symbol: ?colorFromFloatArray3@CerealHelpers@@YAXAEAVColor@mce@@AEBV?$array@M$02@std@@@Z
MCAPI void colorFromFloatArray3(class mce::Color& color, std::array<float, 3> const& v);

// symbol: ?colorFromFloatArray4@CerealHelpers@@YAXAEAVColor@mce@@AEBV?$array@M$03@std@@@Z
MCAPI void colorFromFloatArray4(class mce::Color& color, std::array<float, 4> const& v);

// symbol:
// ?colorFromHexString@CerealHelpers@@YAXAEAVColor@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void colorFromHexString(class mce::Color& color, std::string const& str);

// symbol: ?colorFromIntArray3@CerealHelpers@@YAXAEAVColor@mce@@AEBV?$array@H$02@std@@@Z
MCAPI void colorFromIntArray3(class mce::Color& color, std::array<int, 3> const& v);

// symbol: ?colorFromIntArray4@CerealHelpers@@YAXAEAVColor@mce@@AEBV?$array@H$03@std@@@Z
MCAPI void colorFromIntArray4(class mce::Color& color, std::array<int, 4> const& v);

// symbol: ?colorToFloatArray3@CerealHelpers@@YA?AV?$array@M$02@std@@AEBVColor@mce@@@Z
MCAPI std::array<float, 3> colorToFloatArray3(class mce::Color const& color);

// symbol: ?colorToFloatArray4@CerealHelpers@@YA?AV?$array@M$03@std@@AEBVColor@mce@@@Z
MCAPI std::array<float, 4> colorToFloatArray4(class mce::Color const& color);

// symbol: ?colorToIntArray3@CerealHelpers@@YA?AV?$array@H$02@std@@AEBVColor@mce@@@Z
MCAPI std::array<int, 3> colorToIntArray3(class mce::Color const& color);

// symbol: ?colorToIntArray4@CerealHelpers@@YA?AV?$array@H$03@std@@AEBVColor@mce@@@Z
MCAPI std::array<int, 4> colorToIntArray4(class mce::Color const& color);

// symbol: ?glmVec2FromArray@CerealHelpers@@YAXAEAU?$vec@$01M$0A@@glm@@V?$array@M$01@std@@@Z
MCAPI void glmVec2FromArray(struct glm::vec<2, float, 0>& vec, std::array<float, 2> arr);

// symbol:
// ?identifierStringFromString@CerealHelpers@@YAXAEAUIdentifierString@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void identifierStringFromString(struct CerealHelpers::IdentifierString& instance, std::string const& str);

// symbol: ?initialize@CerealHelpers@@YAXAEAUReflectionCtx@cereal@@@Z
MCAPI void initialize(struct cereal::ReflectionCtx&);

// symbol: ?vec2FromArray@CerealHelpers@@YAXAEAVVec2@@V?$array@M$01@std@@@Z
MCAPI void vec2FromArray(class Vec2& vec, std::array<float, 2> arr);

// symbol: ?vec3AsArray@CerealHelpers@@YA?AV?$array@M$02@std@@AEBVVec3@@@Z
MCAPI std::array<float, 3> vec3AsArray(class Vec3 const& vec);

// symbol: ?vec3FromArray@CerealHelpers@@YAXAEAVVec3@@V?$array@M$02@std@@@Z
MCAPI void vec3FromArray(class Vec3& vec, std::array<float, 3> arr);
// NOLINTEND

}; // namespace CerealHelpers
