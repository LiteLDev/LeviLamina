/**
 * @file  PhysicsDefinition.hpp
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
 * @brief MC class PhysicsDefinition.
 *
 */
class PhysicsDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHYSICSDEFINITION
public:
    class PhysicsDefinition& operator=(class PhysicsDefinition const &) = delete;
    PhysicsDefinition(class PhysicsDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0PhysicsDefinition\@\@QEAA\@XZ
     */
    MCAPI PhysicsDefinition();
    /**
     * @symbol  ?initialize\@PhysicsDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVPhysicsComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class PhysicsComponent &) const;
    /**
     * @symbol  ?buildSchema\@PhysicsDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VPhysicsDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PhysicsDefinition>> &);

};