/**
 * @file  HomeDefinition.hpp
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
 * @brief MC class HomeDefinition.
 *
 */
class HomeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOMEDEFINITION
public:
    class HomeDefinition& operator=(class HomeDefinition const &) = delete;
    HomeDefinition(class HomeDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0HomeDefinition\@\@QEAA\@XZ
     */
    MCAPI HomeDefinition();
    /**
     * @symbol  ?initialize\@HomeDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVHomeComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class HomeComponent &) const;
    /**
     * @symbol  ?buildSchema\@HomeDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VHomeDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HomeDefinition>> &);

};