/**
 * @file  SkinIDDefinition.hpp
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
 * @brief MC structure SkinIDDefinition.
 *
 */
struct SkinIDDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKINIDDEFINITION
public:
    struct SkinIDDefinition& operator=(struct SkinIDDefinition const &) = delete;
    SkinIDDefinition(struct SkinIDDefinition const &) = delete;
    SkinIDDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@SkinIDDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@USkinIDDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct SkinIDDefinition>> &);

};