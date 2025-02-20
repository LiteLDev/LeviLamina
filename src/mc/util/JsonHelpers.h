#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace JsonHelpers {
// functions
// NOLINTBEGIN
MCAPI ::std::string getAsString(::Json::Value const& value, ::std::string_view defaultString);

MCAPI bool parseJson(::std::string const& str, ::Json::Value& root);

MCAPI ::std::string serialize(::Json::Value const& root);
// NOLINTEND

} // namespace JsonHelpers
