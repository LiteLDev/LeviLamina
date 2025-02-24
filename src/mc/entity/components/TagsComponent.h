#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/components/TagsComponentBase.h"

template <typename T>
class TagsComponent : public TagsComponentBase {
public:
    T mTagSetID;
};