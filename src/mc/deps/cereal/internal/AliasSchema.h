#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal { struct SerializerTraits; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

class AliasSchema : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    AliasSchema& operator=(AliasSchema const&);
    AliasSchema(AliasSchema const&);
    AliasSchema();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?doValidate@AliasSchema@internal@cereal@@EEBAXAEAUSchemaReader@3@AEAVmeta_any@entt@@AEBUSerializerTraits@3@AEAVSerializerContext@3@@Z
    virtual void
    doValidate(struct cereal::SchemaReader&, entt::meta_any&, struct cereal::SerializerTraits const&, class cereal::SerializerContext&)
        const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?unpack@AliasSchema@internal@cereal@@UEBAXAEAV?$vector@V?$reference_wrapper@$$CBVBasicSchema@internal@cereal@@@std@@V?$allocator@V?$reference_wrapper@$$CBVBasicSchema@internal@cereal@@@std@@@2@@std@@AEAV?$dense_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$reference_wrapper@$$CBUMemberDescriptor@BasicSchema@internal@cereal@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$reference_wrapper@$$CBUMemberDescriptor@BasicSchema@internal@cereal@@@2@@std@@@2@@entt@@@Z
    virtual void
    unpack(std::vector<std::reference_wrapper<class cereal::internal::BasicSchema const>>&, entt::dense_map<std::string, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>&)
        const;

    // vIndex: 6, symbol: ?description@AliasSchema@internal@cereal@@UEBA?AUSchemaDescription@3@XZ
    virtual struct cereal::SchemaDescription description() const;

    // symbol:
    // ??0AliasSchema@internal@cereal@@QEAA@AEBUReflectionCtx@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI AliasSchema(struct cereal::ReflectionCtx const&, std::string const&, std::string const&);

    // NOLINTEND
};

}; // namespace cereal::internal
