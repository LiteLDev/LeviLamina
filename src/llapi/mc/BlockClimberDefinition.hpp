/**
 * @file  BlockClimberDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockClimberDefinition.
 *
 */
class BlockClimberDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCLIMBERDEFINITION
public:
    class BlockClimberDefinition& operator=(class BlockClimberDefinition const &) = delete;
    BlockClimberDefinition(class BlockClimberDefinition const &) = delete;
    BlockClimberDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@BlockClimberDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBlockClimberDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BlockClimberDefinition>> &);

};