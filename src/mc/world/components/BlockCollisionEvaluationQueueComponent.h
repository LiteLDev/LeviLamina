#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCollisionEvaluationQueueComponent {

public:
    // prevent constructor by default
    BlockCollisionEvaluationQueueComponent& operator=(BlockCollisionEvaluationQueueComponent const&) = delete;
    BlockCollisionEvaluationQueueComponent(BlockCollisionEvaluationQueueComponent const&)            = delete;
    BlockCollisionEvaluationQueueComponent()                                                         = delete;
};
