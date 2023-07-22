/**
 * @file  FireImmuneDefinition.hpp
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
 * @brief MC structure FireImmuneDefinition.
 *
 */
struct FireImmuneDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREIMMUNEDEFINITION
public:
    struct FireImmuneDefinition& operator=(struct FireImmuneDefinition const &) = delete;
    FireImmuneDefinition(struct FireImmuneDefinition const &) = delete;
    FireImmuneDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@FireImmuneDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &) const;
    /**
     * @symbol  ?uninitialize\@FireImmuneDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext &) const;
    /**
     * @symbol  ?buildSchema\@FireImmuneDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UFireImmuneDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FireImmuneDefinition>> &);

};