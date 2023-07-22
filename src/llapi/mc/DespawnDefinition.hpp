/**
 * @file  DespawnDefinition.hpp
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
 * @brief MC class DespawnDefinition.
 *
 */
class DespawnDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESPAWNDEFINITION
public:
    class DespawnDefinition& operator=(class DespawnDefinition const &) = delete;
    DespawnDefinition(class DespawnDefinition const &) = delete;
    DespawnDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@DespawnDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDespawnDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DespawnDefinition>> &);

};