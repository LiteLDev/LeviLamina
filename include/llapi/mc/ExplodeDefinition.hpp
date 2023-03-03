/**
 * @file  ExplodeDefinition.hpp
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
 * @brief MC class ExplodeDefinition.
 *
 */
class ExplodeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLODEDEFINITION
public:
    class ExplodeDefinition& operator=(class ExplodeDefinition const &) = delete;
    ExplodeDefinition(class ExplodeDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ExplodeDefinition\@\@QEAA\@XZ
     */
    MCAPI ExplodeDefinition();
    /**
     * @symbol  ?initialize\@ExplodeDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVExplodeComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class ExplodeComponent &) const;
    /**
     * @symbol  ?uninitialize\@ExplodeDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext &) const;
    /**
     * @symbol  ?buildSchema\@ExplodeDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VExplodeDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExplodeDefinition>> &);

};