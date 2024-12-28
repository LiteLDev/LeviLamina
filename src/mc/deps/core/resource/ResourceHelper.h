#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceMetadata;
struct PackInstanceId;
namespace Json { class Value; }
// clang-format on

namespace ResourceHelper {
// functions
// NOLINTBEGIN
MCAPI bool
deserializePackStackEntry(::Json::Value const& entry, ::PackInstanceId& output, ::std::string const& packIdSalt);

MCAPI void serializePackStackEntry(::PackInstanceId const& packInstanceId, ::Json::Value& output);

MCAPI ::std::string stringifyCapabilities(::std::vector<::std::string> const& capabilities);

MCAPI ::std::string stringifyResourceMetadataGeneratedWith(::ResourceMetadata const& resourceMetadata);
// NOLINTEND

} // namespace ResourceHelper
