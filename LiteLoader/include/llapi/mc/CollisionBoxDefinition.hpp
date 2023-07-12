/**
 * @file  CollisionBoxDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


class CollisionBoxDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLLISIONBOXDEFINITION
public:
    class CollisionBoxDefinition& operator=(class CollisionBoxDefinition const &) = delete;
    CollisionBoxDefinition(class CollisionBoxDefinition const &) = delete;
    CollisionBoxDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize\@CollisionBoxDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVCollisionBoxComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class CollisionBoxComponent &) const;
    /**
     * @symbol ?setHeight\@CollisionBoxDefinition\@\@QEAAXAEBM\@Z
     */
    MCAPI void setHeight(float const &);
    /**
     * @symbol ?setWidth\@CollisionBoxDefinition\@\@QEAAXAEBM\@Z
     */
    MCAPI void setWidth(float const &);
    /**
     * @symbol ?buildSchema\@CollisionBoxDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VCollisionBoxDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class CollisionBoxDefinition>> &);

};
