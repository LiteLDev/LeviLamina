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

class UndefinedSchema : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    UndefinedSchema& operator=(UndefinedSchema const&);
    UndefinedSchema(UndefinedSchema const&);
    UndefinedSchema();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?doLoad@UndefinedSchema@internal@cereal@@EEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBV56@AEAVSerializerContext@3@@Z
    virtual void
    doLoad(struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&)
        const;

    // vIndex: 3, symbol: ?makeDescription@UndefinedSchema@internal@cereal@@EEBA?AUSchemaDescription@3@XZ
    virtual struct cereal::SchemaDescription makeDescription() const;

    // vIndex: 4, symbol: __gen_??1UndefinedSchema@internal@cereal@@UEAA@XZ
    virtual ~UndefinedSchema() = default;

    // symbol: ?instance@UndefinedSchema@internal@cereal@@SAAEBV123@XZ
    MCAPI static class cereal::internal::UndefinedSchema const& instance();

    // NOLINTEND
};

}; // namespace cereal::internal
