#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/SerializerContext.h"
#include "mc/external/cereal/internal/BasicSchema.h"
#include "mc/external/cereal/internal/ReflectedType.h"

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
MCAPI void derefAndLoad(
    class cereal::internal::BasicSchema const& schema,
    struct cereal::SchemaReader&               reader,
    entt::meta_any&                            any,
    entt::meta_any const&                      udata,
    class cereal::SerializerContext&           context
);

MCAPI void derefAndSave(
    class cereal::internal::BasicSchema const& schema,
    struct cereal::SchemaWriter&               writer,
    entt::meta_any const&                      any,
    class cereal::SerializerContext&           context
);

MCAPI class cereal::SerializerEnumMapping const* getMapper(
    struct cereal::ReflectionCtx const&        reflectionCtx,
    entt::meta_type const&                     type,
    class cereal::SerializerEnumMapping const* value
);

MCAPI void getMapperAndLoad(
    struct cereal::ReflectionCtx const&        reflectionCtx,
    entt::meta_type const&                     type,
    class cereal::SerializerEnumMapping const* maybeMapper,
    struct cereal::SchemaReader&               reader,
    entt::meta_any&                            any,
    class cereal::SerializerContext&           context,
    bool (*func)(int64, entt::meta_any&)
);

MCAPI void getMapperAndSave(
    struct cereal::ReflectionCtx const&        reflectionCtx,
    entt::meta_any const&                      enumValue,
    entt::meta_type const&                     type,
    class cereal::SerializerEnumMapping const* maybeMapper,
    struct cereal::SchemaWriter&               writer,
    class cereal::SerializerContext&           context
);

MCAPI ::cereal::internal::ReflectedType getReflectedType(entt::meta_type const& type);

MCAPI std::string_view getSchemaName(struct cereal::ReflectionCtx const& ctx, entt::type_info const& info);

MCAPI void iterateAssociativeContainer(
    struct cereal::ReflectionCtx const&        reflectionCtx,
    entt::meta_type const&                     keyType,
    entt::meta_type const&                     mappedType,
    class cereal::internal::BasicSchema const& keySchema,
    class cereal::internal::BasicSchema const& mappedSchema,
    struct cereal::SchemaReader&               reader,
    entt::meta_any&                            any,
    entt::meta_any const&                      udata,
    class cereal::SerializerContext&           context
);

MCAPI void iterateSequenceContainer(
    class cereal::internal::BasicSchema const& schema,
    entt::meta_type const&                     type,
    struct cereal::SchemaReader&               reader,
    entt::meta_any&                            any,
    entt::meta_any const&                      udata,
    class cereal::SerializerContext&           context
);

MCAPI class cereal::internal::BasicSchema const* lookup(struct cereal::ReflectionCtx const& ctx, uint id);

MCAPI void saveAssociativeContainer(
    struct cereal::ReflectionCtx const&        reflectionCtx,
    entt::meta_any const&                      any,
    class cereal::internal::BasicSchema const& keySchema,
    class cereal::internal::BasicSchema const& mappedSchema,
    struct cereal::SchemaWriter&               writer,
    class cereal::SerializerContext&           context
);

MCAPI void saveSequenceContainer(
    class cereal::internal::BasicSchema const& schema,
    struct cereal::SchemaWriter&               value,
    entt::meta_any const&                      any,
    class cereal::SerializerContext&           context
);

MCAPI bool shouldHavename(::cereal::internal::ReflectedType t);

MCAPI std::string toString(double d);
// NOLINTEND

}; // namespace cereal::internal
