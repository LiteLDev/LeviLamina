#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
// clang-format on

namespace cereal::internal {

class BasicSchema {
public:
    // BasicSchema inner types declare
    // clang-format off
    struct MemberDescriptor;
    struct SetterDescriptor;
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
        // symbol: ??1MemberDescriptor@BasicSchema@internal@cereal@@QEAA@XZ
        MCAPI ~MemberDescriptor();

        // NOLINTEND
    };

    struct SetterDescriptor {
    public:
        // prevent constructor by default
        SetterDescriptor& operator=(SetterDescriptor const&);
        SetterDescriptor(SetterDescriptor const&);
        SetterDescriptor();

    public:
        // NOLINTBEGIN
        // symbol: ??1SetterDescriptor@BasicSchema@internal@cereal@@QEAA@XZ
        MCAPI ~SetterDescriptor();

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
    // ?doLoad@BasicSchema@internal@cereal@@EEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBV56@AEAVSerializerContext@3@@Z
    virtual void
    doLoad(struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&)
        const;

    // vIndex: 1, symbol:
    // ?doSave@BasicSchema@internal@cereal@@EEBAXAEAUSchemaWriter@3@AEBVmeta_any@entt@@AEAVSerializerContext@3@@Z
    virtual void doSave(struct cereal::SchemaWriter&, entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 2, symbol: ?doVerifyInitialization@BasicSchema@internal@cereal@@EEBA_NAEBVmeta_any@entt@@@Z
    virtual bool doVerifyInitialization(entt::meta_any const&) const;

    // vIndex: 3, symbol: ?makeDescription@?$TypeSchema@_NX@internal@cereal@@EEBA?AUSchemaDescription@3@XZ
    virtual struct cereal::SchemaDescription makeDescription() const = 0;

    // vIndex: 4, symbol: ??1BasicSchema@internal@cereal@@UEAA@XZ
    virtual ~BasicSchema();

    // vIndex: 5, symbol:
    // ?unpack@BasicSchema@internal@cereal@@UEBAXAEAV?$vector@V?$reference_wrapper@$$CBUSetterDescriptor@BasicSchema@internal@cereal@@@std@@V?$allocator@V?$reference_wrapper@$$CBUSetterDescriptor@BasicSchema@internal@cereal@@@std@@@2@@std@@AEAV?$dense_map@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$reference_wrapper@$$CBUMemberDescriptor@BasicSchema@internal@cereal@@@2@U?$hash@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@2@U?$equal_to@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$reference_wrapper@$$CBUMemberDescriptor@BasicSchema@internal@cereal@@@2@@std@@@2@@entt@@@Z
    virtual void
    unpack(std::vector<std::reference_wrapper<struct cereal::internal::BasicSchema::SetterDescriptor const>>&, entt::dense_map<std::string_view, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>&)
        const;

    // vIndex: 6, symbol: ?enumMapping@BasicSchema@internal@cereal@@UEAAXVSerializerEnumMapping@3@@Z
    virtual void enumMapping(class cereal::SerializerEnumMapping);

    // vIndex: 7, symbol: ?enumMapping@BasicSchema@internal@cereal@@UEBAPEBVSerializerEnumMapping@3@XZ
    virtual class cereal::SerializerEnumMapping const* enumMapping() const;

    // vIndex: 8, symbol:
    // ?addParent@BasicSchema@internal@cereal@@UEAAXV?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@std@@@Z
    virtual void addParent(std::unique_ptr<class cereal::internal::BasicSchema>);

    // vIndex: 9, symbol:
    // ?addSetter@BasicSchema@internal@cereal@@UEAAXV?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@std@@P6A?AVmeta_type@entt@@AEBVmeta_ctx@7@@Z@Z
    virtual void
        addSetter(std::unique_ptr<class cereal::internal::BasicSchema>, entt::meta_type (*)(entt::meta_ctx const&));

    // vIndex: 10, symbol:
    // ?addMember@BasicSchema@internal@cereal@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@5@_N@Z
    virtual void addMember(std::string_view, std::unique_ptr<class cereal::internal::BasicSchema>, bool);

    // vIndex: 11, symbol:
    // ?customError@BasicSchema@internal@cereal@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V45@@Z
    virtual void customError(std::string const&, std::string);

    // vIndex: 12, symbol:
    // ?constraint@BasicSchema@internal@cereal@@UEAAXV?$unique_ptr@VConstraint@cereal@@U?$default_delete@VConstraint@cereal@@@std@@@std@@@Z
    virtual void constraint(std::unique_ptr<class cereal::Constraint>);

    // vIndex: 13, symbol: ?constraint@BasicSchema@internal@cereal@@UEBAPEBVConstraint@3@XZ
    virtual class cereal::Constraint const* constraint() const;

    // symbol: ??0BasicSchema@internal@cereal@@QEAA@AEBUReflectionCtx@2@@Z
    MCAPI explicit BasicSchema(struct cereal::ReflectionCtx const&);

    // symbol: ?ctx@BasicSchema@internal@cereal@@QEBAAEBUReflectionCtx@3@XZ
    MCAPI struct cereal::ReflectionCtx const& ctx() const;

    // symbol:
    // ?customError@BasicSchema@internal@cereal@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void customError(std::string);

    // symbol: ?description@BasicSchema@internal@cereal@@QEBA?AUSchemaDescription@3@XZ
    MCAPI struct cereal::SchemaDescription description() const;

    // symbol: ?isProperlyInitialized@BasicSchema@internal@cereal@@QEBA_NAEBVmeta_any@entt@@@Z
    MCAPI bool isProperlyInitialized(entt::meta_any const&) const;

    // symbol:
    // ?load@BasicSchema@internal@cereal@@QEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBV56@AEAVSerializerContext@3@@Z
    MCAPI void
    load(struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&) const;

    // symbol: ?save@BasicSchema@internal@cereal@@QEBAXAEAUSchemaWriter@3@AEBVmeta_any@entt@@AEAVSerializerContext@3@@Z
    MCAPI void save(struct cereal::SchemaWriter&, entt::meta_any const&, class cereal::SerializerContext&) const;

    // symbol: ?lookup@BasicSchema@internal@cereal@@SAAEBV123@AEBUReflectionCtx@3@I@Z
    MCAPI static class cereal::internal::BasicSchema const& lookup(struct cereal::ReflectionCtx const&, uint);

    // NOLINTEND
};

}; // namespace cereal::internal
