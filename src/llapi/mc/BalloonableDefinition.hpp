/**
 * @file  BalloonableDefinition.hpp
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
 * @brief MC class BalloonableDefinition.
 *
 */
class BalloonableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BALLOONABLEDEFINITION
public:
    class BalloonableDefinition& operator=(class BalloonableDefinition const &) = delete;
    BalloonableDefinition(class BalloonableDefinition const &) = delete;
    BalloonableDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@BalloonableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBalloonableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BalloonableDefinition>> &);

};