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
    // vIndex: 0
    virtual void
    doLoad(struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&)
        const;

    // vIndex: 1
    virtual void doSave(struct cereal::SchemaWriter&, entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 2
    virtual bool doVerifyInitialization(entt::meta_any const&) const;

    // vIndex: 3
    virtual struct cereal::SchemaDescription makeDescription() const;

    // vIndex: 4
    virtual ~SetterGetterSchema() = default;

    // vIndex: 6
    virtual void enumMapping(class cereal::SerializerEnumMapping);

    // vIndex: 7
    virtual class cereal::SerializerEnumMapping const* enumMapping() const;

    MCAPI
    SetterGetterSchema(struct cereal::ReflectionCtx const&, std::unique_ptr<class cereal::internal::BasicSchema>, std::unique_ptr<class cereal::internal::BasicSchema>);

    // NOLINTEND
};

}; // namespace cereal::internal
