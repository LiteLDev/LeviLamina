#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaDescriptionConfig; }
// clang-format on

namespace cereal {
// functions
// NOLINTBEGIN
MCNAPI ::std::string const* documentation(::entt::meta_data const& data);

MCNAPI ::std::string const* documentation(::entt::meta_type const& type);

MCNAPI ::std::string const* documentation(::entt::meta_type const& type, uint member);

MCNAPI ::std::string_view getName(::entt::meta_data const& data);

MCNAPI ::std::string_view getName(::entt::meta_type const& type);

MCNAPI ::std::string_view getName(::entt::meta_type const& type, uint member);

MCNAPI_S ::cereal::SchemaDescription getSchemaDescription(
    ::cereal::ReflectionCtx const&    ctx,
    ::entt::type_info                 info,
    ::cereal::SchemaDescriptionConfig config
);

MCNAPI_C ::std::vector<::cereal::SchemaDescription> getSchemaDescriptionRecursive(
    ::cereal::ReflectionCtx const&    ctx,
    ::entt::type_info                 info,
    ::cereal::SchemaDescriptionConfig config
);

MCNAPI_S ::std::vector<::cereal::SchemaDescription>
getSchemaDescriptions(::cereal::ReflectionCtx const& ctx, ::cereal::SchemaDescriptionConfig config);

MCNAPI bool isOptional(::entt::meta_type const& type);

MCNAPI bool isVariant(::entt::meta_type const& type);

MCNAPI_C ::std::optional<::std::string> toJsonString(::std::optional<::cereal::DynamicValue> value);

MCNAPI_C ::std::string toJsonString(::cereal::DynamicValue const& value);

MCNAPI ::Json::Value toJsonValue(::cereal::DynamicValue const& value);

MCNAPI ::entt::meta_any tryFillVariant(::entt::meta_any& var, ::entt::meta_any value);

MCNAPI ::std::vector<::entt::meta_func> typeLevelSetters(::entt::meta_type const& type);
// NOLINTEND

} // namespace cereal
