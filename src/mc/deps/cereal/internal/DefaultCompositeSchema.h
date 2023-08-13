#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicCompositeSchema.h"
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

class DefaultCompositeSchema : public ::cereal::internal::BasicCompositeSchema {

public:
    // prevent constructor by default
    DefaultCompositeSchema& operator=(DefaultCompositeSchema const&) = delete;
    DefaultCompositeSchema(DefaultCompositeSchema const&)            = delete;
    DefaultCompositeSchema()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol
     * ?doValidate\@DefaultCompositeSchema\@internal\@cereal\@\@MEBA?AUResult\@23\@AEAUSchemaReader\@3\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@3\@AEAVSerializerContext\@3\@\@Z
     */
    virtual struct cereal::internal::Result
    doValidate(struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;
    /**
     * @vftbl 1
     * @symbol
     * ?doLoad\@DefaultCompositeSchema\@internal\@cereal\@\@MEBA?AUResult\@23\@AEAUSchemaReader\@3\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@3\@AEBV67\@AEAVSerializerContext\@3\@\@Z
     */
    virtual struct cereal::internal::Result
    doLoad(struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class entt::meta_any const&, class cereal::SerializerContext&)
        const;
    /**
     * @vftbl 2
     * @symbol
     * ?doSave\@DefaultCompositeSchema\@internal\@cereal\@\@MEBA?AUResult\@23\@AEAUSchemaWriter\@3\@AEBVmeta_any\@entt\@\@AEBUSerializerTraits\@3\@AEAVSerializerContext\@3\@\@Z
     */
    virtual struct cereal::internal::Result
    doSave(struct cereal::SchemaWriter&, class entt::meta_any const&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol
     * ?unpack\@DefaultCompositeSchema\@internal\@cereal\@\@UEBAXAEAV?$vector\@V?$reference_wrapper\@$$CBVBasicSchema\@internal\@cereal\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@$$CBVBasicSchema\@internal\@cereal\@\@\@std\@\@\@2\@\@std\@\@AEAV?$dense_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$reference_wrapper\@$$CBUMemberDescriptor\@BasicSchema\@internal\@cereal\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$reference_wrapper\@$$CBUMemberDescriptor\@BasicSchema\@internal\@cereal\@\@\@2\@\@std\@\@\@2\@\@entt\@\@\@Z
     */
    virtual void unpack(std::vector<std::reference_wrapper<class cereal::internal::BasicSchema const>>&, class entt::dense_map<std::string, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>>>&)
        const;
    /**
     * @vftbl 6
     * @symbol
     * ?addParent\@DefaultCompositeSchema\@internal\@cereal\@\@UEAAXV?$unique_ptr\@VBasicSchema\@internal\@cereal\@\@U?$default_delete\@VBasicSchema\@internal\@cereal\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addParent(std::unique_ptr<class cereal::internal::BasicSchema>);
    /**
     * @vftbl 7
     * @symbol
     * ?addSetter\@DefaultCompositeSchema\@internal\@cereal\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$unique_ptr\@VBasicSchema\@internal\@cereal\@\@U?$default_delete\@VBasicSchema\@internal\@cereal\@\@\@std\@\@\@5\@\@Z
     */
    virtual void
    addSetter(std::string const&, std::string const&, std::unique_ptr<class cereal::internal::BasicSchema>);
    /**
     * @vftbl 8
     * @symbol
     * ?addMember\@DefaultCompositeSchema\@internal\@cereal\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@USerializerTraits\@3\@V?$unique_ptr\@VBasicSchema\@internal\@cereal\@\@U?$default_delete\@VBasicSchema\@internal\@cereal\@\@\@std\@\@\@5\@\@Z
     */
    virtual void
    addMember(std::string const&, struct cereal::SerializerTraits, std::unique_ptr<class cereal::internal::BasicSchema>);
    /**
     * @vftbl 9
     * @symbol
     * ?addRequiredMember\@DefaultCompositeSchema\@internal\@cereal\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@USerializerTraits\@3\@V?$unique_ptr\@VBasicSchema\@internal\@cereal\@\@U?$default_delete\@VBasicSchema\@internal\@cereal\@\@\@std\@\@\@5\@\@Z
     */
    virtual void
    addRequiredMember(std::string const&, struct cereal::SerializerTraits, std::unique_ptr<class cereal::internal::BasicSchema>);
    /**
     * @vftbl 10
     * @symbol
     * ?addDeprecatedMember\@DefaultCompositeSchema\@internal\@cereal\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual void addDeprecatedMember(std::string const&, std::string const&);
    /**
     * @vftbl 11
     * @symbol
     * ?customError\@DefaultCompositeSchema\@internal\@cereal\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual void customError(std::string const&, std::string const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_INTERNAL_DEFAULTCOMPOSITESCHEMA
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DefaultCompositeSchema();
#endif
    /**
     * @symbol ??0DefaultCompositeSchema\@internal\@cereal\@\@QEAA\@USerializerTraits\@2\@AEBUReflectionCtx\@2\@\@Z
     */
    MCAPI DefaultCompositeSchema(struct cereal::SerializerTraits, struct cereal::ReflectionCtx const&);
    // NOLINTEND
};

}; // namespace cereal::internal
