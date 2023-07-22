/**
 * @file  InteractDefinition.hpp
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
     * @symbol  ?addInteraction\@InteractDefinition\@\@QEAAXAEBUInteraction\@\@\@Z
     */
    MCAPI void addInteraction(struct Interaction const &);
    /**
     * @symbol  ?initialize\@InteractDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVInteractComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class InteractComponent &) const;
    /**
     * @symbol  ?buildSchema\@InteractDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VInteractDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InteractDefinition>> &);

};