#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ShouldUpdateBoundingBoxRequestComponent.h"

namespace UpdateBoundingBox {

struct SizeSetVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8a678a;
    // NOLINTEND

public:
    // prevent constructor by default
    SizeSetVisitor& operator=(SizeSetVisitor const&);
    SizeSetVisitor(SizeSetVisitor const&);
    SizeSetVisitor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void operator()(::ShouldUpdateBoundingBoxRequestComponent::UpdateFromValue const& data);
    // NOLINTEND
};

} // namespace UpdateBoundingBox
