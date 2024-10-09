#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

class BasicGenericTypeSchema : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    BasicGenericTypeSchema& operator=(BasicGenericTypeSchema const&);
    BasicGenericTypeSchema(BasicGenericTypeSchema const&);
    BasicGenericTypeSchema();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual ~BasicGenericTypeSchema() = default;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void doLoadWithSchema(
        entt::meta_type const&           type,
        struct cereal::SchemaReader&     value,
        entt::meta_any&                  any,
        entt::meta_any const&            udata,
        class cereal::SerializerContext& context,
        entt::type_info const&           info
    ) const;

    MCAPI void doSaveWithSchema(
        struct cereal::SchemaWriter&     value,
        entt::meta_any const&            any,
        class cereal::SerializerContext& context,
        entt::type_info const&           info
    ) const;

    MCAPI void unpackWithInfo(
        entt::type_info const&                                                                             info,
        std::vector<std::reference_wrapper<struct cereal::internal::BasicSchema::SetterDescriptor const>>& setters,
        entt::dense_map<
            std::string_view,
            std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>& members
    ) const;

    // NOLINTEND
};

}; // namespace cereal::internal
