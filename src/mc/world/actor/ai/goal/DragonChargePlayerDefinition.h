#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DragonChargePlayerDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONCHARGEPLAYERDEFINITION
public:
    DragonChargePlayerDefinition& operator=(DragonChargePlayerDefinition const&) = delete;
    DragonChargePlayerDefinition(DragonChargePlayerDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0DragonChargePlayerDefinition\@\@QEAA\@XZ
     */
    MCAPI DragonChargePlayerDefinition();
    /**
     * @symbol ?initialize\@DragonChargePlayerDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDragonChargePlayerGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DragonChargePlayerGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@DragonChargePlayerDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDragonChargePlayerDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonChargePlayerDefinition>>&);
};
