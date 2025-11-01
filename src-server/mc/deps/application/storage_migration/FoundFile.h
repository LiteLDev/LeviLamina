#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::StorageMigration {

struct FoundFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk15e4a8;
    ::ll::UntypedStorage<8, 8> mUnkf3e2ab;
    // NOLINTEND

public:
    // prevent constructor by default
    FoundFile& operator=(FoundFile const&);
    FoundFile(FoundFile const&);
    FoundFile();

};

}
