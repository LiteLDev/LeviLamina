#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

class UvTransform {
public:
    // UvTransform inner types define
    enum class BoxType : uchar {
        CustomBoxWithLegacyTopRotation = 0,
        CustomBoxNoLegacyTopRotation   = 1,
        MinecraftFullBlock             = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnk9fa5b7;
    // NOLINTEND

public:
    // prevent constructor by default
    UvTransform& operator=(UvTransform const&);
    UvTransform(UvTransform const&);
    UvTransform();
};

} // namespace ClientBlockPipeline
