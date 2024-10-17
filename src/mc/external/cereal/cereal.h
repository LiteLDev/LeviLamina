#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/ResultCode.h"
#include "mc/external/cereal/SchemaReader.h"
#include "mc/external/cereal/SchemaReaderState.h"
#include "mc/external/cereal/SerializerContext.h"
#include "mc/external/cereal/internal/BasicSchema.h"
#include "mc/external/cereal/internal/ReflectedType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicLoader; }
namespace cereal { class BasicSaver; }
namespace cereal { class Constraint; }
namespace cereal { class PropertyReader; }
namespace cereal { class SerializerContext; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { class StringConstraint; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::ext { struct JSONSchema; }
namespace cereal::ext::internal { struct JSONSchemaBody; }
namespace cereal::ext::internal { struct JSONSchemaDef; }
namespace cereal::ext::internal { struct JSONSchemaInfo; }
namespace cereal::ext::internal { struct JSONSchemaValidation; }
namespace cereal::internal { class BasicSchema; }
namespace cereal::internal { class SchemaFactory; }
namespace cereal::internal { class UndefinedSchema; }
namespace cereal::internal { struct ConstraintDescription; }
namespace cereal::internal { struct ExtendedSchemaInfo; }
namespace cereal::internal { struct ReflectionContext; }
namespace cereal::internal { struct Schema; }
namespace cereal::internal { struct SchemaInfo; }
// clang-format on

namespace cereal {
// NOLINTBEGIN
MCAPI std::string const* documentation(entt::meta_type const& type);

MCAPI std::string const* documentation(entt::meta_type const& type, uint member);

MCAPI uint enttHash(std::string_view str);

MCAPI entt::meta_any fillOptional(entt::meta_any& opt);

MCAPI class cereal::SerializerEnumMapping const*
getEnumMapping(struct cereal::ReflectionCtx const& ctx, entt::meta_type const& type);

MCAPI class cereal::SerializerEnumMapping const*
getEnumMapping(struct cereal::ReflectionCtx const& ctx, entt::meta_type const& type, uint member);

MCAPI std::string_view getName(struct cereal::ReflectionCtx const& ctx, entt::meta_type const& type, uint member);

MCAPI struct cereal::SchemaDescription getSchemaDescription(struct cereal::ReflectionCtx const& ctx, uint typeId);

MCAPI std::vector<struct cereal::SchemaDescription> getSchemaDescriptions(struct cereal::ReflectionCtx const& ctx);

MCAPI std::string_view getSchemaName(struct cereal::ReflectionCtx const& ctx, entt::meta_type const& type);

MCAPI bool isOptional(entt::meta_type const& type);

MCAPI entt::meta_type resolve(struct cereal::ReflectionCtx const& ctx, entt::type_info const& info);

MCAPI entt::meta_type resolve(struct cereal::ReflectionCtx const& ctx, uint id);

MCAPI entt::meta_any tryGetOptionalValue(entt::meta_handle opt);

MCAPI entt::meta_func typeLevelGetter(entt::meta_type const& type);

MCAPI std::vector<entt::meta_func> typeLevelSetters(entt::meta_type const& type);
// NOLINTEND

}; // namespace cereal
