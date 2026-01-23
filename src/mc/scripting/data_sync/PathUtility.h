#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI::PathUtility { struct PathQueryError; }
namespace cereal { class DynamicValue; }
// clang-format on

namespace Bedrock::DDUI::PathUtility {
// functions
// NOLINTBEGIN
MCNAPI char const* getTypeString(::cereal::DynamicValue const& value);

MCNAPI ::nonstd::
    expected<::std::vector<::std::variant<::std::string, uint>>, ::Bedrock::DDUI::PathUtility::PathQueryError>
    parsePath(::std::string const& wholePath);

MCNAPI ::nonstd::expected<void, ::Bedrock::DDUI::PathUtility::PathQueryError> setPathOnDataStoreObject(
    ::cereal::DynamicValue&                            originalObject,
    ::std::string const&                               path,
    ::std::variant<double, bool, ::std::string> const& newData,
    ::std::string const&                               dataStoreName,
    ::std::string const&                               propertyName
);

MCNAPI ::std::optional<::cereal::DynamicValue> stringToDynamicValue(::std::string const& s);
// NOLINTEND

} // namespace Bedrock::DDUI::PathUtility
