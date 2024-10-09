#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/cereal_helpers/Member.h"

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
MCAPI void bindBoundingBox(struct cereal::ReflectionCtx& ctx);

MCAPI void bindColor(struct cereal::ReflectionCtx& ctx);

MCAPI void bindGlmVec2(struct cereal::ReflectionCtx& ctx);

MCAPI void bindHelpers(struct cereal::ReflectionCtx& ctx);

MCAPI void bindIntRange(struct cereal::ReflectionCtx& ctx);

MCAPI void bindLocIdString(struct cereal::ReflectionCtx& ctx);

MCAPI void bindResourcePath(struct cereal::ReflectionCtx& ctx);

MCAPI void bindVec2(struct cereal::ReflectionCtx& ctx);

MCAPI void bindVec3(struct cereal::ReflectionCtx& ctx);

MCAPI std::array<int, 3> blockPosAsArray(class BlockPos const& instance);

MCAPI void blockPosFromArray(class BlockPos& instance, std::array<int, 3> const& arr);

MCAPI bool checkBoolSchema(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& value
);

MCAPI bool checkBrightnessSchema(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
          value,
    uchar min,
    uchar max
);

MCAPI bool checkColor255RGBSchema(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& value
);

MCAPI bool checkDefinitionTriggerSchema(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& value
);

MCAPI bool checkEnumSchema(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
                                               value,
    class cereal::SerializerEnumMapping const& mapping
);

MCAPI bool checkFloatSchema(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
                                value,
    std::optional<float> const& min,
    std::optional<float> const& max
);

MCAPI bool checkIdentifierStringSchema(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& value
);

MCAPI bool checkItemDescriptorSchema(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& value
);

MCAPI bool checkMembers(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
                                                        value,
    std::initializer_list<struct CerealHelpers::Member> members
);

MCAPI bool checkVec3Schema(
    rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& value
);

MCAPI void colorFromFloatArray3(class mce::Color& color, std::array<float, 3> const& v);

MCAPI void colorFromFloatArray4(class mce::Color& color, std::array<float, 4> const& v);

MCAPI void colorFromHexString(class mce::Color& color, std::string const& str);

MCAPI void colorFromIntArray3(class mce::Color& color, std::array<int, 3> const& v);

MCAPI void colorFromIntArray4(class mce::Color& color, std::array<int, 4> const& v);

MCAPI std::array<float, 3> colorToFloatArray3(class mce::Color const& color);

MCAPI std::array<float, 4> colorToFloatArray4(class mce::Color const& color);

MCAPI std::array<int, 3> colorToIntArray3(class mce::Color const& color);

MCAPI std::array<int, 4> colorToIntArray4(class mce::Color const& color);

MCAPI void glmVec2FromArray(glm::vec2&, std::array<float, 2>);

MCAPI void identifierStringFromString(struct CerealHelpers::IdentifierString& instance, std::string const& str);

MCAPI void initialize(struct cereal::ReflectionCtx& ctx);

MCAPI void vec2FromArray(class Vec2& vec, std::array<float, 2> arr);

MCAPI std::array<float, 3> vec3AsArray(class Vec3 const& vec);

MCAPI void vec3FromArray(class Vec3& vec, std::array<float, 3> arr);
// NOLINTEND

}; // namespace CerealHelpers
