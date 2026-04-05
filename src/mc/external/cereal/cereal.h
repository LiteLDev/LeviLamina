#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { class DynamicValue; }
namespace cereal { struct DescriptionConfig; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
// clang-format on

namespace cereal {
// functions
// NOLINTBEGIN
MCNAPI ::std::string_view areaToString(::cereal::ContextArea area);

MCNAPI ::std::string const* documentation(::entt::meta_type const& type);

MCNAPI ::std::string const* documentation(::entt::meta_type const& type, uint member);

MCNAPI ::std::string_view getName(::entt::meta_type const& type);

MCNAPI ::std::string_view getName(::entt::meta_type const& type, uint member);

MCNAPI ::cereal::SchemaDescription
getSchemaDescription(::cereal::ReflectionCtx const& ctx, ::entt::type_info info, ::cereal::DescriptionConfig config);

MCNAPI ::std::vector<::cereal::SchemaDescription> getSchemaDescriptionRecursive(
    ::cereal::ReflectionCtx const& ctx,
    ::entt::type_info              info,
    ::cereal::DescriptionConfig    config
);

MCNAPI ::std::vector<::cereal::SchemaDescription>
getSchemaDescriptions(::cereal::ReflectionCtx const& ctx, ::cereal::DescriptionConfig config);

MCNAPI bool isOptional(::entt::meta_type const& type);

MCNAPI bool isVariant(::entt::meta_type const& type);

MCNAPI bool operator==(::cereal::DynamicValue const& lhs, ::cereal::DynamicValue const& rhs);

MCNAPI ::entt::meta_type resolve(::cereal::ReflectionCtx const& ctx, ::entt::type_info const& info);

MCNAPI ::std::string toJsonString(::cereal::DynamicValue const& value);

MCNAPI ::std::optional<::std::string> toJsonString(::std::optional<::cereal::DynamicValue> value);

MCNAPI ::Json::Value toJsonValue(::cereal::DynamicValue const& value);

MCNAPI ::entt::meta_any tryFillVariant(::entt::meta_any& var, ::entt::meta_any value);

MCNAPI ::std::vector<::entt::meta_func> typeLevelSetters(::entt::meta_type const& type);
// NOLINTEND

} // namespace cereal
