#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct TestFileStorageAreaOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1e9e56;
    ::ll::UntypedStorage<8, 16> mUnkdfc54f;
    ::ll::UntypedStorage<8, 16> mUnk195030;
    ::ll::UntypedStorage<4, 8>  mUnkc202c7;
    ::ll::UntypedStorage<8, 64> mUnk4221c8;
    ::ll::UntypedStorage<8, 64> mUnkd4ea61;
    // NOLINTEND

public:
    // prevent constructor by default
    TestFileStorageAreaOptions& operator=(TestFileStorageAreaOptions const&);
    TestFileStorageAreaOptions(TestFileStorageAreaOptions const&);
    TestFileStorageAreaOptions();
};

} // namespace Bedrock
