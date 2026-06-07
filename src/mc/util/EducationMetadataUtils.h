#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/EducationMetadata.h"

// auto generated forward declare list
// clang-format off
class PackReport;
struct EducationMetadata;
namespace Json { class Value; }
// clang-format on

namespace EducationMetadataUtils {
// functions
// NOLINTBEGIN
MCNAPI ::EducationMetadata
parse(::std::string const& manifestContent, ::std::vector<::std::string>& errorPath, ::PackReport& report);

MCNAPI ::EducationMetadata::ContentType parseContentTypeString(::std::string const& contentType);

MCNAPI void parseEducationMetadataContent(
    ::Json::Value const&          root,
    ::std::vector<::std::string>& errorPath,
    ::EducationMetadata&          metadata,
    ::PackReport&                 report
);

MCNAPI ::EducationMetadata::UserType parseUserTypeString(::std::string const& userType);
// NOLINTEND

} // namespace EducationMetadataUtils
