/**
 * @file  GrowsCropDefinition.hpp
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
 * @brief MC class GrowsCropDefinition.
 *
 */
class GrowsCropDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROWSCROPDEFINITION
public:
    class GrowsCropDefinition& operator=(class GrowsCropDefinition const &) = delete;
    GrowsCropDefinition(class GrowsCropDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0GrowsCropDefinition\@\@QEAA\@XZ
     */
    MCAPI GrowsCropDefinition();
    /**
     * @symbol  ?initialize\@GrowsCropDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVGrowsCropComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class GrowsCropComponent &) const;
    /**
     * @symbol  ?buildSchema\@GrowsCropDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VGrowsCropDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GrowsCropDefinition>> &);

};