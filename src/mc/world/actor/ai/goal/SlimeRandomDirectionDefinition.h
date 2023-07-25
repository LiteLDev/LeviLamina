#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SlimeRandomDirectionDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMERANDOMDIRECTIONDEFINITION
public:
    SlimeRandomDirectionDefinition& operator=(SlimeRandomDirectionDefinition const&) = delete;
    SlimeRandomDirectionDefinition(SlimeRandomDirectionDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0SlimeRandomDirectionDefinition\@\@QEAA\@XZ
     */
    MCAPI SlimeRandomDirectionDefinition();
    /**
     * @symbol
     * ?initialize\@SlimeRandomDirectionDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSlimeRandomDirectionGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class SlimeRandomDirectionGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@SlimeRandomDirectionDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSlimeRandomDirectionDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeRandomDirectionDefinition>>&);
};
