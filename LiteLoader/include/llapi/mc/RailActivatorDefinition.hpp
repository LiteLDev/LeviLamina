/**
 * @file  RailActivatorDefinition.hpp
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
 * @brief MC class RailActivatorDefinition.
 *
 */
class RailActivatorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILACTIVATORDEFINITION
public:
    class RailActivatorDefinition& operator=(class RailActivatorDefinition const &) = delete;
    RailActivatorDefinition(class RailActivatorDefinition const &) = delete;
    RailActivatorDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@RailActivatorDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VRailActivatorDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RailActivatorDefinition>> &);

};