#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {
// inner types
enum : int {
    UintToStringBufferSize = 25,
};

// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::ostream& operator<<(::std::ostream& sout, ::Json::Value const& root);
#endif

MCNAPI ::std::string valueToQuotedString(char const* value);

MCNAPI ::std::string valueToString(double value);

MCNAPI ::std::string valueToString(int64 value);

MCNAPI ::std::string valueToString(uint64 value);
// NOLINTEND

} // namespace Json
