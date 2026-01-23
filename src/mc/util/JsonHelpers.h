#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace JsonHelpers {
// functions
// NOLINTBEGIN
MCNAPI_C void addIntField(::Json::Value& rootValue, ::std::string const& fieldName, int const& value);

MCNAPI_C void addStringField(::Json::Value& rootValue, ::std::string const& fieldName, ::std::string const& value);

MCNAPI ::std::string getAsString(::Json::Value const& value, ::std::string_view defaultString);

MCNAPI_C ::std::vector<::std::string> getAsStringArray(::Json::Value const& value);

MCNAPI_C ::Json::Value const& getField(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI_C ::Json::Value const& getFieldAsArray(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI_C bool getFieldAsBool(::Json::Value const& rootValue, ::std::string const& fieldName, bool defaultBool);

MCNAPI_C float getFieldAsFloat(::Json::Value const& rootValue, ::std::string const& fieldName, float defaultFloat);

MCNAPI_C int getFieldAsInt(::Json::Value const& rootValue, ::std::string const& fieldName, int defaultInt);

MCNAPI_C int64 getFieldAsInt64(::Json::Value const& rootValue, ::std::string const& fieldName, int64 defaultInt64);

MCNAPI_C ::std::unordered_map<::std::string, ::std::string>
getFieldAsLocDictionary(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI_C ::std::unordered_map<::std::string, ::std::string>
getFieldAsMapOfKeyValuePairs(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI_C ::Json::Value const& getFieldAsObject(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI_C ::std::vector<::std::reference_wrapper<::Json::Value const>>
getFieldAsObjectArray(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI_C ::std::string
getFieldAsString(::Json::Value const& rootValue, ::std::string const& fieldName, ::std::string const& defaultString);

MCNAPI_C ::std::vector<::std::string>
getFieldAsStringArray(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI_C uint64 getFieldAsUint64(::Json::Value const& rootValue, ::std::string const& fieldName, uint64 defaultUint64);

MCNAPI_C bool hasField(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI_C bool parseJson(::std::string const& str, ::Json::Value& root);

MCNAPI_C ::std::string serialize(::Json::Value const& root);
// NOLINTEND

} // namespace JsonHelpers
