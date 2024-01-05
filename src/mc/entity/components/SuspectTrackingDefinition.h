#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SuspectTrackingDefinition {
public:
    // prevent constructor by default
    SuspectTrackingDefinition& operator=(SuspectTrackingDefinition const&);
    SuspectTrackingDefinition(SuspectTrackingDefinition const&);
    SuspectTrackingDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@SuspectTrackingDefinition@@QEBAXAEAVEntityContext@@AEAVSuspectTrackingComponent@@@Z
    MCAPI void initialize(class EntityContext&, class SuspectTrackingComponent&) const;

    // symbol:
    // ?buildSchema@SuspectTrackingDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSuspectTrackingDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SuspectTrackingDefinition>>& root
    );

    // NOLINTEND
};
