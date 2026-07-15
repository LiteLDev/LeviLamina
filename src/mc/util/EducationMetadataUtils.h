#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackReport;
struct EducationMetadata;
// clang-format on

namespace EducationMetadataUtils {
// functions
// NOLINTBEGIN
MCNAPI ::EducationMetadata
parse(::std::string const& manifestContent, ::std::vector<::std::string>& errorPath, ::PackReport& report);
// NOLINTEND

} // namespace EducationMetadataUtils
