#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BalloonableDefinition {
public:
    // prevent constructor by default
    BalloonableDefinition& operator=(BalloonableDefinition const&);
    BalloonableDefinition(BalloonableDefinition const&);
    BalloonableDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@BalloonableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBalloonableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BalloonableDefinition>>&
            root
    );

    // NOLINTEND
};
