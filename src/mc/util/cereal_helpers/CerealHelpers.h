#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace CerealHelpers { class FileReferenceLoadContext; }
namespace CerealHelpers { class FileReferenceLoader; }
namespace CerealHelpers { struct FileReference; }
namespace CerealHelpers { struct Member; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Json { class Value; }
namespace SharedTypes::v1_21_20 { struct FilterGroupData; }
namespace SharedTypes::v1_21_20 { struct FilterTestData; }
namespace cereal { class StrictJsonLoader; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CerealHelpers {
// functions
// NOLINTBEGIN
MCNAPI_C bool _beginFromFileReference(
    ::CerealHelpers::FileReference const&            fileReference,
    ::CerealHelpers::FileReferenceLoadContext const& context,
    ::std::string&                                   outJsonFileData
);

MCNAPI_C ::Core::Result _beginLoadFromJsonFile(
    ::CerealHelpers::FileReferenceLoader& fileReferenceLoader,
    ::Core::Path const&                   path,
    ::std::string&                        outJsonFileData
);

MCNAPI_C void _endFromFileReference(
    ::std::optional<::std::vector<::std::string>>&&  errors,
    ::CerealHelpers::FileReferenceLoadContext const& context
);

MCNAPI_C ::Core::Result _endLoadFromJsonFile(
    ::cereal::StrictJsonLoader&           jsonLoader,
    ::CerealHelpers::FileReferenceLoader& fileReferenceLoader,
    ::Core::Path const&                   path
);

MCNAPI void bindBoundingBox(::cereal::ReflectionCtx& ctx);

MCNAPI void bindHelpers(::cereal::ReflectionCtx& ctx);

MCNAPI void bindIntRange(::cereal::ReflectionCtx& ctx);

MCNAPI void bindMceUUID(::cereal::ReflectionCtx& ctx);

MCNAPI ::std::array<int, 3> blockPosAsArray(::BlockPos const& instance);

MCNAPI bool checkBrightnessSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value,
    uchar                                                                                                         min,
    uchar                                                                                                         max
);

MCNAPI bool checkColor255RGBSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value
);

MCNAPI bool checkDefinitionTriggerSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value
);

MCNAPI bool checkEnumSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value,
    ::gsl::span<::std::string const>                                                                              values
);

MCNAPI bool checkExpressionNodeSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value
);

MCNAPI bool checkFloatSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value,
    ::std::optional<float> const&                                                                                 min,
    ::std::optional<float> const&                                                                                 max
);

MCNAPI bool checkItemDescriptorSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value
);

MCNAPI bool checkMembers(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value,
    ::std::initializer_list<::CerealHelpers::Member> members
);

MCNAPI bool checkVec3Schema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value
);

MCNAPI void initialize(::cereal::ReflectionCtx& ctx);

MCNAPI ::std::vector<::std::string>
parseFilterGroupData(::SharedTypes::v1_21_20::FilterGroupData& data, ::Json::Value const& json);

MCNAPI ::std::vector<::std::string>
parseFilterTestData(::SharedTypes::v1_21_20::FilterTestData& data, ::Json::Value const& json);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::add_lvalue_reference_t<char const[]> REGEX_MATERIAL_NAME();

MCNAPI ::std::add_lvalue_reference_t<char const[]> REGEX_NAMESPACE_NAME();

MCNAPI_C ::std::add_lvalue_reference_t<char const[]> REGEX_NO_MINECRAFT_NAMESPACE_NAME();
// NOLINTEND

} // namespace CerealHelpers
