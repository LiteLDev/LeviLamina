#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"
#include "mc/deps/cereal/schema/ReflectedType.h"
#include "mc/deps/cereal/schema/SchemaTraits.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { class SerializerContext; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
namespace cereal::util::internal { struct StringViewHash; }
// clang-format on

namespace cereal::internal {
// functions
// NOLINTBEGIN
MCNAPI void derefAndLoad(
    ::cereal::internal::BasicSchema const& schema,
    ::cereal::SchemaReader&                reader,
    ::entt::meta_any&                      any,
    ::entt::meta_any const&                udata,
    ::cereal::SerializerContext&           context
);

MCNAPI void derefAndSave(
    ::cereal::internal::BasicSchema const& schema,
    ::cereal::SchemaWriter&                writer,
    ::entt::meta_any const&                any,
    ::cereal::SerializerContext&           context
);

MCNAPI void fillEnumDescription(
    ::entt::meta_ctx const&                          ctx,
    ::cereal::SchemaDescription&                     ret,
    ::entt::meta_type const&                         type,
    ::cereal::internal::BasicSchema::DescriptionMode mode
);

MCNAPI ::cereal::internal::ReflectedType getReflectedType(::entt::meta_type const& type);

MCNAPI ::std::string_view getSchemaNameOrAssert(::entt::meta_ctx const& ctx, ::entt::type_info const& info);

MCNAPI ::entt::
    dense_map<::std::string, ::entt::meta_any, ::cereal::util::internal::StringViewHash, ::std::equal_to<void>>*
    getUserProperties(::entt::meta_data const& data);

MCNAPI ::entt::
    dense_map<::std::string, ::entt::meta_any, ::cereal::util::internal::StringViewHash, ::std::equal_to<void>>*
    getUserProperties(::entt::meta_type const& type);

MCNAPI void loadEnumValue(
    ::entt::meta_type const&     type,
    ::cereal::SchemaReader&      reader,
    ::entt::meta_any&            any,
    ::cereal::SerializerContext& context
);

MCNAPI ::cereal::internal::BasicSchema const* lookup(::entt::meta_ctx const& ctx, ::entt::type_info info);

MCNAPI void overrideCheck(::entt::meta_type type, uint currentMetaData, ::cereal::internal::SchemaTraits traits);

MCNAPI ::std::unordered_map<::std::string, ::cereal::DynamicValue> pickUserProperties(
    ::entt::meta_ctx const& ctx,
    ::entt::dense_map<
        ::std::string,
        ::entt::meta_any,
        ::cereal::util::internal::StringViewHash,
        ::std::equal_to<void>> const& userProps
);

MCNAPI void saveEnumValue(
    ::entt::meta_any const&      enumValue,
    ::entt::meta_type const&     type,
    ::cereal::SchemaWriter&      writer,
    ::cereal::SerializerContext& context
);

MCNAPI ::std::string toString(double d);
// NOLINTEND

} // namespace cereal::internal
