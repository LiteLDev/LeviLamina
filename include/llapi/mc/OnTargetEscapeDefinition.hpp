/**
 * @file  OnTargetEscapeDefinition.hpp
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
 * @brief MC structure OnTargetEscapeDefinition.
 *
 */
struct OnTargetEscapeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONTARGETESCAPEDEFINITION
public:
    struct OnTargetEscapeDefinition& operator=(struct OnTargetEscapeDefinition const &) = delete;
    OnTargetEscapeDefinition(struct OnTargetEscapeDefinition const &) = delete;
    OnTargetEscapeDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@OnTargetEscapeDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UOnTargetEscapeDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnTargetEscapeDefinition>> &);

};