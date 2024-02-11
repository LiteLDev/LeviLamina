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
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { class BasicCompositeSchema; }
namespace cereal::internal { class BasicSchema; }
namespace cereal::internal { class SchemaFactory; }
namespace cereal::internal { class UndefinedSchema; }
namespace cereal::internal { struct ConstraintDescription; }
namespace cereal::internal { struct ExtendedSchemaInfo; }
namespace cereal::internal { struct ReflectionContext; }
namespace cereal::internal { struct Schema; }
namespace cereal::internal { struct SchemaInfo; }
namespace cereal::internal { struct SchemaName; }
// clang-format on

namespace cereal::internal {
// NOLINTBEGIN
// symbol:
// ?derefAndLoad@internal@cereal@@YAXAEBVBasicSchema@12@AEAUSchemaReader@2@AEAVmeta_any@entt@@AEBUSerializerTraits@2@AEBV56@AEAVSerializerContext@2@@Z
MCAPI void
derefAndLoad(class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&);

// symbol:
// ?derefAndSave@internal@cereal@@YAXAEBVBasicSchema@12@AEAUSchemaWriter@2@AEBVmeta_any@entt@@AEBUSerializerTraits@2@AEAVSerializerContext@2@@Z
MCAPI void
derefAndSave(class cereal::internal::BasicSchema const&, struct cereal::SchemaWriter&, entt::meta_any const&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&);

// symbol: ?getMapper@internal@cereal@@YAPEBVSerializerEnumMapping@2@AEBVmeta_type@entt@@PEBV32@@Z
MCAPI class cereal::SerializerEnumMapping const*
getMapper(entt::meta_type const&, class cereal::SerializerEnumMapping const*);

// symbol:
// ?getMapperAndLoad@internal@cereal@@YAXAEBVmeta_type@entt@@PEBVSerializerEnumMapping@2@AEAUSchemaReader@2@AEAVmeta_any@4@AEBUSerializerTraits@2@AEAVSerializerContext@2@P6A_N_J3@Z@Z
MCAPI void getMapperAndLoad(
    entt::meta_type const&,
    class cereal::SerializerEnumMapping const*,
    struct cereal::SchemaReader&,
    entt::meta_any&,
    struct cereal::SerializerTraits const&,
    class cereal::SerializerContext&,
    bool (*)(int64, entt::meta_any&)
);

// symbol:
// ?getMapperAndSave@internal@cereal@@YAXAEBVmeta_any@entt@@AEBVmeta_type@4@PEBVSerializerEnumMapping@2@AEAUSchemaWriter@2@AEBUSerializerTraits@2@AEAVSerializerContext@2@@Z
MCAPI void
getMapperAndSave(entt::meta_any const&, entt::meta_type const&, class cereal::SerializerEnumMapping const*, struct cereal::SchemaWriter&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&);

// symbol: ?getReflectedSchema@internal@cereal@@YAPEBVBasicSchema@12@AEBUReflectionCtx@2@AEBVmeta_type@entt@@@Z
MCAPI class cereal::internal::BasicSchema const*
getReflectedSchema(struct cereal::ReflectionCtx const&, entt::meta_type const&);

// symbol: ?getReflectedType@internal@cereal@@YA?AW4ReflectedType@12@AEBVmeta_type@entt@@@Z
MCAPI ::cereal::internal::ReflectedType getReflectedType(entt::meta_type const&);

// symbol:
// ?getSchemaName@internal@cereal@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUReflectionCtx@2@AEBUtype_info@entt@@@Z
MCAPI std::string getSchemaName(struct cereal::ReflectionCtx const&, entt::type_info const&);

// symbol:
// ?iterateAssociativeContainer@internal@cereal@@YAXAEBUReflectionCtx@2@AEBVmeta_type@entt@@11AEBVBasicSchema@12@2AEAUSchemaReader@2@AEAVmeta_any@5@AEBUSerializerTraits@2@AEBV85@AEAVSerializerContext@2@@Z
MCAPI void
iterateAssociativeContainer(struct cereal::ReflectionCtx const&, entt::meta_type const&, entt::meta_type const&, entt::meta_type const&, class cereal::internal::BasicSchema const&, class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&);

// symbol:
// ?iterateSequenceContainer@internal@cereal@@YAXAEBVBasicSchema@12@AEBVmeta_type@entt@@AEAUSchemaReader@2@AEAVmeta_any@5@AEBUSerializerTraits@2@AEBV75@AEAVSerializerContext@2@@Z
MCAPI void
iterateSequenceContainer(class cereal::internal::BasicSchema const&, entt::meta_type const&, struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&);

// symbol:
// ?lookup@internal@cereal@@YAPEBVBasicCompositeSchema@12@AEBUReflectionCtx@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI class cereal::internal::BasicCompositeSchema const*
lookup(struct cereal::ReflectionCtx const&, std::string const&);

// symbol: ??8internal@cereal@@YA_NAEBUSchemaName@01@0@Z
MCAPI bool operator==(struct cereal::internal::SchemaName const&, struct cereal::internal::SchemaName const&);

// symbol:
// ?saveAssociativeContainer@internal@cereal@@YAXAEBUReflectionCtx@2@AEBVmeta_type@entt@@AEBVmeta_any@5@AEBVBasicSchema@12@3AEAUSchemaWriter@2@AEBUSerializerTraits@2@AEAVSerializerContext@2@@Z
MCAPI void
saveAssociativeContainer(struct cereal::ReflectionCtx const&, entt::meta_type const&, entt::meta_any const&, class cereal::internal::BasicSchema const&, class cereal::internal::BasicSchema const&, struct cereal::SchemaWriter&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&);

// symbol:
// ?saveSequenceContainer@internal@cereal@@YAXAEBVBasicSchema@12@AEAUSchemaWriter@2@AEBVmeta_any@entt@@AEBUSerializerTraits@2@AEAVSerializerContext@2@@Z
MCAPI void
saveSequenceContainer(class cereal::internal::BasicSchema const&, struct cereal::SchemaWriter&, entt::meta_any const&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&);

// symbol: ?shouldHavename@internal@cereal@@YA_NW4ReflectedType@12@@Z
MCAPI bool shouldHavename(::cereal::internal::ReflectedType);
// NOLINTEND

}; // namespace cereal::internal
