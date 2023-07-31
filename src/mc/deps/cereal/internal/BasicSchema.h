#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { struct Result; }
// clang-format on

namespace cereal::internal {

class BasicSchema {
public:
    // BasicSchema inner types declare
    // clang-format off
    struct MemberDescriptor;
    // clang-format on

    // BasicSchema inner types define
    struct MemberDescriptor {

    public:
        // prevent constructor by default
        MemberDescriptor& operator=(MemberDescriptor const&) = delete;
        MemberDescriptor(MemberDescriptor const&)            = delete;
        MemberDescriptor()                                   = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??4MemberDescriptor\@BasicSchema\@internal\@cereal\@\@QEAAAEAU0123\@$$QEAU0123\@\@Z
         */
        MCAPI struct cereal::internal::BasicSchema::MemberDescriptor&
        operator=(struct cereal::internal::BasicSchema::MemberDescriptor&&);
        /**
         * @symbol ??1MemberDescriptor\@BasicSchema\@internal\@cereal\@\@QEAA\@XZ
         */
        MCAPI ~MemberDescriptor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    BasicSchema& operator=(BasicSchema const&) = delete;
    BasicSchema(BasicSchema const&)            = delete;
    BasicSchema()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol
     * ?doValidate\@BasicSchema\@internal\@cereal\@\@MEBA?AUResult\@23\@AEAUSchemaReader\@3\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@3\@AEAVSerializerContext\@3\@\@Z
     */
    virtual struct cereal::internal::Result
    doValidate(struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;
    /**
     * @vftbl 1
     * @symbol
     * ?doLoad\@BasicSchema\@internal\@cereal\@\@MEBA?AUResult\@23\@AEAUSchemaReader\@3\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@3\@AEBV67\@AEAVSerializerContext\@3\@\@Z
     */
    virtual struct cereal::internal::Result
    doLoad(struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class entt::meta_any const&, class cereal::SerializerContext&)
        const;
    /**
     * @vftbl 2
     * @symbol
     * ?doSave\@BasicSchema\@internal\@cereal\@\@MEBA?AUResult\@23\@AEAUSchemaWriter\@3\@AEBVmeta_any\@entt\@\@AEBUSerializerTraits\@3\@AEAVSerializerContext\@3\@\@Z
     */
    virtual struct cereal::internal::Result
    doSave(struct cereal::SchemaWriter&, class entt::meta_any const&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;
    /**
     * @vftbl 3
     * @symbol ?doVerifyInitialization\@BasicSchema\@internal\@cereal\@\@MEBA_NAEBVmeta_any\@entt\@\@\@Z
     */
    virtual bool doVerifyInitialization(class entt::meta_any const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_INTERNAL_BASICSCHEMA
    /**
     * @symbol
     * ?unpack\@BasicSchema\@internal\@cereal\@\@UEBAXAEAV?$vector\@V?$reference_wrapper\@$$CBVBasicSchema\@internal\@cereal\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@$$CBVBasicSchema\@internal\@cereal\@\@\@std\@\@\@2\@\@std\@\@AEAV?$dense_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$reference_wrapper\@$$CBUMemberDescriptor\@BasicSchema\@internal\@cereal\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$reference_wrapper\@$$CBUMemberDescriptor\@BasicSchema\@internal\@cereal\@\@\@2\@\@std\@\@\@2\@\@entt\@\@\@Z
     */
    MCVAPI void
    unpack(std::vector<std::reference_wrapper<class cereal::internal::BasicSchema const>>&, class entt::dense_map<std::string, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>>>&)
        const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BasicSchema();
#endif
    /**
     * @symbol ??0BasicSchema\@internal\@cereal\@\@QEAA\@AEBUReflectionCtx\@2\@\@Z
     */
    MCAPI BasicSchema(struct cereal::ReflectionCtx const&);
    /**
     * @symbol
     * ??0BasicSchema\@internal\@cereal\@\@QEAA\@USerializerTraits\@2\@AEBUReflectionCtx\@2\@V?$unique_ptr\@VConstraint\@cereal\@\@U?$default_delete\@VConstraint\@cereal\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI
    BasicSchema(struct cereal::SerializerTraits, struct cereal::ReflectionCtx const&, std::unique_ptr<class cereal::Constraint>);
    /**
     * @symbol
     * ??0BasicSchema\@internal\@cereal\@\@QEAA\@AEBUReflectionCtx\@2\@V?$unique_ptr\@VConstraint\@cereal\@\@U?$default_delete\@VConstraint\@cereal\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI BasicSchema(struct cereal::ReflectionCtx const&, std::unique_ptr<class cereal::Constraint>);
    /**
     * @symbol ??0BasicSchema\@internal\@cereal\@\@QEAA\@USerializerTraits\@2\@AEBUReflectionCtx\@2\@\@Z
     */
    MCAPI BasicSchema(struct cereal::SerializerTraits, struct cereal::ReflectionCtx const&);
    /**
     * @symbol
     * ?customError\@BasicSchema\@internal\@cereal\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void customError(std::string const&);
    /**
     * @symbol ?isProperlyInitialized\@BasicSchema\@internal\@cereal\@\@QEBA_NAEBVmeta_any\@entt\@\@\@Z
     */
    MCAPI bool isProperlyInitialized(class entt::meta_any const&) const;
    /**
     * @symbol
     * ?load\@BasicSchema\@internal\@cereal\@\@QEBA?AUResult\@23\@AEAUSchemaReader\@3\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@3\@AEBV67\@AEAVSerializerContext\@3\@\@Z
     */
    MCAPI struct cereal::internal::Result
    load(struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class entt::meta_any const&, class cereal::SerializerContext&)
        const;
    /**
     * @symbol
     * ?lookup\@BasicSchema\@internal\@cereal\@\@SAAEBV123\@AEBUReflectionCtx\@3\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI static class cereal::internal::BasicSchema const&
    lookup(struct cereal::ReflectionCtx const&, std::string const&, std::string const&);
    /**
     * @symbol
     * ?save\@BasicSchema\@internal\@cereal\@\@QEBA?AUResult\@23\@AEAUSchemaWriter\@3\@AEBVmeta_any\@entt\@\@AEBUSerializerTraits\@3\@AEAVSerializerContext\@3\@\@Z
     */
    MCAPI struct cereal::internal::Result
    save(struct cereal::SchemaWriter&, class entt::meta_any const&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;
    /**
     * @symbol ?traits\@BasicSchema\@internal\@cereal\@\@QEBAAEBUSerializerTraits\@3\@XZ
     */
    MCAPI struct cereal::SerializerTraits const& traits() const;
    /**
     * @symbol
     * ?validate\@BasicSchema\@internal\@cereal\@\@QEBA?AUResult\@23\@AEAUSchemaReader\@3\@AEAVmeta_any\@entt\@\@AEBUSerializerTraits\@3\@AEAVSerializerContext\@3\@\@Z
     */
    MCAPI struct cereal::internal::Result
    validate(struct cereal::SchemaReader&, class entt::meta_any&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?ctx\@BasicSchema\@internal\@cereal\@\@IEBAAEBUReflectionCtx\@3\@XZ
     */
    MCAPI struct cereal::ReflectionCtx const& ctx() const;
    // NOLINTEND
};

}; // namespace cereal::internal
