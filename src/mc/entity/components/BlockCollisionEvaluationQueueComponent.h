#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCollisionEvaluationQueueComponent {
public:
    // BlockCollisionEvaluationQueueComponent inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // BlockCollisionEvaluationQueueComponent inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk683b92;
        ::ll::UntypedStorage<4, 4>  mUnkb26012;
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk16bec1;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCollisionEvaluationQueueComponent& operator=(BlockCollisionEvaluationQueueComponent const&);
    BlockCollisionEvaluationQueueComponent(BlockCollisionEvaluationQueueComponent const&);
    BlockCollisionEvaluationQueueComponent();
};
