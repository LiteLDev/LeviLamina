#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
namespace Core { class Result; }
namespace Json { class Value; }
// clang-format on

namespace Social::Events {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::Core::Result GetFileAsStringVector(::Core::File& file, ::std::vector<::std::string>& actions);
#endif

MCNAPI void UpdateBlockArray(
    ::std::unordered_map<::std::string, ::Json::Value>& blockMap,
    ::std::string const&                                blockNamespace,
    ::std::string const&                                blockName,
    ::std::string const&                                toolName
);

#ifdef LL_PLAT_C
MCNAPI ::Json::Value convertBoolValues(::Json::Value value);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI int& eventSequenceNumber();
#endif
// NOLINTEND

} // namespace Social::Events
