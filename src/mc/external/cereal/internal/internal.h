#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/schema/BasicSchema.h"
#include "mc/deps/cereal/schema/ReflectedType.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { class SerializerContext; }
namespace cereal { struct DescriptionConfig; }
namespace cereal { struct SchemaDescription; }
namespace cereal::internal { struct OverrideState; }
namespace cereal::internal { struct ReflectionContext; }
namespace cereal::util::internal { struct StringViewHash; }
// clang-format on

namespace cereal::internal {
// functions
// NOLINTBEGIN
MCAPI void checkAndOverride(::entt::meta_type const& metaType, uint metaDataId);

MCAPI void deprecateName(::entt::meta_type const& type, ::std::string_view name);

MCAPI ::cereal::internal::BasicSchema::TypeDescriptor const*
descriptorOrFail(::entt::meta_any const& any, ::entt::type_info const& expected);

MCAPI ::std::string errorMessage(
    ::cereal::SerializerContext const& context,
    ::entt::type_info const&           expected,
    ::entt::meta_any const&            got
);

MCAPI void fillEnumDescription(
    ::cereal::internal::ReflectionContext const& ctx,
    ::cereal::SchemaDescription&                 ret,
    ::entt::meta_type const&                     type,
    ::cereal::DescriptionConfig                  config
);

#ifdef LL_PLAT_S
MCAPI bool findAndOverride(
    ::brstd::flat_set<
        ::cereal::internal::OverrideState,
        ::std::less<void>,
        ::std::vector<::cereal::internal::OverrideState>>& set,
    ::entt::meta_type const&                               base,
    uint                                                   overridingTypeId
);
#endif

#ifdef LL_PLAT_C
MCAPI bool findAndOverride(
    ::brstd::flat_set<
        ::cereal::internal::OverrideState,
        ::std::less<void>,
        ::std::vector<::cereal::internal::OverrideState>>& set,
    ::entt::meta_type const&                               base,
    uint                                                   overridingTypeId
);
#endif

MCAPI ::cereal::internal::ReflectedType getReflectedType(::entt::meta_type const& type);

#ifdef LL_PLAT_C
MCAPI void getSchemaDescriptionAndDeps(
    ::std::vector<::cereal::SchemaDescription>&  descriptions,
    ::std::set<uint>&                            done,
    ::cereal::internal::ReflectionContext const& ctx,
    ::entt::type_info                            info,
    ::cereal::DescriptionConfig                  config
);
#endif

MCAPI ::std::string makeEnumErrorMsg(::entt::meta_type const& type, ::cereal::ContextArea area);

MCAPI ::std::map<::std::string, ::cereal::DynamicValue> pickUserProperties(
    ::cereal::internal::ReflectionContext const& ctx,
    ::entt::dense_map<
        ::std::string,
        ::std::pair<::entt::meta_type (*)(::entt::meta_ctx const&), ::entt::basic_any<16, 8>>,
        ::cereal::util::internal::StringViewHash,
        ::std::equal_to<void>> const& userProps
);

MCAPI ::std::string toString(double d);
// NOLINTEND

} // namespace cereal::internal
