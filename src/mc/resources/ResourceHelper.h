#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace ResourceHelper {
// NOLINTBEGIN
MCAPI bool
deserializePackStackEntry(class Json::Value const& entry, struct PackInstanceId& output, std::string const& packIdSalt);

MCAPI std::string stringifyCapabilities(std::vector<std::string> const&);

MCAPI std::string stringifyResourceMetadataGeneratedWith(class ResourceMetadata const&);
// NOLINTEND

}; // namespace ResourceHelper
