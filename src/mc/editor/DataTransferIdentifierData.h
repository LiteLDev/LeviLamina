#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct DataTransferIdentifierData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7055e4;
    ::ll::UntypedStorage<1, 1>  mUnk9bbbc0;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferIdentifierData& operator=(DataTransferIdentifierData const&);
    DataTransferIdentifierData(DataTransferIdentifierData const&);
    DataTransferIdentifierData();
};

} // namespace Editor::Services
