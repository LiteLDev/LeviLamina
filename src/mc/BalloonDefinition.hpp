/**
 * @file  BalloonDefinition.hpp
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
 * @brief MC class BalloonDefinition.
 *
 */
class BalloonDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BALLOONDEFINITION
public:
    class BalloonDefinition& operator=(class BalloonDefinition const &) = delete;
    BalloonDefinition(class BalloonDefinition const &) = delete;
    BalloonDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@BalloonDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VBalloonDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BalloonDefinition>> &);

};