#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DragonChargePlayerDefinition {

public:
    // prevent constructor by default
    DragonChargePlayerDefinition& operator=(DragonChargePlayerDefinition const&) = delete;
    DragonChargePlayerDefinition(DragonChargePlayerDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0DragonChargePlayerDefinition\@\@QEAA\@XZ
     */
    MCAPI DragonChargePlayerDefinition();
    /**
     * @symbol
     * ?buildSchema\@DragonChargePlayerDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDragonChargePlayerDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonChargePlayerDefinition>>&);
    /**
     * @symbol ?initialize\@DragonChargePlayerDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDragonChargePlayerGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DragonChargePlayerGoal&) const;
    // NOLINTEND
};
