/**
 * @file  GroupSizeDefinition.hpp
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
 * @brief MC class GroupSizeDefinition.
 *
 */
class GroupSizeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUPSIZEDEFINITION
public:
    class GroupSizeDefinition& operator=(class GroupSizeDefinition const &) = delete;
    GroupSizeDefinition(class GroupSizeDefinition const &) = delete;
    GroupSizeDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@GroupSizeDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VGroupSizeDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GroupSizeDefinition>> &);

};