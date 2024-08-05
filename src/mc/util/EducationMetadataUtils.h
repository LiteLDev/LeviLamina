#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace EducationMetadataUtils {
// NOLINTBEGIN
MCAPI struct EducationMetadata
parse(std::string const& manifestContent, std::vector<std::string>& errorPath, class PackReport& report);

MCAPI void parseEducationMetadataContent(
    class Json::Value const&  root,
    std::vector<std::string>& errorPath,
    struct EducationMetadata& metadata,
    class PackReport&         report
);
// NOLINTEND

}; // namespace EducationMetadataUtils
