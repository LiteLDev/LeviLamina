#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/ValueType.h"
#include "mc/resources/PackParseErrorType.h"

// auto generated forward declare list
// clang-format off
class PackReport;
namespace Json { class Value; }
// clang-format on

namespace JsonPackUtils {
// functions
// NOLINTBEGIN
MCNAPI bool readBoolAndReport(
    ::Json::Value const&          parent,
    ::std::string const&          element,
    ::std::vector<::std::string>& errorPath,
    ::PackReport&                 report,
    bool                          optional,
    bool                          defaultVal
);

MCNAPI ::std::pair<::Json::Value const, ::PackParseErrorType>
readRequiredValue(::Json::Value const& value, ::std::string const& propertyName, ::Json::ValueType type);

MCNAPI ::std::string readStringAndReport(
    ::Json::Value const&          parent,
    ::std::string const&          element,
    ::std::vector<::std::string>& errorPath,
    ::PackReport&                 report,
    bool                          optional
);

MCNAPI ::std::vector<::std::string> readStringArrayAndReport(
    ::Json::Value const&          parent,
    ::std::string const&          element,
    ::std::vector<::std::string>& errorPath,
    ::PackReport&                 report,
    bool                          optional
);

MCNAPI ::std::pair<::Json::Value const*, ::PackParseErrorType>
readValue(::Json::Value const& value, ::std::string const& propertyName);

MCNAPI ::std::pair<::Json::Value const, ::PackParseErrorType> readValueAndReportErrors(
    ::Json::Value const&          parent,
    ::std::string const&          element,
    ::Json::ValueType             type,
    ::std::vector<::std::string>& errorPath,
    ::PackReport&                 report,
    bool                          optional
);

MCNAPI ::std::string stringizePath(::std::vector<::std::string> const& pathElements);
// NOLINTEND

} // namespace JsonPackUtils
