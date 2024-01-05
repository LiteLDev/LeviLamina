#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RideableDefinition {
public:
    // prevent constructor by default
    RideableDefinition& operator=(RideableDefinition const&);
    RideableDefinition(RideableDefinition const&);
    RideableDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?addFamilyTypeByName@RideableDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addFamilyTypeByName(std::string const& name);

    // symbol: ?initialize@RideableDefinition@@QEBAXAEAVEntityContext@@AEAVRideableComponent@@@Z
    MCAPI void initialize(class EntityContext& entity, class RideableComponent& component) const;

    // symbol:
    // ?buildSchema@RideableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VRideableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RideableDefinition>>&
            root
    );

    // NOLINTEND
};
