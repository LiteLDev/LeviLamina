/**
 * @file  BlockBreakSensorDefinition.hpp
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
 * @brief MC class BlockBreakSensorDefinition.
 *
 */
class BlockBreakSensorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBREAKSENSORDEFINITION
public:
    class BlockBreakSensorDefinition& operator=(class BlockBreakSensorDefinition const &) = delete;
    BlockBreakSensorDefinition(class BlockBreakSensorDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0BlockBreakSensorDefinition\@\@QEAA\@XZ
     */
    MCAPI BlockBreakSensorDefinition();
    /**
     * @symbol  ?initialize\@BlockBreakSensorDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVBlockBreakSensorComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class BlockBreakSensorComponent &) const;
    /**
     * @symbol  ?buildSchema\@BlockBreakSensorDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBlockBreakSensorDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BlockBreakSensorDefinition>> &);

};