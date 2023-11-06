#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
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
    // ?doValidate@UndefinedSchema@internal@cereal@@EEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBUSerializerTraits@3@AEAVSerializerContext@3@@Z
    virtual void
    doValidate(struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;

    // vIndex: 1, symbol:
    // ?doLoad@UndefinedSchema@internal@cereal@@EEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBUSerializerTraits@3@AEBV56@AEAVSerializerContext@3@@Z
    virtual void
    doLoad(struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&)
        const;

    // vIndex: 4, symbol: ??1UndefinedSchema@internal@@@UEAA@XZ
    virtual ~UndefinedSchema();

    // vIndex: 6, symbol: ?description@UndefinedSchema@internal@cereal@@UEBA?AUSchemaDescription@3@XZ
    virtual struct cereal::SchemaDescription description() const;

    // symbol: ?instance@UndefinedSchema@internal@cereal@@SAAEBV123@XZ
    MCAPI static class cereal::internal::UndefinedSchema const& instance();

    // NOLINTEND
};

}; // namespace cereal::internal
