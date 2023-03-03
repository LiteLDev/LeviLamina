/**
 * @file  OnTargetAcquiredDefinition.hpp
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
 * @brief MC structure OnTargetAcquiredDefinition.
 *
 */
struct OnTargetAcquiredDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONTARGETACQUIREDDEFINITION
public:
    struct OnTargetAcquiredDefinition& operator=(struct OnTargetAcquiredDefinition const &) = delete;
    OnTargetAcquiredDefinition(struct OnTargetAcquiredDefinition const &) = delete;
    OnTargetAcquiredDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@OnTargetAcquiredDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UOnTargetAcquiredDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnTargetAcquiredDefinition>> &);

};