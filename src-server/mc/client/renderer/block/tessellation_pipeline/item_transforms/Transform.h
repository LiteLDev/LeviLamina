#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline::ItemTransforms {

struct Transform {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk204686;
    ::ll::UntypedStorage<4, 64> mUnkb48925;
    // NOLINTEND

public:
    // prevent constructor by default
    Transform& operator=(Transform const&);
    Transform(Transform const&);
    Transform();
};

} // namespace ClientBlockPipeline::ItemTransforms
