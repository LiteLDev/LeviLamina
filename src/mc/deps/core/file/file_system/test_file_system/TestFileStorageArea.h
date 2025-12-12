#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct TestFileStorageArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd18be7;
    ::ll::UntypedStorage<8, 32> mUnk2c1649;
    ::ll::UntypedStorage<8, 8>  mUnke0343f;
    // NOLINTEND

public:
    // prevent constructor by default
    TestFileStorageArea& operator=(TestFileStorageArea const&);
    TestFileStorageArea(TestFileStorageArea const&);
    TestFileStorageArea();
};

} // namespace Bedrock
