#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace JsonHelpers {
// functions
// NOLINTBEGIN
MCAPI void addObjectField(::Json::Value& rootValue, ::std::string const& fieldName, ::Json::Value const& object);

MCAPI void addStringField(::Json::Value& rootValue, ::std::string const& fieldName, ::std::string const& value);

MCAPI ::std::string getAsString(::Json::Value const& value, ::std::string_view defaultString);

MCAPI ::std::string
getFieldAsString(::Json::Value const& rootValue, ::std::string const& fieldName, ::std::string const& defaultString);

MCAPI bool parseJson(::std::string const& str, ::Json::Value& root);

MCAPI ::std::string serialize(::Json::Value const& root);
// NOLINTEND

} // namespace JsonHelpers
