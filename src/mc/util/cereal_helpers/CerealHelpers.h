#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace CerealHelpers { struct Member; }
namespace Json { class Value; }
namespace SharedTypes::v1_21_20 { struct FilterGroupData; }
namespace SharedTypes::v1_21_20 { struct FilterTestData; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CerealHelpers {
// functions
// NOLINTBEGIN
MCAPI void bindBoundingBox(::cereal::ReflectionCtx& ctx);

MCAPI void bindHelpers(::cereal::ReflectionCtx& ctx);

MCAPI void bindIntRange(::cereal::ReflectionCtx& ctx);

MCAPI void bindMceUUID(::cereal::ReflectionCtx& ctx);

MCAPI void bindRotationAndMirror(::cereal::ReflectionCtx& ctx);

MCAPI ::std::array<int, 3> blockPosAsArray(::BlockPos const& instance);

MCFOLD void blockPosFromArray(::BlockPos& instance, ::std::array<int, 3> const& arr);

MCAPI bool checkBoolSchema(::rapidjson::GenericValue<
                           ::rapidjson::UTF8<char>,
                           ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);

MCAPI bool checkBrightnessSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value,
    uchar                                                                                                         min,
    uchar                                                                                                         max
);

MCAPI bool checkColor255RGBSchema(::rapidjson::GenericValue<
                                  ::rapidjson::UTF8<char>,
                                  ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);

MCAPI bool checkDefinitionTriggerSchema(::rapidjson::GenericValue<
                                        ::rapidjson::UTF8<char>,
                                        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);

MCAPI bool checkEnumSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value,
    ::cereal::SerializerEnumMapping const& mapping
);

MCAPI bool checkFloatSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value,
    ::std::optional<float> const&                                                                                 min,
    ::std::optional<float> const&                                                                                 max
);

MCAPI bool checkIdentifierStringSchema(::rapidjson::GenericValue<
                                       ::rapidjson::UTF8<char>,
                                       ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);

MCAPI bool checkItemDescriptorSchema(::rapidjson::GenericValue<
                                     ::rapidjson::UTF8<char>,
                                     ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);

MCAPI bool checkMembers(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value,
    ::std::initializer_list<::CerealHelpers::Member> members
);

MCAPI bool checkVec3Schema(::rapidjson::GenericValue<
                           ::rapidjson::UTF8<char>,
                           ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);

MCAPI void initialize(::cereal::ReflectionCtx& ctx);

MCAPI ::std::vector<::std::string>
parseFilterGroupData(::SharedTypes::v1_21_20::FilterGroupData& data, ::Json::Value const& json);

MCAPI ::std::vector<::std::string>
parseFilterTestData(::SharedTypes::v1_21_20::FilterTestData& data, ::Json::Value const& json);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> REGEX_MATERIAL_NAME();

MCAPI ::std::add_lvalue_reference_t<char const[]> REGEX_NAMESPACE_NAME();

MCAPI ::std::add_lvalue_reference_t<char const[]> REGEX_NAMESPACE_NAME_OR_EMPTY();
// NOLINTEND

} // namespace CerealHelpers
