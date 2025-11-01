#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StorageMigration {

struct FoundFiles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk19577e;
    ::ll::UntypedStorage<8, 8>  mUnk9caf3b;
    // NOLINTEND

public:
    // prevent constructor by default
    FoundFiles& operator=(FoundFiles const&);
    FoundFiles(FoundFiles const&);
    FoundFiles();
};

} // namespace Bedrock::StorageMigration
