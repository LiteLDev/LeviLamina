#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { struct ExtendedSchemaInfo; }
namespace cereal::internal { struct SchemaInfo; }
// clang-format on

namespace cereal::ext::internal {

struct JSONSchemaDef {
public:
    // NOLINTBEGIN
    // symbol: ??0JSONSchemaDef@internal@ext@cereal@@QEAA@XZ
    MCAPI JSONSchemaDef();

    // symbol: ??0JSONSchemaDef@internal@ext@cereal@@QEAA@AEBU0123@@Z
    MCAPI JSONSchemaDef(struct cereal::ext::internal::JSONSchemaDef const&);

    // symbol: ??0JSONSchemaDef@internal@ext@cereal@@QEAA@AEBUSchemaInfo@13@@Z
    MCAPI explicit JSONSchemaDef(struct cereal::internal::SchemaInfo const&);

    // symbol:
    // ??0JSONSchemaDef@internal@ext@cereal@@QEAA@AEBUExtendedSchemaInfo@13@AEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@@Z
    MCAPI JSONSchemaDef(struct cereal::internal::ExtendedSchemaInfo const&, std::map<std::string, int>&);

    // symbol:
    // ?normalizeRefs@JSONSchemaDef@internal@ext@cereal@@QEAAXAEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@AEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UJSONSchemaDef@internal@ext@cereal@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UJSONSchemaDef@internal@ext@cereal@@@std@@@2@@6@@Z
    MCAPI void
    normalizeRefs(std::map<std::string, int>&, std::map<std::string, struct cereal::ext::internal::JSONSchemaDef>&);

    // symbol: ??4JSONSchemaDef@internal@ext@cereal@@QEAAAEAU0123@$$QEAU0123@@Z
    MCAPI struct cereal::ext::internal::JSONSchemaDef& operator=(struct cereal::ext::internal::JSONSchemaDef&&);

    // symbol: ??4JSONSchemaDef@internal@ext@cereal@@QEAAAEAU0123@AEBU0123@@Z
    MCAPI struct cereal::ext::internal::JSONSchemaDef& operator=(struct cereal::ext::internal::JSONSchemaDef const&);

    // symbol: ??1JSONSchemaDef@internal@ext@cereal@@QEAA@XZ
    MCAPI ~JSONSchemaDef();

    // symbol: ?bindType@JSONSchemaDef@internal@ext@cereal@@SAXAEAUReflectionCtx@4@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace cereal::ext::internal
