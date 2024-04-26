#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/BasicSchema.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { class SerializerEnumMapping; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal::internal {

class BasicGenericTypeSchema : public ::cereal::internal::BasicSchema {
public:
    // prevent constructor by default
    BasicGenericTypeSchema& operator=(BasicGenericTypeSchema const&);
    BasicGenericTypeSchema(BasicGenericTypeSchema const&);
    BasicGenericTypeSchema();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: __gen_??1BasicGenericTypeSchema@internal@cereal@@UEAA@XZ
    virtual ~BasicGenericTypeSchema() = default;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?doLoadWithSchema@BasicGenericTypeSchema@internal@cereal@@IEBAXAEBVmeta_type@entt@@AEAUSchemaReader@3@AEAVmeta_any@5@AEBV75@AEAVSerializerContext@3@AEBUtype_info@5@@Z
    MCAPI void
    doLoadWithSchema(entt::meta_type const&, struct cereal::SchemaReader&, entt::meta_any&, entt::meta_any const&, class cereal::SerializerContext&, entt::type_info const&)
        const;

    // symbol:
    // ?doSaveWithSchema@BasicGenericTypeSchema@internal@cereal@@IEBAXAEAUSchemaWriter@3@AEBVmeta_any@entt@@AEAVSerializerContext@3@AEBUtype_info@6@@Z
    MCAPI void
    doSaveWithSchema(struct cereal::SchemaWriter&, entt::meta_any const&, class cereal::SerializerContext&, entt::type_info const&)
        const;

    // symbol:
    // ?unpackWithInfo@BasicGenericTypeSchema@internal@cereal@@IEBAXAEBUtype_info@entt@@AEAV?$vector@V?$reference_wrapper@$$CBUSetterDescriptor@BasicSchema@internal@cereal@@@std@@V?$allocator@V?$reference_wrapper@$$CBUSetterDescriptor@BasicSchema@internal@cereal@@@std@@@2@@std@@AEAV?$dense_map@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$reference_wrapper@$$CBUMemberDescriptor@BasicSchema@internal@cereal@@@2@U?$hash@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@2@U?$equal_to@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$reference_wrapper@$$CBUMemberDescriptor@BasicSchema@internal@cereal@@@2@@std@@@2@@5@@Z
    MCAPI void
    unpackWithInfo(entt::type_info const&, std::vector<std::reference_wrapper<struct cereal::internal::BasicSchema::SetterDescriptor const>>&, entt::dense_map<std::string_view, std::reference_wrapper<struct cereal::internal::BasicSchema::MemberDescriptor const>>&)
        const;

    // NOLINTEND
};

}; // namespace cereal::internal
