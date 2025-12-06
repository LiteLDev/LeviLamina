#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class MeshContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1ecfc2;
    ::ll::UntypedStorage<8, 8>  mUnk6f0b26;
    ::ll::UntypedStorage<8, 8>  mUnk5c0a3a;
    ::ll::UntypedStorage<8, 8>  mUnka4e607;
    ::ll::UntypedStorage<8, 8>  mUnk9baa8e;
    ::ll::UntypedStorage<8, 8>  mUnke3a0a1;
    ::ll::UntypedStorage<8, 8>  mUnka98713;
    ::ll::UntypedStorage<8, 8>  mUnkac255d;
    ::ll::UntypedStorage<8, 24> mUnkd28e86;
    ::ll::UntypedStorage<4, 20> mUnk38f9f1;
    ::ll::UntypedStorage<1, 1>  mUnkb86ed9;
    ::ll::UntypedStorage<1, 1>  mUnka7d412;
    ::ll::UntypedStorage<1, 1>  mUnk722167;
    ::ll::UntypedStorage<1, 1>  mUnke6b8b2;
    ::ll::UntypedStorage<1, 1>  mUnkd7dad6;
    ::ll::UntypedStorage<1, 1>  mUnkbea5b6;
    ::ll::UntypedStorage<1, 1>  mUnk9f6be5;
    ::ll::UntypedStorage<1, 1>  mUnk87167e;
    ::ll::UntypedStorage<1, 1>  mUnk9dbe7d;
    ::ll::UntypedStorage<1, 1>  mUnk1ec87c;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshContext& operator=(MeshContext const&);
    MeshContext(MeshContext const&);
    MeshContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MeshContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
