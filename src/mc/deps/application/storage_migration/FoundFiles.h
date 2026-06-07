#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StorageMigration {

struct FoundFiles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk35f12b;
    ::ll::UntypedStorage<8, 64> mUnkfab8a5;
    ::ll::UntypedStorage<8, 8>  mUnk9caf3b;
    ::ll::UntypedStorage<8, 8>  mUnk2b41f2;
    // NOLINTEND

public:
    // prevent constructor by default
    FoundFiles& operator=(FoundFiles const&);
    FoundFiles(FoundFiles const&);
    FoundFiles();
};

} // namespace Bedrock::StorageMigration
