#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DragonFlamingDefinition {

public:
    // prevent constructor by default
    DragonFlamingDefinition& operator=(DragonFlamingDefinition const&) = delete;
    DragonFlamingDefinition(DragonFlamingDefinition const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?validateMobType\@DragonFlamingDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    virtual bool validateMobType(class Mob&) const; // NOLINT
    /**
     * @symbol ??0DragonFlamingDefinition\@\@QEAA\@XZ
     */
    MCAPI DragonFlamingDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@DragonFlamingDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDragonFlamingGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class DragonFlamingGoal&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@DragonFlamingDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDragonFlamingDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonFlamingDefinition>>&); // NOLINT
};
