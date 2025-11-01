#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Transactions {

struct BlockChangedOperationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc782e0;
    ::ll::UntypedStorage<4, 4> mUnkff7df9;
    ::ll::UntypedStorage<8, 8> mUnkb7fdc1;
    ::ll::UntypedStorage<4, 4> mUnkbd361a;
    ::ll::UntypedStorage<4, 4> mUnk8ddbfd;
    ::ll::UntypedStorage<8, 8> mUnkfc1311;
    ::ll::UntypedStorage<4, 12> mUnk188650;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockChangedOperationData& operator=(BlockChangedOperationData const&);
    BlockChangedOperationData(BlockChangedOperationData const&);
    BlockChangedOperationData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockChangedOperationData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
