#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Transactions {

struct EntityOperationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk25d71f;
    ::ll::UntypedStorage<8, 8> mUnk670f46;
    ::ll::UntypedStorage<8, 8> mUnk879540;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityOperationData& operator=(EntityOperationData const&);
    EntityOperationData(EntityOperationData const&);
    EntityOperationData();

};

}
