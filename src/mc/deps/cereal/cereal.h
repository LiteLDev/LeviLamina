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
namespace cereal { class NumericConstraint; }
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
// symbol:
// ?documentation@cereal@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVmeta_type@entt@@@Z
MCAPI std::string const* documentation(entt::meta_type const&);

// symbol:
// ?documentation@cereal@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVmeta_type@entt@@I@Z
MCAPI std::string const* documentation(entt::meta_type const&, uint);

// symbol: ?enttHash@cereal@@YAIV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI uint enttHash(std::string_view);

// symbol: ?fillOptional@cereal@@YA?AVmeta_any@entt@@AEAV23@@Z
MCAPI entt::meta_any fillOptional(entt::meta_any&);

// symbol: ?getEnumMapping@cereal@@YAPEBVSerializerEnumMapping@1@AEBUReflectionCtx@1@AEBVmeta_type@entt@@@Z
MCAPI class cereal::SerializerEnumMapping const*
getEnumMapping(struct cereal::ReflectionCtx const&, entt::meta_type const&);

// symbol: ?getEnumMapping@cereal@@YAPEBVSerializerEnumMapping@1@AEBUReflectionCtx@1@AEBVmeta_type@entt@@I@Z
MCAPI class cereal::SerializerEnumMapping const*
getEnumMapping(struct cereal::ReflectionCtx const&, entt::meta_type const&, uint);

// symbol:
// ?getName@cereal@@YA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBUReflectionCtx@1@AEBVmeta_type@entt@@I@Z
MCAPI std::string_view getName(struct cereal::ReflectionCtx const&, entt::meta_type const&, uint);

// symbol: ?getSchemaDescription@cereal@@YA?AUSchemaDescription@1@AEBUReflectionCtx@1@I@Z
MCAPI struct cereal::SchemaDescription getSchemaDescription(struct cereal::ReflectionCtx const&, uint);

// symbol:
// ?getSchemaDescriptions@cereal@@YA?AV?$vector@USchemaDescription@cereal@@V?$allocator@USchemaDescription@cereal@@@std@@@std@@AEBUReflectionCtx@1@@Z
MCAPI std::vector<struct cereal::SchemaDescription> getSchemaDescriptions(struct cereal::ReflectionCtx const&);

// symbol:
// ?getSchemaName@cereal@@YA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBUReflectionCtx@1@AEBVmeta_type@entt@@@Z
MCAPI std::string_view getSchemaName(struct cereal::ReflectionCtx const&, entt::meta_type const&);

// symbol: ?isOptional@cereal@@YA_NAEBVmeta_type@entt@@@Z
MCAPI bool isOptional(entt::meta_type const&);

// symbol: ?resolve@cereal@@YA?AVmeta_type@entt@@AEBUReflectionCtx@1@AEBUtype_info@3@@Z
MCAPI entt::meta_type resolve(struct cereal::ReflectionCtx const&, entt::type_info const&);

// symbol: ?resolve@cereal@@YA?AVmeta_type@entt@@AEBUReflectionCtx@1@I@Z
MCAPI entt::meta_type resolve(struct cereal::ReflectionCtx const&, uint);

// symbol: ?tryGetOptionalValue@cereal@@YA?AVmeta_any@entt@@Umeta_handle@3@@Z
MCAPI entt::meta_any tryGetOptionalValue(entt::meta_handle);

// symbol: ?typeLevelGetter@cereal@@YA?AUmeta_func@entt@@AEBVmeta_type@3@@Z
MCAPI entt::meta_func typeLevelGetter(entt::meta_type const&);

// symbol:
// ?typeLevelSetters@cereal@@YA?AV?$vector@Umeta_func@entt@@V?$allocator@Umeta_func@entt@@@std@@@std@@AEBVmeta_type@entt@@@Z
MCAPI std::vector<entt::meta_func> typeLevelSetters(entt::meta_type const&);
// NOLINTEND

}; // namespace cereal
