#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
MCNAPI ::std::string const* documentation(::entt::meta_data const& data);

MCNAPI ::std::string const* documentation(::entt::meta_type const& type);

MCNAPI uint enttHash(::std::string_view str);

MCNAPI ::std::string_view getName(::entt::meta_type const& type);

MCNAPI ::std::string_view getName(::entt::meta_type const& type, uint member);

#ifdef LL_PLAT_S
MCNAPI ::cereal::SchemaDescription
getSchemaDescription(::cereal::ReflectionCtx const& ctx, ::entt::type_info info, ::cereal::DescriptionConfig config);
#endif

#ifdef LL_PLAT_C
MCNAPI ::std::vector<::cereal::SchemaDescription> getSchemaDescriptionRecursive(
    ::cereal::ReflectionCtx const& ctx,
    ::entt::type_info              info,
    ::cereal::DescriptionConfig    config
);
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::vector<::cereal::SchemaDescription>
getSchemaDescriptions(::cereal::ReflectionCtx const& ctx, ::cereal::DescriptionConfig config);
#endif

MCNAPI bool operator==(::cereal::DynamicValue const& lhs, ::cereal::DynamicValue const& rhs);

#ifdef LL_PLAT_S
MCNAPI ::entt::meta_type resolve(::cereal::ReflectionCtx const& ctx, uint id);
#endif

MCNAPI ::entt::meta_type resolve(::cereal::ReflectionCtx const& ctx, ::entt::type_info const& info);

#ifdef LL_PLAT_C
MCNAPI ::std::string toJsonString(::cereal::DynamicValue const& value);

MCNAPI ::std::optional<::std::string> toJsonString(::std::optional<::cereal::DynamicValue> value);
#endif

MCNAPI ::Json::Value toJsonValue(::cereal::DynamicValue const& value);
// NOLINTEND

} // namespace cereal
