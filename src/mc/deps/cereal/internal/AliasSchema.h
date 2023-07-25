#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { class BasicSchema; }
namespace cereal::internal { struct Result; }
// clang-format on

namespace cereal::internal {

class AliasSchema : public ::cereal::internal::BasicSchema {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_INTERNAL_ALIASSCHEMA
public:
    AliasSchema& operator=(AliasSchema const&) = delete;
    AliasSchema(AliasSchema const&)            = delete;
    AliasSchema()                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol
     * ?doValidate\@AliasSchema\@internal\@cereal\@\@MEBA?AUResult\@23\@AEAUSchemaReader\@3\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@3\@AEAVSerializerContext\@3\@\@Z
     */
    virtual struct cereal::internal::Result
    doValidate(struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_INTERNAL_ALIASSCHEMA
    /**
     * @symbol
     * ?unpack\@AliasSchema\@internal\@cereal\@\@UEBAXAEAV?$vector\@V?$reference_wrapper\@$$CBVBasicSchema\@internal\@cereal\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@$$CBVBasicSchema\@internal\@cereal\@\@\@std\@\@\@2\@\@std\@\@AEAV?$dense_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$reference_wrapper\@$$CBUMemberDescriptor\@BasicSchema\@internal\@cereal\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$reference_wrapper\@$$CBUMemberDescriptor\@BasicSchema\@internal\@cereal\@\@\@2\@\@std\@\@\@2\@\@entt\@\@\@Z
     */
    MCVAPI void
    unpack(std::vector<class std::reference_wrapper<class cereal::internal::BasicSchema const>>&, class entt::dense_map<std::string, class std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>>>&) const;
#endif
    /**
     * @symbol
     * ??0AliasSchema\@internal\@cereal\@\@QEAA\@AEBUReflectionCtx\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI AliasSchema(struct cereal::ReflectionCtx const&, std::string const&, std::string const&);
};

}; // namespace cereal::internal
