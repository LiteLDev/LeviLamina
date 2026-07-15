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
#ifdef LL_PLAT_C
MCNAPI bool _beginFromFileReference(
    ::CerealHelpers::FileReference const&            fileReference,
    ::CerealHelpers::FileReferenceLoadContext const& context,
    ::std::string&                                   outJsonFileData
);

MCNAPI ::Core::Result _beginLoadFromJsonFile(
    ::CerealHelpers::FileReferenceLoader& fileReferenceLoader,
    ::Core::Path const&                   path,
    ::std::string&                        outJsonFileData
);

MCNAPI void _endFromFileReference(
    ::std::optional<::std::vector<::std::string>>&&  errors,
    ::CerealHelpers::FileReferenceLoadContext const& context
);

MCNAPI ::Core::Result _endLoadFromJsonFile(
    ::cereal::StrictJsonLoader&           jsonLoader,
    ::CerealHelpers::FileReferenceLoader& fileReferenceLoader,
    ::Core::Path const&                   path
);
#endif

MCNAPI void bindBoundingBox(::cereal::ReflectionCtx& ctx);

MCNAPI void bindBrightness(::cereal::ReflectionCtx& ctx);

MCNAPI void bindHelpers(::cereal::ReflectionCtx& ctx);

MCNAPI void bindIntRange(::cereal::ReflectionCtx& ctx);

MCNAPI void blockPosFromArray(::BlockPos& instance, ::std::array<int, 3> const& arr);

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

MCNAPI bool checkEnumSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value,
    ::gsl::span<::std::string const>                                                                              values
);

MCNAPI bool checkExpressionNodeSchema(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value
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
legacyParseFilterGroupData(::SharedTypes::v1_21_20::FilterGroupData& data, ::Json::Value const& json);

MCNAPI ::std::vector<::std::string>
legacyParseFilterTestData(::SharedTypes::v1_21_20::FilterTestData& data, ::Json::Value const& json);
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::add_lvalue_reference_t<char const[]> REGEX_NAMESPACE_NAME();
#endif
// NOLINTEND

} // namespace CerealHelpers
