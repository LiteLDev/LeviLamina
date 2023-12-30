#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MountTameableDefinition {
public:
    // prevent constructor by default
    MountTameableDefinition& operator=(MountTameableDefinition const&);
    MountTameableDefinition(MountTameableDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0MountTameableDefinition@@QEAA@XZ
    MCAPI MountTameableDefinition();

    // symbol: ?initialize@MountTameableDefinition@@QEBAXAEAVEntityContext@@AEAVMountTamingComponent@@@Z
    MCAPI void initialize(class EntityContext& entity, class MountTamingComponent& component) const;

    // symbol:
    // ?buildSchema@MountTameableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VMountTameableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MountTameableDefinition>>& root);

    // NOLINTEND
};
