#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace CerealHelpers { struct Member; }
namespace Json { class Value; }
namespace SharedTypes::v1_21_20 { struct FilterGroupData; }
namespace SharedTypes::v1_21_20 { struct FilterTestData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CerealHelpers {
// functions
// NOLINTBEGIN
MCNAPI void bindHelpers(::cereal::ReflectionCtx& ctx);

MCNAPI ::std::array<int, 3> blockPosAsArray(::BlockPos const& instance);

MCNAPI void blockPosFromArray(::BlockPos& instance, ::std::array<int, 3> const& arr);

MCNAPI bool checkBrightnessSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value,
    uchar                                                                                                         min,
    uchar                                                                                                         max
);

MCNAPI bool checkColor255RGBSchema(::rapidjson::GenericValue<
                                   ::rapidjson::UTF8<char>,
                                   ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);

MCNAPI bool checkDefinitionTriggerSchema(::rapidjson::GenericValue<
                                         ::rapidjson::UTF8<char>,
                                         ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);

MCNAPI bool checkEnumSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value,
    ::gsl::span<::std::string const>                                                                              values
);

MCNAPI bool checkExpressionNodeSchema(::rapidjson::GenericValue<
                                      ::rapidjson::UTF8<char>,
                                      ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);

MCNAPI bool checkFloatSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value,
    ::std::optional<float> const&                                                                                 min,
    ::std::optional<float> const&                                                                                 max
);

MCNAPI bool checkIdentifierStringSchema(::rapidjson::GenericValue<
                                        ::rapidjson::UTF8<char>,
                                        ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);

MCNAPI bool checkItemDescriptorSchema(::rapidjson::GenericValue<
                                      ::rapidjson::UTF8<char>,
                                      ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);

MCNAPI bool checkMembers(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value,
    ::std::initializer_list<::CerealHelpers::Member> members
);

MCNAPI bool checkVec3Schema(::rapidjson::GenericValue<
                            ::rapidjson::UTF8<char>,
                            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value);

MCNAPI void initialize(::cereal::ReflectionCtx& ctx);

MCNAPI ::std::vector<::std::string>
parseFilterGroupData(::SharedTypes::v1_21_20::FilterGroupData& data, ::Json::Value const& json);

MCNAPI ::std::vector<::std::string>
parseFilterTestData(::SharedTypes::v1_21_20::FilterTestData& data, ::Json::Value const& json);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> REGEX_MATERIAL_NAME();

MCAPI ::std::add_lvalue_reference_t<char const[]> REGEX_NAMESPACE_NAME();
// NOLINTEND

} // namespace CerealHelpers
