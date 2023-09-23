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
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { class BasicCompositeSchema; }
namespace cereal::internal { class BasicSchema; }
namespace cereal::internal { class UndefinedSchema; }
namespace cereal::internal { struct ReflectionContext; }
// clang-format on

namespace cereal::internal {
// NOLINTBEGIN
// symbol: ?alwaysTrue@internal@cereal@@YA_N_JAEAVmeta_any@entt@@@Z
MCAPI bool alwaysTrue(int64, entt::meta_any&);

// symbol:
// ?derefAndLoad@internal@cereal@@YAXAEBVBasicSchema@12@AEAUSchemaReader@2@AEAVmeta_any@entt@@AEBUSerializerTraits@2@AEBV56@AEAVSerializerContext@2@@Z
MCAPI void
derefAndLoad(class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&);

// symbol:
// ?derefAndSave@internal@cereal@@YAXAEBVBasicSchema@12@AEAUSchemaWriter@2@AEBVmeta_any@entt@@AEBUSerializerTraits@2@AEAVSerializerContext@2@@Z
MCAPI void
derefAndSave(class cereal::internal::BasicSchema const&, struct cereal::SchemaWriter&, entt::meta_any const&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&);

// symbol:
// ?derefAndValidate@internal@cereal@@YAXAEBVBasicSchema@12@AEAUSchemaReader@2@AEAVmeta_any@entt@@AEBUSerializerTraits@2@AEAVSerializerContext@2@@Z
MCAPI void
derefAndValidate(class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&);

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

// symbol:
// ?getNameAndVersion@internal@cereal@@YA?AU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@AEBUReflectionCtx@2@AEBUtype_info@entt@@@Z
MCAPI std::pair<std::string, std::string>
      getNameAndVersion(struct cereal::ReflectionCtx const&, entt::type_info const&);

// symbol:
// ?iterateAssociativeContainer@internal@cereal@@YAXAEBUReflectionCtx@2@P6AX0AEBVmeta_type@entt@@AEBVBasicSchema@12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVmeta_any@5@AEAUSchemaReader@2@AEBUSerializerTraits@2@AEBV95@AEAVSerializerContext@2@@Z1112254678@Z
MCAPI void iterateAssociativeContainer(struct cereal::ReflectionCtx const&, void (*)(struct cereal::ReflectionCtx const&, entt::meta_type const&, class cereal::internal::BasicSchema const&, std::string const&, entt::meta_any&, struct cereal::SchemaReader&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&), entt::meta_type const&, entt::meta_type const&, entt::meta_type const&, class cereal::internal::BasicSchema const&, class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&);

// symbol:
// ?iterateSequenceContainer@internal@cereal@@YAXAEBVBasicSchema@12@P6AX0AEAUSchemaReader@2@AEAVmeta_any@entt@@AEBUSerializerTraits@2@AEBV56@AEAVSerializerContext@2@@ZAEBVmeta_type@6@12345@Z
MCAPI void
iterateSequenceContainer(class cereal::internal::BasicSchema const&, void (*)(class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&), entt::meta_type const&, struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&);

// symbol:
// ?loadMapElement@internal@cereal@@YAXAEBUReflectionCtx@2@AEBVmeta_type@entt@@AEBVBasicSchema@12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVmeta_any@5@AEAUSchemaReader@2@AEBUSerializerTraits@2@AEBV95@AEAVSerializerContext@2@@Z
MCAPI void
loadMapElement(struct cereal::ReflectionCtx const&, entt::meta_type const&, class cereal::internal::BasicSchema const&, std::string const&, entt::meta_any&, struct cereal::SchemaReader&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&);

// symbol:
// ?loadSequenceElement@internal@cereal@@YAXAEBVBasicSchema@12@AEAUSchemaReader@2@AEAVmeta_any@entt@@AEBUSerializerTraits@2@AEBV56@AEAVSerializerContext@2@@Z
MCAPI void
loadSequenceElement(class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&);

// symbol:
// ?saveAssociativeContainer@internal@cereal@@YAXAEBUReflectionCtx@2@AEBVmeta_type@entt@@AEBVmeta_any@5@AEBVBasicSchema@12@3AEAUSchemaWriter@2@AEBUSerializerTraits@2@AEAVSerializerContext@2@@Z
MCAPI void
saveAssociativeContainer(struct cereal::ReflectionCtx const&, entt::meta_type const&, entt::meta_any const&, class cereal::internal::BasicSchema const&, class cereal::internal::BasicSchema const&, struct cereal::SchemaWriter&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&);

// symbol:
// ?saveSequenceContainer@internal@cereal@@YAXAEBVBasicSchema@12@AEAUSchemaWriter@2@AEBVmeta_any@entt@@AEBUSerializerTraits@2@AEAVSerializerContext@2@@Z
MCAPI void
saveSequenceContainer(class cereal::internal::BasicSchema const&, struct cereal::SchemaWriter&, entt::meta_any const&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&);

// symbol:
// ?validateMapElement@internal@cereal@@YAXAEBUReflectionCtx@2@AEBVmeta_type@entt@@AEBVBasicSchema@12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVmeta_any@5@AEAUSchemaReader@2@AEBUSerializerTraits@2@AEBV95@AEAVSerializerContext@2@@Z
MCAPI void
validateMapElement(struct cereal::ReflectionCtx const&, entt::meta_type const&, class cereal::internal::BasicSchema const&, std::string const&, entt::meta_any&, struct cereal::SchemaReader&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&);

// symbol:
// ?validateSequenceElement@internal@cereal@@YAXAEBVBasicSchema@12@AEAUSchemaReader@2@AEAVmeta_any@entt@@AEBUSerializerTraits@2@AEBV56@AEAVSerializerContext@2@@Z
MCAPI void
validateSequenceElement(class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&);

// symbol:
// ?validateTagsSequence@internal@cereal@@YAXAEBUReflectionCtx@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1AEBVmeta_type@entt@@AEAUSchemaReader@2@AEBUSerializerTraits@2@AEAVSerializerContext@2@@Z
MCAPI void
validateTagsSequence(struct cereal::ReflectionCtx const&, std::string const&, std::string const&, entt::meta_type const&, struct cereal::SchemaReader&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&);
// NOLINTEND

}; // namespace cereal::internal
