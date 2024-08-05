#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

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
    MCAPI void
    doLoadWithSchema(entt::meta_type const&, struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&, entt::type_info const&)
        const;

    MCAPI void
    doSaveWithSchema(struct cereal::SchemaWriter&, entt::meta_any const&, class cereal::SerializerContext&, entt::type_info const&)
        const;

    MCAPI void
    unpackWithInfo(entt::type_info const&, std::vector<std::reference_wrapper<struct cereal::internal::BasicSchema::SetterDescriptor const>>&, entt::dense_map<std::string_view, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>&)
        const;

    // NOLINTEND
};

}; // namespace cereal::internal
