/**
 * @file  RailMovementDefinition.hpp
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
 * @brief MC class RailMovementDefinition.
 *
 */
class RailMovementDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILMOVEMENTDEFINITION
public:
    class RailMovementDefinition& operator=(class RailMovementDefinition const &) = delete;
    RailMovementDefinition(class RailMovementDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0RailMovementDefinition\@\@QEAA\@XZ
     */
    MCAPI RailMovementDefinition();
    /**
     * @symbol  ?initialize\@RailMovementDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVRailMovementComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class RailMovementComponent &) const;
    /**
     * @symbol  ?buildSchema\@RailMovementDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VRailMovementDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RailMovementDefinition>> &);

};