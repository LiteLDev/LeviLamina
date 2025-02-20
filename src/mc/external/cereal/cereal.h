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
MCAPI ::std::string const* documentation(::entt::meta_type const& type, uint member);

MCAPI ::std::string_view getName(::entt::meta_type const& type);

MCAPI ::std::string_view getName(::entt::meta_type const& type, uint member);

MCAPI ::cereal::SchemaDescription getSchemaDescription(::cereal::ReflectionCtx const& ctx, ::entt::type_info info);

MCAPI ::std::vector<::cereal::SchemaDescription> getSchemaDescriptions(::cereal::ReflectionCtx const& ctx);

MCAPI bool isOptional(::entt::meta_type const& type);

MCAPI bool isVariant(::entt::meta_type const& type);

MCAPI ::entt::meta_type resolve(::cereal::ReflectionCtx const& ctx, ::std::string_view name);

MCAPI ::Json::Value toJsonValue(::cereal::DynamicValue const& value);

MCAPI ::std::vector<::entt::meta_func> typeLevelSetters(::entt::meta_type const& type);
// NOLINTEND

} // namespace cereal
