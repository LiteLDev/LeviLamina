#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace JsonHelpers {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI void addObjectArrayField(
    ::Json::Value&                      rootValue,
    ::std::string const&                fieldName,
    ::std::vector<::Json::Value> const& objectArray
);

MCNAPI void addStringArrayField(
    ::Json::Value&                      rootValue,
    ::std::string const&                fieldName,
    ::std::vector<::std::string> const& stringArray
);
#endif

MCNAPI ::std::string getAsString(::Json::Value const& value, ::std::string_view defaultString);

#ifdef LL_PLAT_C
MCNAPI ::std::vector<::std::string> getAsStringArray(::Json::Value const& value);

MCNAPI float getFieldAsFloat(::Json::Value const& rootValue, ::std::string const& fieldName, float defaultFloat);

MCNAPI int getFieldAsInt(::Json::Value const& rootValue, ::std::string const& fieldName, int defaultInt);

MCNAPI ::std::unordered_map<::std::string, ::std::string>
getFieldAsLocDictionary(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI ::std::unordered_map<::std::string, ::std::string>
getFieldAsMapOfKeyValuePairs(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI ::std::vector<::std::reference_wrapper<::Json::Value const>>
getFieldAsObjectArray(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI ::std::string
getFieldAsString(::Json::Value const& rootValue, ::std::string const& fieldName, ::std::string const& defaultString);

MCNAPI ::std::vector<::std::string>
getFieldAsStringArray(::Json::Value const& rootValue, ::std::string const& fieldName);
#endif

MCNAPI ::std::string serialize(::Json::Value const& root);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::Json::Value const& EMPTY_JSON();
// NOLINTEND

} // namespace JsonHelpers
