#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"
#include "mc/deps/cereal/internal/BasicSchema.h"
#include "mc/deps/cereal/internal/ReflectedType.h"

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
namespace cereal::internal { class SchemaFactory; }
namespace cereal::internal { class UndefinedSchema; }
namespace cereal::internal { struct ConstraintDescription; }
namespace cereal::internal { struct ExtendedSchemaInfo; }
namespace cereal::internal { struct ReflectionContext; }
namespace cereal::internal { struct Schema; }
namespace cereal::internal { struct SchemaInfo; }
// clang-format on

namespace cereal::internal {
// NOLINTBEGIN
MCAPI void
derefAndLoad(class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&);

MCAPI void
derefAndSave(class cereal::internal::BasicSchema const&, struct cereal::SchemaWriter&, entt::meta_any const&, class cereal::SerializerContext&);

MCAPI class cereal::SerializerEnumMapping const*
getMapper(struct cereal::ReflectionCtx const&, entt::meta_type const&, class cereal::SerializerEnumMapping const*);

MCAPI void getMapperAndLoad(
    struct cereal::ReflectionCtx const&,
    entt::meta_type const&,
    class cereal::SerializerEnumMapping const*,
    struct cereal::SchemaReader&,
    entt::meta_any&,
    class cereal::SerializerContext&,
    bool (*)(int64, entt::meta_any&)
);

MCAPI void
getMapperAndSave(struct cereal::ReflectionCtx const&, entt::meta_any const&, entt::meta_type const&, class cereal::SerializerEnumMapping const*, struct cereal::SchemaWriter&, class cereal::SerializerContext&);

MCAPI ::cereal::internal::ReflectedType getReflectedType(entt::meta_type const&);

MCAPI std::string_view getSchemaName(struct cereal::ReflectionCtx const&, entt::type_info const&);

MCAPI void
iterateAssociativeContainer(struct cereal::ReflectionCtx const&, entt::meta_type const&, entt::meta_type const&, class cereal::internal::BasicSchema const&, class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&);

MCAPI void
iterateSequenceContainer(class cereal::internal::BasicSchema const&, entt::meta_type const&, struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&);

MCAPI class cereal::internal::BasicSchema const* lookup(struct cereal::ReflectionCtx const&, uint);

MCAPI void
saveAssociativeContainer(struct cereal::ReflectionCtx const&, entt::meta_any const&, class cereal::internal::BasicSchema const&, class cereal::internal::BasicSchema const&, struct cereal::SchemaWriter&, class cereal::SerializerContext&);

MCAPI void
saveSequenceContainer(class cereal::internal::BasicSchema const&, struct cereal::SchemaWriter&, entt::meta_any const&, class cereal::SerializerContext&);

MCAPI bool shouldHavename(::cereal::internal::ReflectedType);

MCAPI std::string toString(double);
// NOLINTEND

}; // namespace cereal::internal
