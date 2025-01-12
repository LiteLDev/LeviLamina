#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
// clang-format on

namespace cereal::internal {

class BasicGenericTypeSchema : public ::cereal::internal::BasicSchema {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BasicGenericTypeSchema() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void doLoadWithSchema(
        ::entt::meta_type const&     type,
        ::cereal::SchemaReader&      value,
        ::entt::meta_any&            any,
        ::entt::meta_any const&      udata,
        ::cereal::SerializerContext& context,
        ::entt::type_info const&     info
    ) const;

    MCAPI void doSaveWithSchema(
        ::cereal::SchemaWriter&      value,
        ::entt::meta_any const&      any,
        ::cereal::SerializerContext& context,
        ::entt::type_info const&     info
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cereal::internal
