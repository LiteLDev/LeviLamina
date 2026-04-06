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
MCNAPI void addIntField(::Json::Value& rootValue, ::std::string const& fieldName, int const& value);

MCNAPI void addStringField(::Json::Value& rootValue, ::std::string const& fieldName, ::std::string const& value);
#endif

MCNAPI ::std::string getAsString(::Json::Value const& value, ::std::string_view defaultString);

#ifdef LL_PLAT_C
MCNAPI ::std::vector<::std::string> getAsStringArray(::Json::Value const& value);

MCNAPI ::Json::Value const& getField(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI ::Json::Value const& getFieldAsArray(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI bool getFieldAsBool(::Json::Value const& rootValue, ::std::string const& fieldName, bool defaultBool);

MCNAPI float getFieldAsFloat(::Json::Value const& rootValue, ::std::string const& fieldName, float defaultFloat);

MCNAPI int getFieldAsInt(::Json::Value const& rootValue, ::std::string const& fieldName, int defaultInt);

MCNAPI int64 getFieldAsInt64(::Json::Value const& rootValue, ::std::string const& fieldName, int64 defaultInt64);

MCNAPI ::std::unordered_map<::std::string, ::std::string>
getFieldAsLocDictionary(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI ::std::unordered_map<::std::string, ::std::string>
getFieldAsMapOfKeyValuePairs(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI ::Json::Value const& getFieldAsObject(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI ::std::vector<::std::reference_wrapper<::Json::Value const>>
getFieldAsObjectArray(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI ::std::string
getFieldAsString(::Json::Value const& rootValue, ::std::string const& fieldName, ::std::string const& defaultString);

MCNAPI ::std::vector<::std::string>
getFieldAsStringArray(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI uint64 getFieldAsUint64(::Json::Value const& rootValue, ::std::string const& fieldName, uint64 defaultUint64);

MCNAPI bool hasField(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI bool parseJson(::std::string const& str, ::Json::Value& root);

MCNAPI ::std::string serialize(::Json::Value const& root);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::Json::Value const& EMPTY_JSON();
// NOLINTEND

} // namespace JsonHelpers
