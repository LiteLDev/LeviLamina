/**
 * @file  EntitySensorDefinition.hpp
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
 * @brief MC class EntitySensorDefinition.
 *
 */
class EntitySensorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYSENSORDEFINITION
public:
    class EntitySensorDefinition& operator=(class EntitySensorDefinition const &) = delete;
    EntitySensorDefinition(class EntitySensorDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0EntitySensorDefinition\@\@QEAA\@XZ
     */
    MCAPI EntitySensorDefinition();
    /**
     * @symbol  ?initialize\@EntitySensorDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVEntitySensorComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class EntitySensorComponent &) const;
    /**
     * @symbol  ?buildSchema\@EntitySensorDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VEntitySensorDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EntitySensorDefinition>> &);

};