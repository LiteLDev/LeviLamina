#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal::ext::internal { struct JSONSchemaDef; }
namespace cereal::internal { struct ConstraintDescription; }
namespace cereal::internal { struct ExtendedSchemaInfo; }
// clang-format on

namespace cereal::ext::internal {

struct JSONSchemaBody {
public:
    // prevent constructor by default
    JSONSchemaBody();

public:
    // NOLINTBEGIN
    // symbol: ??0JSONSchemaBody@internal@ext@cereal@@QEAA@$$QEAU0123@@Z
    MCAPI JSONSchemaBody(struct cereal::ext::internal::JSONSchemaBody&&);

    // symbol: ??0JSONSchemaBody@internal@ext@cereal@@QEAA@AEBU0123@@Z
    MCAPI JSONSchemaBody(struct cereal::ext::internal::JSONSchemaBody const&);

    // symbol:
    // ?fillBody@JSONSchemaBody@internal@ext@cereal@@QEAAXAEBUExtendedSchemaInfo@24@AEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@@Z
    MCAPI void fillBody(struct cereal::internal::ExtendedSchemaInfo const&, std::map<std::string, int>&);

    // symbol: ??4JSONSchemaBody@internal@ext@cereal@@QEAAAEAU0123@$$QEAU0123@@Z
    MCAPI struct cereal::ext::internal::JSONSchemaBody& operator=(struct cereal::ext::internal::JSONSchemaBody&&);

    // symbol: ??4JSONSchemaBody@internal@ext@cereal@@QEAAAEAU0123@AEBU0123@@Z
    MCAPI struct cereal::ext::internal::JSONSchemaBody& operator=(struct cereal::ext::internal::JSONSchemaBody const&);

    // symbol: ??1JSONSchemaBody@internal@ext@cereal@@QEAA@XZ
    MCAPI ~JSONSchemaBody();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?fill@JSONSchemaBody@internal@ext@cereal@@AEAAXAEBUConstraintDescription@24@@Z
    MCAPI void fill(struct cereal::internal::ConstraintDescription const&);

    // symbol:
    // ?overwriteIfAny@JSONSchemaBody@internal@ext@cereal@@CAXAEAV?$shared_ptr@UJSONSchemaDef@internal@ext@cereal@@@std@@AEBV?$shared_ptr@UConstraintDescription@internal@cereal@@@6@@Z
    MCAPI static void
    overwriteIfAny(std::shared_ptr<struct cereal::ext::internal::JSONSchemaDef>&, std::shared_ptr<struct cereal::internal::ConstraintDescription> const&);

    // NOLINTEND
};

}; // namespace cereal::ext::internal
