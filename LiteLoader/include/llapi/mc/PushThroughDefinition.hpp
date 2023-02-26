/**
 * @file  PushThroughDefinition.hpp
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
 * @brief MC structure PushThroughDefinition.
 *
 */
struct PushThroughDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUSHTHROUGHDEFINITION
public:
    struct PushThroughDefinition& operator=(struct PushThroughDefinition const &) = delete;
    PushThroughDefinition(struct PushThroughDefinition const &) = delete;
    PushThroughDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@PushThroughDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &) const;
    /**
     * @symbol  ?buildSchema\@PushThroughDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UPushThroughDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct PushThroughDefinition>> &);

};