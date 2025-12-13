#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
// clang-format on

namespace cereal {
// functions
// NOLINTBEGIN
MCNAPI ::std::string const* documentation(::entt::meta_data const& data);

MCNAPI ::std::string const* documentation(::entt::meta_type const& type);

MCNAPI ::std::string const* documentation(::entt::meta_type const& type, uint member);

MCNAPI ::std::string_view getName(::entt::meta_data const& data);

MCNAPI ::std::string_view getName(::entt::meta_type const& type);

MCNAPI_S ::cereal::SchemaDescription getSchemaDescription(::cereal::ReflectionCtx const& ctx, ::entt::type_info info);

MCNAPI_C ::std::vector<::cereal::SchemaDescription>
getSchemaDescriptionRecursive(::cereal::ReflectionCtx const& ctx, ::entt::type_info info);

MCNAPI_S ::std::vector<::cereal::SchemaDescription> getSchemaDescriptions(::cereal::ReflectionCtx const& ctx);

MCNAPI bool isOptional(::entt::meta_type const& type);

MCNAPI bool isReflected(::cereal::ReflectionCtx const& ctx, ::entt::type_info const& info);

MCNAPI bool isVariant(::entt::meta_type const& type);

MCNAPI bool operator==(::cereal::DynamicValue const& l, ::cereal::DynamicValue const& r);

MCNAPI ::Json::Value toJsonValue(::cereal::DynamicValue const& value);

MCNAPI ::std::vector<::entt::meta_func> typeLevelSetters(::entt::meta_type const& type);
// NOLINTEND

} // namespace cereal
