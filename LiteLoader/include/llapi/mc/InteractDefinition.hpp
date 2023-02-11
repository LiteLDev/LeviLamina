/**
 * @file  InteractDefinition.hpp
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
 * @brief MC class InteractDefinition.
 *
 */
class InteractDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTDEFINITION
public:
    class InteractDefinition& operator=(class InteractDefinition const &) = delete;
    InteractDefinition(class InteractDefinition const &) = delete;
    InteractDefinition() = delete;
#endif

public:
    /**
     * @hash   -90366546
     * @symbol  ?addInteraction\@InteractDefinition\@\@QEAAXAEBUInteraction\@\@\@Z
     */
    MCAPI void addInteraction(struct Interaction const &);
    /**
     * @hash   783349045
     * @symbol  ?initialize\@InteractDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVInteractComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class InteractComponent &) const;
    /**
     * @hash   1958109622
     * @symbol  ?buildSchema\@InteractDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VInteractDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InteractDefinition>> &);

};