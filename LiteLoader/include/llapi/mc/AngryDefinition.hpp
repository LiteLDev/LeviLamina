/**
 * @file  AngryDefinition.hpp
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
 * @brief MC class AngryDefinition.
 *
 */
class AngryDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANGRYDEFINITION
public:
    class AngryDefinition& operator=(class AngryDefinition const &) = delete;
    AngryDefinition(class AngryDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0AngryDefinition\@\@QEAA\@XZ
     */
    MCAPI AngryDefinition();
    /**
     * @symbol  ?addBroadcastTargetByName\@AngryDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addBroadcastTargetByName(std::string const &);
    /**
     * @symbol  ?initialize\@AngryDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVAngryComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class AngryComponent &) const;
    /**
     * @symbol  ?uninitialize\@AngryDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVAngryComponent\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext &, class AngryComponent &) const;
    /**
     * @symbol  ?buildSchema\@AngryDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VAngryDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AngryDefinition>> &);

};