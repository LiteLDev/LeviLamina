#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceMetadata;
struct PackIdVersion;
struct PackInstanceId;
namespace Json { class Value; }
// clang-format on

namespace ResourceHelper {
// functions
// NOLINTBEGIN
MCNAPI bool
deserializePackStackEntry(::Json::Value const& entry, ::PackInstanceId& output, ::std::string const& packIdSalt);

MCNAPI void serializePackStackEntry(::PackInstanceId const& packInstanceId, ::Json::Value& output);

MCNAPI ::std::string stringifyResourceMetadataGeneratedWith(::ResourceMetadata const& resourceMetadata);

MCNAPI_C ::PackIdVersion toPackIdAnyVersion(::PackIdVersion const& fromPackIdVersion);
// NOLINTEND

} // namespace ResourceHelper
