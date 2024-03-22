#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

class SetterGetterSchema : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    SetterGetterSchema& operator=(SetterGetterSchema const&);
    SetterGetterSchema(SetterGetterSchema const&);
    SetterGetterSchema();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?doLoad@SetterGetterSchema@internal@cereal@@EEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBV56@AEAVSerializerContext@3@@Z
    virtual void
    doLoad(struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&)
        const;

    // vIndex: 1, symbol:
    // ?doSave@SetterGetterSchema@internal@cereal@@EEBAXAEAUSchemaWriter@3@AEBVmeta_any@entt@@AEAVSerializerContext@3@@Z
    virtual void doSave(struct cereal::SchemaWriter&, entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 2, symbol: ?doVerifyInitialization@SetterGetterSchema@internal@cereal@@EEBA_NAEBVmeta_any@entt@@@Z
    virtual bool doVerifyInitialization(entt::meta_any const&) const;

    // vIndex: 3, symbol: ?makeDescription@SetterGetterSchema@internal@cereal@@EEBA?AUSchemaDescription@3@XZ
    virtual struct cereal::SchemaDescription makeDescription() const;

    // vIndex: 4, symbol: __gen_??1SetterGetterSchema@internal@cereal@@UEAA@XZ
    virtual ~SetterGetterSchema() = default;

    // vIndex: 6, symbol: ?enumMapping@SetterGetterSchema@internal@cereal@@UEAAXVSerializerEnumMapping@3@@Z
    virtual void enumMapping(class cereal::SerializerEnumMapping);

    // vIndex: 7, symbol: ?enumMapping@SetterGetterSchema@internal@cereal@@UEBAPEBVSerializerEnumMapping@3@XZ
    virtual class cereal::SerializerEnumMapping const* enumMapping() const;

    // symbol:
    // ??0SetterGetterSchema@internal@cereal@@QEAA@AEBUReflectionCtx@2@V?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@std@@1@Z
    MCAPI
    SetterGetterSchema(struct cereal::ReflectionCtx const&, std::unique_ptr<class cereal::internal::BasicSchema>, std::unique_ptr<class cereal::internal::BasicSchema>);

    // NOLINTEND
};

}; // namespace cereal::internal
