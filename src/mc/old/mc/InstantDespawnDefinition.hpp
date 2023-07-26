/**
 * @file  InstantDespawnDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InstantDespawnDefinition.
 *
 */
class InstantDespawnDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSTANTDESPAWNDEFINITION
public:
    class InstantDespawnDefinition& operator=(class InstantDespawnDefinition const &) = delete;
    InstantDespawnDefinition(class InstantDespawnDefinition const &) = delete;
    InstantDespawnDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@InstantDespawnDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VInstantDespawnDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InstantDespawnDefinition>> &);

};