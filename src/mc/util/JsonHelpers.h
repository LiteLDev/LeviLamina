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
MCNAPI void addBoolField(::Json::Value& rootValue, ::std::string const& fieldName, bool const& value);

MCNAPI void addFloatField(::Json::Value& rootValue, ::std::string const& fieldName, double const& value);

MCNAPI void addInt64Field(::Json::Value& rootValue, ::std::string const& fieldName, int64 const& value);

MCNAPI void addIntField(::Json::Value& rootValue, ::std::string const& fieldName, int const& value);

MCNAPI void addObjectArrayField(
    ::Json::Value&                      rootValue,
    ::std::string const&                fieldName,
    ::std::vector<::Json::Value> const& objectArray
);
#endif

MCNAPI void addObjectField(::Json::Value& rootValue, ::std::string const& fieldName, ::Json::Value const& object);

#ifdef LL_PLAT_C
MCNAPI void addStringArrayField(
    ::Json::Value&                      rootValue,
    ::std::string const&                fieldName,
    ::std::vector<::std::string> const& stringArray
);
#endif

MCNAPI void addStringField(::Json::Value& rootValue, ::std::string const& fieldName, ::std::string const& value);

#ifdef LL_PLAT_C
MCNAPI void addUint32Field(::Json::Value& rootValue, ::std::string const& fieldName, uint const& value);
#endif

MCNAPI void addUint64Field(::Json::Value& rootValue, ::std::string const& fieldName, uint64 const& value);

#ifdef LL_PLAT_C
MCNAPI ::Json::Value const& getAsArray(::Json::Value const& value, ::Json::Value const& defaultValue);

MCNAPI bool getAsBool(::Json::Value const& value, bool defaultBool);

MCNAPI int getAsInt(::Json::Value const& value, int defaultInt);
#endif

MCNAPI ::std::string getAsString(::Json::Value const& value, ::std::string_view defaultString);

#ifdef LL_PLAT_C
MCNAPI ::std::vector<::std::string> getAsStringArray(::Json::Value const& value);

MCNAPI uint getAsUint(::Json::Value const& value, uint defaultUint);
#endif

MCNAPI ::Json::Value const& getField(::Json::Value const& rootValue, ::std::string const& fieldName);

#ifdef LL_PLAT_C
MCNAPI ::Json::Value const& getFieldAsArray(::Json::Value const& rootValue, ::std::string const& fieldName);
#endif

MCNAPI bool getFieldAsBool(::Json::Value const& rootValue, ::std::string const& fieldName, bool defaultBool);

#ifdef LL_PLAT_C
MCNAPI float getFieldAsFloat(::Json::Value const& rootValue, ::std::string const& fieldName, float defaultFloat);

MCNAPI int getFieldAsInt(::Json::Value const& rootValue, ::std::string const& fieldName, int defaultInt);

MCNAPI int64 getFieldAsInt64(::Json::Value const& rootValue, ::std::string const& fieldName, int64 defaultInt64);

MCNAPI ::std::unordered_map<::std::string, ::std::string>
getFieldAsLocDictionary(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI ::std::unordered_map<::std::string, ::std::string>
getFieldAsMapOfKeyValuePairs(::Json::Value const& rootValue, ::std::string const& fieldName);
#endif

MCNAPI ::Json::Value const& getFieldAsObject(::Json::Value const& rootValue, ::std::string const& fieldName);

#ifdef LL_PLAT_C
MCNAPI ::std::vector<::std::reference_wrapper<::Json::Value const>>
getFieldAsObjectArray(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI ::std::optional<uint64> getFieldAsOptUint64(::Json::Value const& rootValue, ::std::string const& fieldName);
#endif

MCNAPI ::std::string
getFieldAsString(::Json::Value const& rootValue, ::std::string const& fieldName, ::std::string const& defaultString);

#ifdef LL_PLAT_C
MCNAPI ::std::vector<::std::string>
getFieldAsStringArray(::Json::Value const& rootValue, ::std::string const& fieldName);

MCNAPI uint getFieldAsUint(::Json::Value const& rootValue, ::std::string const& fieldName, uint defaultUint);

MCNAPI uint64 getFieldAsUint64(::Json::Value const& rootValue, ::std::string const& fieldName, uint64 defaultUint64);

MCNAPI bool hasField(::Json::Value const& rootValue, ::std::string const& fieldName);
#endif

MCNAPI bool parseJson(::std::string const& str, ::Json::Value& root);

MCNAPI ::std::string serialize(::Json::Value const& root);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::Json::Value const& EMPTY_JSON();
// NOLINTEND

} // namespace JsonHelpers
