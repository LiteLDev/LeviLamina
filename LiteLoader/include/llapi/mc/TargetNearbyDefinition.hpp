/**
 * @file  TargetNearbyDefinition.hpp
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
 * @brief MC class TargetNearbyDefinition.
 *
 */
class TargetNearbyDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETNEARBYDEFINITION
public:
    class TargetNearbyDefinition& operator=(class TargetNearbyDefinition const &) = delete;
    TargetNearbyDefinition(class TargetNearbyDefinition const &) = delete;
    TargetNearbyDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@TargetNearbyDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VTargetNearbyDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TargetNearbyDefinition>> &);

};