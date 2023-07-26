#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { class BasicSchema; }
namespace cereal::internal { struct Result; }
// clang-format on

namespace cereal::internal {
/**
 * @symbol ?alwaysTrue\@internal\@cereal\@\@YA_N_JAEAVmeta_any\@entt\@\@\@Z
 */
MCAPI bool alwaysTrue(__int64, class entt::meta_any&); // NOLINT
/**
 * @symbol
 * ?derefAndLoad\@internal\@cereal\@\@YA?AUResult\@12\@AEBVBasicSchema\@12\@AEAUSchemaReader\@2\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@2\@AEBV67\@AEAVSerializerContext\@2\@\@Z
 */
MCAPI struct cereal::internal::Result
derefAndLoad(class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class entt::meta_any const&, class cereal::SerializerContext&); // NOLINT
/**
 * @symbol
 * ?derefAndSave\@internal\@cereal\@\@YA?AUResult\@12\@AEBVBasicSchema\@12\@AEAUSchemaWriter\@2\@AEBVmeta_any\@entt\@\@AEBUSerializerTraits\@2\@AEAVSerializerContext\@2\@\@Z
 */
MCAPI struct cereal::internal::Result
derefAndSave(class cereal::internal::BasicSchema const&, struct cereal::SchemaWriter&, class entt::meta_any const&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&); // NOLINT
/**
 * @symbol
 * ?derefAndValidate\@internal\@cereal\@\@YA?AUResult\@12\@AEBVBasicSchema\@12\@AEAUSchemaReader\@2\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@2\@AEAVSerializerContext\@2\@\@Z
 */
MCAPI struct cereal::internal::Result
derefAndValidate(class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&); // NOLINT
/**
 * @symbol
 * ?getMapperAndLoad\@internal\@cereal\@\@YA?AUResult\@12\@AEBVmeta_type\@entt\@\@PEBVSerializerEnumMapping\@2\@AEAUSchemaReader\@2\@AEAVmeta_any\@5\@AEBUSerializerTraits\@2\@AEAVSerializerContext\@2\@P6A_N_J3\@Z\@Z
 */
MCAPI struct cereal::internal::Result getMapperAndLoad(
    class entt::meta_type const&,
    class cereal::SerializerEnumMapping const*,
    struct cereal::SchemaReader&,
    class entt::meta_any&,
    struct cereal::SerializerTraits const&,
    class cereal::SerializerContext&,
    bool (*)(__int64, class entt::meta_any&)
); // NOLINT
/**
 * @symbol
 * ?getMapperAndSave\@internal\@cereal\@\@YA?AUResult\@12\@AEBVmeta_any\@entt\@\@AEBVmeta_type\@5\@PEBVSerializerEnumMapping\@2\@AEAUSchemaWriter\@2\@AEBUSerializerTraits\@2\@AEAVSerializerContext\@2\@\@Z
 */
MCAPI struct cereal::internal::Result
getMapperAndSave(class entt::meta_any const&, class entt::meta_type const&, class cereal::SerializerEnumMapping const*, struct cereal::SchemaWriter&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&); // NOLINT
/**
 * @symbol
 * ?getNameAndVersion\@internal\@cereal\@\@YA?AU?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@AEBUReflectionCtx\@2\@AEBUtype_info\@entt\@\@\@Z
 */
MCAPI struct std::pair<std::string, std::string>
getNameAndVersion(struct cereal::ReflectionCtx const&, struct entt::type_info const&); // NOLINT
/**
 * @symbol
 * ?iterateAssociativeContainer\@internal\@cereal\@\@YA?AUResult\@12\@AEBUReflectionCtx\@2\@P6A?AU312\@0AEBVmeta_type\@entt\@\@AEBVBasicSchema\@12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVmeta_any\@6\@AEAUSchemaReader\@2\@AEBUSerializerTraits\@2\@AEBVmeta_any\@6\@AEAVSerializerContext\@2\@\@Z1112254678\@Z
 */
MCAPI struct cereal::internal::Result
iterateAssociativeContainer(struct cereal::ReflectionCtx const&, struct cereal::internal::Result (*)(struct cereal::ReflectionCtx const&, class entt::meta_type const&, class cereal::internal::BasicSchema const&, std::string const&, class entt::meta_any&, struct cereal::SchemaReader&, struct cereal::SerializerTraits const&, class entt::meta_any const&, class cereal::SerializerContext&), class entt::meta_type const&, class entt::meta_type const&, class entt::meta_type const&, class cereal::internal::BasicSchema const&, class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class entt::meta_any const&, class cereal::SerializerContext&); // NOLINT
/**
 * @symbol
 * ?iterateSequenceContainer\@internal\@cereal\@\@YA?AUResult\@12\@AEBVBasicSchema\@12\@P6A?AU312\@0AEAUSchemaReader\@2\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@2\@AEBV67\@AEAVSerializerContext\@2\@\@ZAEBVmeta_type\@7\@12345\@Z
 */
MCAPI struct
    cereal::
        internal::
            Result
            iterateSequenceContainer(class cereal::internal::BasicSchema const&, struct cereal::internal::Result (*)(class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class entt::meta_any const&, class cereal::SerializerContext&), class entt::meta_type const&, struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class entt::meta_any const&, class cereal::SerializerContext&); // NOLINT
/**
 * @symbol
 * ?loadMapElement\@internal\@cereal\@\@YA?AUResult\@12\@AEBUReflectionCtx\@2\@AEBVmeta_type\@entt\@\@AEBVBasicSchema\@12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVmeta_any\@6\@AEAUSchemaReader\@2\@AEBUSerializerTraits\@2\@AEBVmeta_any\@6\@AEAVSerializerContext\@2\@\@Z
 */
MCAPI struct cereal::internal::Result
loadMapElement(struct cereal::ReflectionCtx const&, class entt::meta_type const&, class cereal::internal::BasicSchema const&, std::string const&, class entt::meta_any&, struct cereal::SchemaReader&, struct cereal::SerializerTraits const&, class entt::meta_any const&, class cereal::SerializerContext&); // NOLINT
/**
 * @symbol
 * ?loadSequenceElement\@internal\@cereal\@\@YA?AUResult\@12\@AEBVBasicSchema\@12\@AEAUSchemaReader\@2\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@2\@AEBV67\@AEAVSerializerContext\@2\@\@Z
 */
MCAPI struct cereal::internal::Result
loadSequenceElement(class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class entt::meta_any const&, class cereal::SerializerContext&); // NOLINT
/**
 * @symbol
 * ?saveAssociativeContainer\@internal\@cereal\@\@YA_NAEBUReflectionCtx\@2\@AEBVmeta_type\@entt\@\@AEBVmeta_any\@5\@AEBVBasicSchema\@12\@3AEAUSchemaWriter\@2\@AEBUSerializerTraits\@2\@AEAVSerializerContext\@2\@\@Z
 */
MCAPI bool
saveAssociativeContainer(struct cereal::ReflectionCtx const&, class entt::meta_type const&, class entt::meta_any const&, class cereal::internal::BasicSchema const&, class cereal::internal::BasicSchema const&, struct cereal::SchemaWriter&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&); // NOLINT
/**
 * @symbol
 * ?saveSequenceContainer\@internal\@cereal\@\@YA?AUResult\@12\@AEBVBasicSchema\@12\@AEAUSchemaWriter\@2\@AEBVmeta_any\@entt\@\@AEBUSerializerTraits\@2\@AEAVSerializerContext\@2\@\@Z
 */
MCAPI struct cereal::internal::Result
saveSequenceContainer(class cereal::internal::BasicSchema const&, struct cereal::SchemaWriter&, class entt::meta_any const&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&); // NOLINT
/**
 * @symbol
 * ?validateMapElement\@internal\@cereal\@\@YA?AUResult\@12\@AEBUReflectionCtx\@2\@AEBVmeta_type\@entt\@\@AEBVBasicSchema\@12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVmeta_any\@6\@AEAUSchemaReader\@2\@AEBUSerializerTraits\@2\@AEBVmeta_any\@6\@AEAVSerializerContext\@2\@\@Z
 */
MCAPI struct cereal::internal::Result
validateMapElement(struct cereal::ReflectionCtx const&, class entt::meta_type const&, class cereal::internal::BasicSchema const&, std::string const&, class entt::meta_any&, struct cereal::SchemaReader&, struct cereal::SerializerTraits const&, class entt::meta_any const&, class cereal::SerializerContext&); // NOLINT
/**
 * @symbol
 * ?validateSequenceElement\@internal\@cereal\@\@YA?AUResult\@12\@AEBVBasicSchema\@12\@AEAUSchemaReader\@2\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@2\@AEBV67\@AEAVSerializerContext\@2\@\@Z
 */
MCAPI struct cereal::internal::Result
validateSequenceElement(class cereal::internal::BasicSchema const&, struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class entt::meta_any const&, class cereal::SerializerContext&); // NOLINT
/**
 * @symbol
 * ?validateTagsSequence\@internal\@cereal\@\@YA?AUResult\@12\@AEBUReflectionCtx\@2\@AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@AEBVmeta_type\@entt\@\@AEAUSchemaReader\@2\@AEBUSerializerTraits\@2\@AEAVSerializerContext\@2\@\@Z
 */
MCAPI struct cereal::internal::Result
validateTagsSequence(struct cereal::ReflectionCtx const&, std::vector<struct std::pair<std::string, std::string>> const&, class entt::meta_type const&, struct cereal::SchemaReader&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&); // NOLINT

}; // namespace cereal::internal
