#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/schema/BasicSchema.h"
#include "mc/deps/cereal/schema/ReflectedType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { struct DescriptionConfig; }
namespace cereal { struct SchemaDescription; }
namespace cereal::internal { class BasicSchema; }
namespace cereal::internal { struct ReflectionContext; }
namespace cereal::util::internal { struct StringViewHash; }
// clang-format on

namespace cereal::internal {
// functions
// NOLINTBEGIN
MCAPI void checkAndOverride(::entt::meta_type const& metaType, uint metaDataId);

MCFOLD void checkComponentOverride(::entt::meta_type const& metaType, uint metaDataId);

MCAPI void deprecateName(::entt::meta_type const& type, ::std::string_view name);

MCAPI ::cereal::internal::BasicSchema::TypeDescriptor const*
descriptorOrFail(::entt::meta_any const& any, ::entt::type_info const& expected);

MCAPI ::cereal::DynamicValue dynamicValueFromProp(::entt::meta_any const& any);

MCAPI void fillEnumDescription(
    ::cereal::internal::ReflectionContext const& ctx,
    ::cereal::SchemaDescription&                 ret,
    ::entt::meta_type const&                     type,
    ::cereal::DescriptionConfig                  config
);

MCAPI ::std::string formatMessage(::std::string_view fmt, ::std::string_view a);

MCAPI ::std::string formatMessage(::std::string_view fmt, ::std::string_view a, ::std::string_view b);

MCAPI ::std::string
formatMessage(::std::string_view fmt, ::std::string_view a, ::std::string_view b, ::std::string_view c);

MCAPI ::cereal::internal::ReflectedType getReflectedType(::entt::meta_type const& type);

MCAPI ::entt::dense_map<
    ::std::string,
    ::std::pair<::entt::meta_type (*)(::entt::meta_ctx const&), ::entt::basic_any<16, 8>>,
    ::cereal::util::internal::StringViewHash,
    ::std::equal_to<void>>*
getUserProperties(::entt::meta_data const& data);

MCAPI ::entt::dense_map<
    ::std::string,
    ::std::pair<::entt::meta_type (*)(::entt::meta_ctx const&), ::entt::basic_any<16, 8>>,
    ::cereal::util::internal::StringViewHash,
    ::std::equal_to<void>>*
getUserProperties(::entt::meta_type const& type);

MCAPI ::cereal::internal::BasicSchema const* lookup(::entt::meta_ctx const& ctx, ::entt::type_info info);

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
