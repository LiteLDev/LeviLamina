#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InsideBubbleColumnBlockComponent {
public:
    // prevent constructor by default
    InsideBubbleColumnBlockComponent& operator=(InsideBubbleColumnBlockComponent const&);
    InsideBubbleColumnBlockComponent(InsideBubbleColumnBlockComponent const&);
    InsideBubbleColumnBlockComponent();

public:
    // NOLINTBEGIN
    MCAPI struct InsideBubbleColumnBlockComponent& operator=(struct InsideBubbleColumnBlockComponent&&);

    // NOLINTEND
};
