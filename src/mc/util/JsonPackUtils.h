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
MCAPI ::std::pair<::Json::Value const, ::PackParseErrorType>
readRequiredValue(::Json::Value const& value, ::std::string const& propertyName, ::Json::ValueType type);

MCAPI ::std::string readStringAndReport(
    ::Json::Value const&          parent,
    ::std::string const&          element,
    ::std::vector<::std::string>& errorPath,
    ::PackReport&                 report,
    bool                          optional
);

MCAPI ::std::vector<::std::string> readStringArrayAndReport(
    ::Json::Value const&          parent,
    ::std::string const&          element,
    ::std::vector<::std::string>& errorPath,
    ::PackReport&                 report,
    bool                          optional
);

MCAPI ::std::pair<::Json::Value const, ::PackParseErrorType> readValueAndReportErrors(
    ::Json::Value const&          parent,
    ::std::string const&          element,
    ::Json::ValueType             type,
    ::std::vector<::std::string>& errorPath,
    ::PackReport&                 report,
    bool                          optional
);

MCAPI ::std::string stringizePath(::std::vector<::std::string> const& pathElements);
// NOLINTEND

} // namespace JsonPackUtils
