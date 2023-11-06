#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
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
        MemberDescriptor& operator=(MemberDescriptor const&);
        MemberDescriptor(MemberDescriptor const&);
        MemberDescriptor();

    public:
        // NOLINTBEGIN
        // symbol: ??4MemberDescriptor@BasicSchema@internal@cereal@@QEAAAEAU0123@$$QEAU0123@@Z
        MCAPI struct cereal::internal::BasicSchema::MemberDescriptor&
        operator=(struct cereal::internal::BasicSchema::MemberDescriptor&&);

        // symbol: ??1MemberDescriptor@BasicSchema@internal@cereal@@QEAA@XZ
        MCAPI ~MemberDescriptor();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BasicSchema& operator=(BasicSchema const&);
    BasicSchema(BasicSchema const&);
    BasicSchema();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?doValidate@BasicSchema@internal@cereal@@EEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBUSerializerTraits@3@AEAVSerializerContext@3@@Z
    virtual void
    doValidate(struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;

    // vIndex: 1, symbol:
    // ?doLoad@BasicSchema@internal@cereal@@EEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBUSerializerTraits@3@AEBV56@AEAVSerializerContext@3@@Z
    virtual void
    doLoad(struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&)
        const;

    // vIndex: 2, symbol:
    // ?doSave@BasicSchema@internal@cereal@@EEBAXAEAUSchemaWriter@3@AEBVmeta_any@entt@@AEBUSerializerTraits@3@AEAVSerializerContext@3@@Z
    virtual void
    doSave(struct cereal::SchemaWriter&, entt::meta_any const&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;

    // vIndex: 3, symbol: ?doVerifyInitialization@BasicSchema@internal@cereal@@EEBA_NAEBVmeta_any@entt@@@Z
    virtual bool doVerifyInitialization(entt::meta_any const&) const;

    // vIndex: 4, symbol: ??1BasicSchema@internal@cereal@@UEAA@XZ
    virtual ~BasicSchema();

    // vIndex: 5, symbol:
    // ?unpack@BasicSchema@internal@cereal@@UEBAXAEAV?$vector@V?$reference_wrapper@$$CBVBasicSchema@internal@cereal@@@std@@V?$allocator@V?$reference_wrapper@$$CBVBasicSchema@internal@cereal@@@std@@@2@@std@@AEAV?$dense_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$reference_wrapper@$$CBUMemberDescriptor@BasicSchema@internal@cereal@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$reference_wrapper@$$CBUMemberDescriptor@BasicSchema@internal@cereal@@@2@@std@@@2@@entt@@@Z
    virtual void
    unpack(std::vector<std::reference_wrapper<class cereal::internal::BasicSchema const>>&, entt::dense_map<std::string, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>&)
        const;

    // vIndex: 6, symbol: ?description@BasicCompositeSchema@internal@cereal@@UEBA?AUSchemaDescription@3@XZ
    virtual struct cereal::SchemaDescription description() const = 0;

    // symbol: ??0BasicSchema@internal@cereal@@QEAA@AEBUReflectionCtx@2@@Z
    MCAPI explicit BasicSchema(struct cereal::ReflectionCtx const&);

    // symbol:
    // ??0BasicSchema@internal@cereal@@QEAA@AEBUReflectionCtx@2@V?$unique_ptr@VConstraint@cereal@@U?$default_delete@VConstraint@cereal@@@std@@@std@@@Z
    MCAPI BasicSchema(struct cereal::ReflectionCtx const&, std::unique_ptr<class cereal::Constraint>);

    // symbol: ??0BasicSchema@internal@cereal@@QEAA@USerializerTraits@2@AEBUReflectionCtx@2@@Z
    MCAPI BasicSchema(struct cereal::SerializerTraits, struct cereal::ReflectionCtx const&);

    // symbol:
    // ??0BasicSchema@internal@cereal@@QEAA@USerializerTraits@2@AEBUReflectionCtx@2@V?$unique_ptr@VConstraint@cereal@@U?$default_delete@VConstraint@cereal@@@std@@@std@@@Z
    MCAPI
    BasicSchema(struct cereal::SerializerTraits, struct cereal::ReflectionCtx const&, std::unique_ptr<class cereal::Constraint>);

    // symbol: ?ctx@BasicSchema@internal@cereal@@QEBAAEBUReflectionCtx@3@XZ
    MCAPI struct cereal::ReflectionCtx const& ctx() const;

    // symbol:
    // ?customError@BasicSchema@internal@cereal@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void customError(std::string const&);

    // symbol: ?isProperlyInitialized@BasicSchema@internal@cereal@@QEBA_NAEBVmeta_any@entt@@@Z
    MCAPI bool isProperlyInitialized(entt::meta_any const&) const;

    // symbol:
    // ?load@BasicSchema@internal@cereal@@QEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBUSerializerTraits@3@AEBV56@AEAVSerializerContext@3@@Z
    MCAPI void
    load(struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, entt::meta_any const&, class cereal::SerializerContext&)
        const;

    // symbol:
    // ?save@BasicSchema@internal@cereal@@QEBAXAEAUSchemaWriter@3@AEBVmeta_any@entt@@AEBUSerializerTraits@3@AEAVSerializerContext@3@@Z
    MCAPI void
    save(struct cereal::SchemaWriter&, entt::meta_any const&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;

    // symbol: ?traits@BasicSchema@internal@cereal@@QEBAAEBUSerializerTraits@3@XZ
    MCAPI struct cereal::SerializerTraits const& traits() const;

    // symbol:
    // ?validate@BasicSchema@internal@cereal@@QEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBUSerializerTraits@3@AEAVSerializerContext@3@@Z
    MCAPI void
    validate(struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;

    // symbol:
    // ?lookup@BasicSchema@internal@cereal@@SAAEBV123@AEBUReflectionCtx@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI static class cereal::internal::BasicSchema const&
    lookup(struct cereal::ReflectionCtx const&, std::string const&, std::string const&);

    // NOLINTEND
};

}; // namespace cereal::internal
