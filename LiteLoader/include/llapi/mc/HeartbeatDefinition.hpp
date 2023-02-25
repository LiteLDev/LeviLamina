/**
 * @file  HeartbeatDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class HeartbeatDefinition.
 *
 */
class HeartbeatDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEARTBEATDEFINITION
public:
    class HeartbeatDefinition& operator=(class HeartbeatDefinition const &) = delete;
    HeartbeatDefinition(class HeartbeatDefinition const &) = delete;
    HeartbeatDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@HeartbeatDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVHeartbeatServerComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class HeartbeatServerComponent &) const;
    /**
     * @symbol  ?buildSchema\@HeartbeatDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VHeartbeatDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HeartbeatDefinition>> &);

};