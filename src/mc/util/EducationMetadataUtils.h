#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackReport;
struct EducationMetadata;
namespace Json { class Value; }
// clang-format on

namespace EducationMetadataUtils {
// functions
// NOLINTBEGIN
MCAPI ::EducationMetadata
parse(::std::string const& manifestContent, ::std::vector<::std::string>& errorPath, ::PackReport& report);

MCAPI void parseEducationMetadataContent(
    ::Json::Value const&          root,
    ::std::vector<::std::string>& errorPath,
    ::EducationMetadata&          metadata,
    ::PackReport&                 report
);
// NOLINTEND

} // namespace EducationMetadataUtils
