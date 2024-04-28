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
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

class DefaultCompositeSchema : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    DefaultCompositeSchema& operator=(DefaultCompositeSchema const&);
    DefaultCompositeSchema(DefaultCompositeSchema const&);
    DefaultCompositeSchema();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?doLoad@DefaultCompositeSchema@internal@cereal@@EEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBV56@AEAVSerializerContext@3@@Z
    virtual void
    doLoad(struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&)
        const;

    // vIndex: 1, symbol:
    // ?doSave@DefaultCompositeSchema@internal@cereal@@EEBAXAEAUSchemaWriter@3@AEBVmeta_any@entt@@AEAVSerializerContext@3@@Z
    virtual void doSave(struct cereal::SchemaWriter&, entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 4, symbol: __gen_??1DefaultCompositeSchema@internal@cereal@@UEAA@XZ
    virtual ~DefaultCompositeSchema() = default;

    // vIndex: 5, symbol:
    // ?unpack@DefaultCompositeSchema@internal@cereal@@UEBAXAEAV?$vector@V?$reference_wrapper@$$CBUSetterDescriptor@BasicSchema@internal@cereal@@@std@@V?$allocator@V?$reference_wrapper@$$CBUSetterDescriptor@BasicSchema@internal@cereal@@@std@@@2@@std@@AEAV?$dense_map@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$reference_wrapper@$$CBUMemberDescriptor@BasicSchema@internal@cereal@@@2@U?$hash@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@2@U?$equal_to@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$reference_wrapper@$$CBUMemberDescriptor@BasicSchema@internal@cereal@@@2@@std@@@2@@entt@@@Z
    virtual void
    unpack(std::vector<std::reference_wrapper<struct cereal::internal::BasicSchema::SetterDescriptor const>>&, entt::dense_map<std::string_view, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>&)
        const;

    // vIndex: 8, symbol:
    // ?addParent@DefaultCompositeSchema@internal@cereal@@UEAAXV?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@std@@@Z
    virtual void addParent(std::unique_ptr<class cereal::internal::BasicSchema>);

    // vIndex: 9, symbol:
    // ?addSetter@DefaultCompositeSchema@internal@cereal@@UEAAXV?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@std@@P6A?AVmeta_type@entt@@AEBVmeta_ctx@7@@Z@Z
    virtual void
        addSetter(std::unique_ptr<class cereal::internal::BasicSchema>, entt::meta_type (*)(entt::meta_ctx const&));

    // vIndex: 10, symbol:
    // ?addMember@DefaultCompositeSchema@internal@cereal@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$unique_ptr@VBasicSchema@internal@cereal@@U?$default_delete@VBasicSchema@internal@cereal@@@std@@@5@_N@Z
    virtual void addMember(std::string_view, std::unique_ptr<class cereal::internal::BasicSchema>, bool);

    // vIndex: 11, symbol:
    // ?customError@DefaultCompositeSchema@internal@cereal@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V45@@Z
    virtual void customError(std::string const&, std::string);

    // symbol: ??0DefaultCompositeSchema@internal@cereal@@QEAA@AEBUReflectionCtx@2@@Z
    MCAPI explicit DefaultCompositeSchema(struct cereal::ReflectionCtx const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?makeDescriptionForType@DefaultCompositeSchema@internal@cereal@@IEBA?AUSchemaDescription@3@AEBVmeta_type@entt@@@Z
    MCAPI struct cereal::SchemaDescription makeDescriptionForType(entt::meta_type const&) const;

    // NOLINTEND
};

}; // namespace cereal::internal
