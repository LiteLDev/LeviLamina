#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

class DeprecatedSchema : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    DeprecatedSchema& operator=(DeprecatedSchema const&);
    DeprecatedSchema(DeprecatedSchema const&);
    DeprecatedSchema();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?doValidate@DeprecatedSchema@internal@cereal@@EEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBUSerializerTraits@3@AEAVSerializerContext@3@@Z
    virtual void
    doValidate(struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;

    // vIndex: 1, symbol:
    // ?doLoad@DeprecatedSchema@internal@cereal@@EEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBUSerializerTraits@3@AEBV56@AEAVSerializerContext@3@@Z
    virtual void
    doLoad(struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&)
        const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // NOLINTEND
};

}; // namespace cereal::internal
