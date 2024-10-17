#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/ValueType.h"
#include "mc/resources/PackParseErrorType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace JsonPackUtils {
// NOLINTBEGIN
MCAPI int readIntAndReport(
    class Json::Value const&  parent,
    std::string const&        element,
    std::vector<std::string>& errorPath,
    class PackReport&         report,
    bool                      optional,
    int                       defaultVal
);

MCAPI std::pair<class Json::Value const, ::PackParseErrorType>
      readRequiredValue(class Json::Value const& value, std::string const& propertyName, ::Json::ValueType type);

MCAPI std::string readStringAndReport(
    class Json::Value const&  parent,
    std::string const&        element,
    std::vector<std::string>& errorPath,
    class PackReport&         report,
    bool                      optional
);

MCAPI std::vector<std::string> readStringArrayAndReport(
    class Json::Value const&  parent,
    std::string const&        element,
    std::vector<std::string>& errorPath,
    class PackReport&         report,
    bool                      optional
);

MCAPI std::pair<class Json::Value const, ::PackParseErrorType> readValueAndReportErrors(
    class Json::Value const&  parent,
    std::string const&        element,
    ::Json::ValueType         type,
    std::vector<std::string>& errorPath,
    class PackReport&         report,
    bool                      optional
);

MCAPI std::string stringizePath(std::vector<std::string> const& pathElements);
// NOLINTEND

}; // namespace JsonPackUtils
