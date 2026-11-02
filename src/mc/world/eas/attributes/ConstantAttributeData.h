#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct ConstantAttributeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 28> mUnke09bc5;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantAttributeData& operator=(ConstantAttributeData const&);
    ConstantAttributeData(ConstantAttributeData const&);
    ConstantAttributeData();
};

} // namespace EAS
