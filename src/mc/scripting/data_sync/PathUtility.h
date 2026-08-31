#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/scripting/data_sync/PathQueryError.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI::PathUtility { struct PathQueryError; }
namespace cereal { class DynamicValue; }
// clang-format on

namespace Bedrock::DDUI::PathUtility {
// functions
// NOLINTBEGIN
template <class T>
    requires std::is_same_v<T, cereal::DynamicValue>
MCAPI nonstd::expected<gsl::not_null<T*>, ::Bedrock::DDUI::PathUtility::PathQueryError> queryDataStoreObjectT(
    cereal::DynamicValue& originalObject,
    std::string const&    path,
    std::string const&    dataStoreName,
    std::string const&    propertyName
);

inline nonstd::expected<void, ::Bedrock::DDUI::PathUtility::PathQueryError> setPathOnDataStoreObject(
    cereal::DynamicValue&       originalObject,
    std::string const&          path,
    cereal::DynamicValue const& newData,
    std::string const&          dataStoreName,
    std::string const&          propertyName
) {
    auto result = queryDataStoreObjectT<cereal::DynamicValue>(originalObject, path, dataStoreName, propertyName);

    if (!result) {
        return nonstd::make_unexpected(result.error());
    }

    result.value()->mValue = newData.mValue;

    return {};
}

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
