#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI::PathUtility { struct PathQueryError; }
namespace cereal { class DynamicValue; }
// clang-format on

namespace Bedrock::DDUI::PathUtility {
// functions
// NOLINTBEGIN
MCAPI char const* getTypeString(::cereal::DynamicValue::Type const& type);

MCAPI ::nonstd::
    expected<::std::vector<::std::variant<::std::string, uint>>, ::Bedrock::DDUI::PathUtility::PathQueryError>
    parsePath(::std::string const& wholePath);

MCAPI ::nonstd::expected<void, ::Bedrock::DDUI::PathUtility::PathQueryError> setPathOnDataStoreObject(
    ::cereal::DynamicValue&       originalObject,
    ::std::string const&          path,
    ::cereal::DynamicValue const& newData,
    ::std::string const&          dataStoreName,
    ::std::string const&          propertyName
);

MCAPI ::nonstd::expected<void, ::Bedrock::DDUI::PathUtility::PathQueryError> setPathOnDataStoreObject(
    ::cereal::DynamicValue&                            originalObject,
    ::std::string const&                               path,
    ::std::variant<double, bool, ::std::string> const& newData,
    ::std::string const&                               dataStoreName,
    ::std::string const&                               propertyName
);

MCAPI ::std::optional<::cereal::DynamicValue> stringToDynamicValue(::std::string const& s);
// NOLINTEND

} // namespace Bedrock::DDUI::PathUtility
