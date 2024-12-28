#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class TagsComponent {
public:
    // prevent constructor by default
    TagsComponent& operator=(TagsComponent const&);
    TagsComponent(TagsComponent const&);
    TagsComponent();
};
