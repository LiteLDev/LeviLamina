#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AnimationEventComponent {
public:
    // AnimationEventComponent inner types declare
    // clang-format off
    struct AnimationStateData;
    // clang-format on

    // AnimationEventComponent inner types define
    struct AnimationStateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk5db3ef;
        ::ll::UntypedStorage<1, 1> mUnkd296f6;
        ::ll::UntypedStorage<1, 1> mUnkc892bb;
        // NOLINTEND

    public:
        // prevent constructor by default
        AnimationStateData& operator=(AnimationStateData const&);
        AnimationStateData(AnimationStateData const&);
        AnimationStateData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk41e453;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimationEventComponent& operator=(AnimationEventComponent const&);
    AnimationEventComponent(AnimationEventComponent const&);
    AnimationEventComponent();
};
