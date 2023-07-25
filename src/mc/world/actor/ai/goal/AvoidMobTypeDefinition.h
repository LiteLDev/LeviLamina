#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AvoidMobTypeDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVOIDMOBTYPEDEFINITION
public:
    AvoidMobTypeDefinition& operator=(AvoidMobTypeDefinition const&) = delete;
    AvoidMobTypeDefinition(AvoidMobTypeDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0AvoidMobTypeDefinition\@\@QEAA\@XZ
     */
    MCAPI AvoidMobTypeDefinition();
    /**
     * @symbol ?initialize\@AvoidMobTypeDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVAvoidMobTypeGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class AvoidMobTypeGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@AvoidMobTypeDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VAvoidMobTypeDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AvoidMobTypeDefinition>>&);
};
