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
MCNAPI ::std::string const* documentation(::entt::meta_type const& type, uint member);

MCNAPI ::std::string_view getName(::entt::meta_data const& data);

MCNAPI ::std::string_view getName(::entt::meta_type const& type);

MCNAPI ::cereal::SchemaDescription getSchemaDescription(::cereal::ReflectionCtx const& ctx, ::entt::type_info info);

MCNAPI ::std::vector<::cereal::SchemaDescription> getSchemaDescriptions(::cereal::ReflectionCtx const& ctx);

MCNAPI bool isOptional(::entt::meta_type const& type);

MCNAPI bool isReflected(::cereal::ReflectionCtx const& ctx, ::entt::type_info const& info);

MCNAPI bool isVariant(::entt::meta_type const& type);

MCNAPI ::entt::meta_type resolve(::cereal::ReflectionCtx const& ctx, ::std::string_view name);

MCNAPI ::Json::Value toJsonValue(::cereal::DynamicValue const& value);

MCNAPI ::std::vector<::entt::meta_func> typeLevelSetters(::entt::meta_type const& type);
// NOLINTEND

} // namespace cereal
