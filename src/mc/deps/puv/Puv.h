#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace Puv {
// functions
// NOLINTBEGIN
MCNAPI ::SemVersion pickJsonFormatVersion(::std::string_view input);

MCNAPI ::SemVersion::MatchType versionFromJson(
    ::rapidjson::
        GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& json,
    ::SemVersion&                                                                                                 output
);
// NOLINTEND

} // namespace Puv
