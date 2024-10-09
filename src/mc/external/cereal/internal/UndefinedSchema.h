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

class UndefinedSchema : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    UndefinedSchema& operator=(UndefinedSchema const&);
    UndefinedSchema(UndefinedSchema const&);
    UndefinedSchema();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doLoad(
        struct cereal::SchemaReader&,
        entt::meta_any&,
        entt::meta_any const&,
        class cereal::SerializerContext& context
    ) const;

    // vIndex: 3
    virtual struct cereal::SchemaDescription makeDescription() const;

    // vIndex: 4
    virtual ~UndefinedSchema() = default;

    MCAPI static class cereal::internal::UndefinedSchema const& instance();

    // NOLINTEND
};

}; // namespace cereal::internal
