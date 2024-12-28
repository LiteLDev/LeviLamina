#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockBakedMaterialDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke05803;
    ::ll::UntypedStorage<1, 1>  mUnkf24d4c;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockBakedMaterialDataComponent& operator=(BlockBakedMaterialDataComponent const&);
    BlockBakedMaterialDataComponent(BlockBakedMaterialDataComponent const&);
    BlockBakedMaterialDataComponent();
};
