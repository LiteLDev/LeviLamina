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
MCAPI ::std::optional<::std::variant<double, bool, ::std::string>>
convertToPrimitive(::cereal::DynamicValue const& obj);

MCAPI ::nonstd::
    expected<::std::vector<::std::variant<::std::string, uint>>, ::Bedrock::DDUI::PathUtility::PathQueryError>
    parsePath(::std::string const& wholePath);

MCAPI ::std::string rebuildPath(
    ::std::string const&                                      datastore,
    ::std::string const&                                      property,
    ::std::vector<::std::variant<::std::string, uint>> const& tokens,
    ::std::optional<uint>                                     maxTokenIndex
);

MCAPI ::std::optional<::cereal::DynamicValue> stringToDynamicValue(::std::string const& s);
// NOLINTEND

} // namespace Bedrock::DDUI::PathUtility
