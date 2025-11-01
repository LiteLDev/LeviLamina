#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"
#include "mc/deps/cereal/schema/ReflectedType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { struct SchemaDescription; }
namespace cereal::internal { class BasicSchema; }
namespace cereal::util::internal { struct StringViewHash; }
// clang-format on

namespace cereal::internal {
// functions
// NOLINTBEGIN
MCNAPI void checkAndOverride(::entt::meta_type const& metaType, uint metaDataId);

MCNAPI void deprecateName(::entt::meta_type const& type, ::std::string_view name);

MCNAPI ::cereal::DynamicValue dynamicValueFromProp(::entt::meta_any const& any);

MCNAPI void fillEnumDescription(
    ::entt::meta_ctx const&                          ctx,
    ::cereal::SchemaDescription&                     ret,
    ::entt::meta_type const&                         type,
    ::cereal::internal::BasicSchema::DescriptionMode mode
);

MCNAPI ::std::string_view getOrMakeUpSchemaName(::entt::meta_type const& type);

MCNAPI ::cereal::internal::ReflectedType getReflectedType(::entt::meta_type const& type);

MCNAPI ::entt::dense_map<
    ::std::string,
    ::std::pair<::entt::meta_type (*)(::entt::meta_ctx const&), ::entt::basic_any<16, 8>>,
    ::cereal::util::internal::StringViewHash,
    ::std::equal_to<void>>*
getUserProperties(::entt::meta_data const& data);

MCNAPI ::entt::dense_map<
    ::std::string,
    ::std::pair<::entt::meta_type (*)(::entt::meta_ctx const&), ::entt::basic_any<16, 8>>,
    ::cereal::util::internal::StringViewHash,
    ::std::equal_to<void>>*
getUserProperties(::entt::meta_type const& type);

MCNAPI ::cereal::internal::BasicSchema const* lookup(::entt::meta_ctx const& ctx, ::entt::type_info info);

MCNAPI ::std::string makeEnumErrorMsg(::entt::meta_type const& type);

MCNAPI ::std::map<::std::string, ::cereal::DynamicValue> pickUserProperties(
    ::entt::meta_ctx const& ctx,
    ::entt::dense_map<
        ::std::string,
        ::std::pair<::entt::meta_type (*)(::entt::meta_ctx const&), ::entt::basic_any<16, 8>>,
        ::cereal::util::internal::StringViewHash,
        ::std::equal_to<void>> const& userProps
);

MCNAPI ::std::string toString(double d);
// NOLINTEND

} // namespace cereal::internal
