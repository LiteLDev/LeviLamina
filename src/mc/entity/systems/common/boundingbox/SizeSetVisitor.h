#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ShouldUpdateBoundingBoxRequestComponent.h"

namespace UpdateBoundingBox {

class SizeSetVisitor {
public:
    // prevent constructor by default
    SizeSetVisitor& operator=(SizeSetVisitor const&);
    SizeSetVisitor(SizeSetVisitor const&);
    SizeSetVisitor();

public:
    // NOLINTBEGIN
    // symbol: ??RSizeSetVisitor@UpdateBoundingBox@@QEAAXAEBUUpdateFromValue@ShouldUpdateBoundingBoxRequestComponent@@@Z
    MCAPI void operator()(struct ShouldUpdateBoundingBoxRequestComponent::UpdateFromValue const&);

    // NOLINTEND
};

}; // namespace UpdateBoundingBox
