#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OcelotAttackDefinition {

public:
    // prevent constructor by default
    OcelotAttackDefinition& operator=(OcelotAttackDefinition const&) = delete;
    OcelotAttackDefinition(OcelotAttackDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0OcelotAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI OcelotAttackDefinition();
    /**
     * @symbol ?initialize\@OcelotAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVOcelotAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class OcelotAttackGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@OcelotAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VOcelotAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class OcelotAttackDefinition>>&);
    // NOLINTEND
};
