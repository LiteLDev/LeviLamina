/**
 * @file  FlockingDefinition.hpp
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
 * @brief MC class FlockingDefinition.
 *
 */
class FlockingDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOCKINGDEFINITION
public:
    class FlockingDefinition& operator=(class FlockingDefinition const &) = delete;
    FlockingDefinition(class FlockingDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0FlockingDefinition\@\@QEAA\@XZ
     */
    MCAPI FlockingDefinition();
    /**
     * @symbol  ?initialize\@FlockingDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVFlockingComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class FlockingComponent &) const;
    /**
     * @symbol  ?buildSchema\@FlockingDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VFlockingDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FlockingDefinition>> &);

};