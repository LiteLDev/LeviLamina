#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ResultCode.h"
#include "mc/deps/cereal/SchemaReader.h"
#include "mc/deps/cereal/SchemaReaderState.h"
#include "mc/deps/cereal/SerializerContext.h"
#include "mc/deps/cereal/internal/BasicSchema.h"
#include "mc/deps/cereal/internal/ReflectedType.h"
#include "mc/deps/core/common/bedrock/Result.h"

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
MCAPI std::string const* documentation(entt::meta_type const&);

MCAPI std::string const* documentation(entt::meta_type const&, uint);

MCAPI uint enttHash(std::string_view);

MCAPI entt::meta_any fillOptional(entt::meta_any&);

MCAPI class cereal::SerializerEnumMapping const*
getEnumMapping(struct cereal::ReflectionCtx const&, entt::meta_type const&);

MCAPI class cereal::SerializerEnumMapping const*
getEnumMapping(struct cereal::ReflectionCtx const&, entt::meta_type const&, uint);

MCAPI std::string_view getName(struct cereal::ReflectionCtx const&, entt::meta_type const&, uint);

MCAPI struct cereal::SchemaDescription getSchemaDescription(struct cereal::ReflectionCtx const&, uint);

MCAPI std::vector<struct cereal::SchemaDescription> getSchemaDescriptions(struct cereal::ReflectionCtx const&);

MCAPI std::string_view getSchemaName(struct cereal::ReflectionCtx const&, entt::meta_type const&);

MCAPI bool isOptional(entt::meta_type const&);

MCAPI entt::meta_type resolve(struct cereal::ReflectionCtx const&, entt::type_info const&);

MCAPI entt::meta_type resolve(struct cereal::ReflectionCtx const&, uint);

MCAPI entt::meta_any tryGetOptionalValue(entt::meta_handle);

MCAPI entt::meta_func typeLevelGetter(entt::meta_type const&);

MCAPI std::vector<entt::meta_func> typeLevelSetters(entt::meta_type const&);
// NOLINTEND

}; // namespace cereal
