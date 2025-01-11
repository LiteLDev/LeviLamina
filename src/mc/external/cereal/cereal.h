#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { class DynamicValue; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
// clang-format on

namespace cereal {
// functions
// NOLINTBEGIN
MCAPI ::std::string const* documentation(::entt::meta_type const& type);

MCAPI ::std::string const* documentation(::entt::meta_type const& type, uint member);

MCAPI uint enttHash(::std::string_view str);

MCAPI ::entt::meta_any fillOptional(::entt::meta_any& opt);

MCAPI ::entt::meta_any fillPointerLike(::entt::meta_any& ptrValue);

MCAPI ::cereal::SerializerEnumMapping const*
getEnumMapping(::cereal::ReflectionCtx const& ctx, ::entt::meta_type const& type);

MCAPI ::cereal::SerializerEnumMapping const*
getEnumMapping(::cereal::ReflectionCtx const& ctx, ::entt::meta_type const& type, uint member);

MCAPI ::std::string_view getName(::cereal::ReflectionCtx const& ctx, ::entt::meta_type const& type);

MCAPI ::std::string_view getName(::cereal::ReflectionCtx const& ctx, ::entt::meta_type const& type, uint member);

MCAPI ::cereal::SchemaDescription getSchemaDescription(::cereal::ReflectionCtx const& ctx, uint typeId);

MCAPI ::std::vector<::cereal::SchemaDescription> getSchemaDescriptions(::cereal::ReflectionCtx const& ctx);

MCAPI bool isOptional(::entt::meta_type const& type);

MCAPI bool isVariant(::entt::meta_type const& type);

MCAPI ::entt::meta_type resolve(::cereal::ReflectionCtx const& ctx, ::entt::type_info const& info);

MCAPI ::entt::meta_type resolve(::cereal::ReflectionCtx const& ctx, ::std::string_view name);

MCAPI ::Json::Value toJsonValue(::cereal::DynamicValue const& value);

MCAPI ::entt::meta_any tryFillVariant(::entt::meta_any& var, ::entt::meta_any value);

MCFOLD ::entt::meta_any tryGetOptionalValue(::entt::meta_handle opt);

MCFOLD ::entt::meta_any tryGetVariantValue(::entt::meta_handle var);

MCAPI ::entt::meta_func typeLevelGetter(::entt::meta_type const& type);

MCAPI ::std::vector<::entt::meta_func> typeLevelSetters(::entt::meta_type const& type);
// NOLINTEND

} // namespace cereal
