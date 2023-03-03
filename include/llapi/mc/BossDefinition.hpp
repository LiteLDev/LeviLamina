/**
 * @file  BossDefinition.hpp
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
 * @brief MC class BossDefinition.
 *
 */
class BossDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSDEFINITION
public:
    class BossDefinition& operator=(class BossDefinition const &) = delete;
    BossDefinition(class BossDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0BossDefinition\@\@QEAA\@XZ
     */
    MCAPI BossDefinition();
    /**
     * @symbol  ?initialize\@BossDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBossComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class BossComponent &) const;
    /**
     * @symbol  ?buildSchema\@BossDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBossDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BossDefinition>> &);

};