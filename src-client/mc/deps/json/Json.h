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
MCAPI ::std::ostream& operator<<(::std::ostream& sout, ::Json::Value const& root);

MCAPI ::std::string valueToQuotedString(char const* value);

MCAPI ::std::string valueToString(uint64 value);

MCAPI ::std::string valueToString(int64 value);

MCAPI ::std::string valueToString(double value);
// NOLINTEND

} // namespace Json
