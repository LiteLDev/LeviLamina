#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CollisionBoxDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLLISIONBOXDEFINITION
public:
    CollisionBoxDefinition& operator=(CollisionBoxDefinition const&) = delete;
    CollisionBoxDefinition(CollisionBoxDefinition const&)            = delete;
    CollisionBoxDefinition()                                         = delete;
#endif

public:
    /**
     * @symbol ?initialize\@CollisionBoxDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVCollisionBoxComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class CollisionBoxComponent&) const;
    /**
     * @symbol ?setHeight\@CollisionBoxDefinition\@\@QEAAXAEBM\@Z
     */
    MCAPI void setHeight(float const&);
    /**
     * @symbol ?setWidth\@CollisionBoxDefinition\@\@QEAAXAEBM\@Z
     */
    MCAPI void setWidth(float const&);
    /**
     * @symbol
     * ?buildSchema\@CollisionBoxDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VCollisionBoxDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class CollisionBoxDefinition>>&);
};
