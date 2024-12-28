#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MovementDataExtractionUtility {

struct MovementSnapshotComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk8fa7a9;
    ::ll::UntypedStorage<1, 1>   mUnk909d69;
    ::ll::UntypedStorage<1, 1>   mUnkfba5b6;
    ::ll::UntypedStorage<4, 4>   mUnkaddc03;
    ::ll::UntypedStorage<4, 4>   mUnka7cd33;
    ::ll::UntypedStorage<4, 4>   mUnk7f3a7d;
    ::ll::UntypedStorage<4, 4>   mUnkc8b53c;
    ::ll::UntypedStorage<4, 4>   mUnk9b55e4;
    ::ll::UntypedStorage<4, 4>   mUnkdcf52d;
    ::ll::UntypedStorage<4, 4>   mUnkbc2d7f;
    ::ll::UntypedStorage<4, 4>   mUnk655015;
    ::ll::UntypedStorage<4, 4>   mUnk470ef4;
    ::ll::UntypedStorage<4, 4>   mUnk7a5b2e;
    ::ll::UntypedStorage<4, 4>   mUnk81c817;
    ::ll::UntypedStorage<4, 8>   mUnkc192bd;
    ::ll::UntypedStorage<4, 4>   mUnk77af84;
    ::ll::UntypedStorage<4, 4>   mUnk6f0fde;
    ::ll::UntypedStorage<4, 4>   mUnkc3b56c;
    ::ll::UntypedStorage<4, 4>   mUnka62503;
    ::ll::UntypedStorage<4, 4>   mUnkc2462c;
    ::ll::UntypedStorage<4, 4>   mUnk20f622;
    ::ll::UntypedStorage<4, 4>   mUnkb3a3bf;
    ::ll::UntypedStorage<4, 4>   mUnkd6a7c7;
    ::ll::UntypedStorage<4, 4>   mUnkc22eef;
    ::ll::UntypedStorage<4, 4>   mUnk9a7831;
    ::ll::UntypedStorage<4, 8>   mUnkd6e592;
    ::ll::UntypedStorage<4, 8>   mUnkec4f09;
    ::ll::UntypedStorage<8, 8>   mUnk7e8ad0;
    ::ll::UntypedStorage<4, 8>   mUnk9f5e3f;
    ::ll::UntypedStorage<4, 8>   mUnk1f80d3;
    ::ll::UntypedStorage<4, 8>   mUnk6ced02;
    ::ll::UntypedStorage<4, 8>   mUnkda0888;
    ::ll::UntypedStorage<4, 8>   mUnk607132;
    ::ll::UntypedStorage<4, 8>   mUnk3c1cf5;
    ::ll::UntypedStorage<4, 8>   mUnk11d9bc;
    ::ll::UntypedStorage<4, 8>   mUnk4102a5;
    ::ll::UntypedStorage<4, 8>   mUnkb451ea;
    ::ll::UntypedStorage<4, 8>   mUnkf726d8;
    ::ll::UntypedStorage<4, 8>   mUnk615382;
    ::ll::UntypedStorage<4, 4>   mUnkb0450e;
    ::ll::UntypedStorage<4, 12>  mUnkbe52e5;
    ::ll::UntypedStorage<4, 12>  mUnk92d17b;
    ::ll::UntypedStorage<4, 12>  mUnkf8a3ba;
    ::ll::UntypedStorage<4, 12>  mUnk5335d5;
    ::ll::UntypedStorage<4, 12>  mUnk6e5575;
    ::ll::UntypedStorage<4, 12>  mUnk6c32a0;
    ::ll::UntypedStorage<4, 12>  mUnkd70513;
    ::ll::UntypedStorage<4, 16>  mUnk1fee59;
    ::ll::UntypedStorage<8, 16>  mUnk5bcd09;
    ::ll::UntypedStorage<4, 20>  mUnk618eb6;
    ::ll::UntypedStorage<8, 16>  mUnk3bf9dc;
    ::ll::UntypedStorage<8, 24>  mUnkff91d9;
    ::ll::UntypedStorage<8, 24>  mUnk6587d6;
    ::ll::UntypedStorage<4, 24>  mUnk7f917c;
    ::ll::UntypedStorage<8, 24>  mUnk5bd1cb;
    ::ll::UntypedStorage<8, 16>  mUnk2540fe;
    ::ll::UntypedStorage<8, 16>  mUnk8cd0f9;
    ::ll::UntypedStorage<4, 24>  mUnk65769d;
    ::ll::UntypedStorage<8, 24>  mUnk15d7d5;
    ::ll::UntypedStorage<4, 32>  mUnkc0b9c9;
    ::ll::UntypedStorage<4, 36>  mUnk75c6c8;
    ::ll::UntypedStorage<4, 40>  mUnkba7c80;
    ::ll::UntypedStorage<8, 48>  mUnk4e5dd6;
    ::ll::UntypedStorage<4, 48>  mUnkccce64;
    ::ll::UntypedStorage<8, 56>  mUnk97019d;
    ::ll::UntypedStorage<8, 56>  mUnkcc34f4;
    ::ll::UntypedStorage<8, 56>  mUnkee5855;
    ::ll::UntypedStorage<4, 68>  mUnkc563d3;
    ::ll::UntypedStorage<8, 80>  mUnkcf510d;
    ::ll::UntypedStorage<8, 88>  mUnk2a0baf;
    ::ll::UntypedStorage<8, 88>  mUnk27f3f6;
    ::ll::UntypedStorage<8, 136> mUnk93b58c;
    ::ll::UntypedStorage<8, 168> mUnk3a040c;
    ::ll::UntypedStorage<8, 112> mUnke83d64;
    ::ll::UntypedStorage<8, 24>  mUnkac54aa;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementSnapshotComponent& operator=(MovementSnapshotComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MovementSnapshotComponent();

    MCAPI MovementSnapshotComponent(::MovementDataExtractionUtility::MovementSnapshotComponent&&);

    MCAPI MovementSnapshotComponent(::MovementDataExtractionUtility::MovementSnapshotComponent const&);

    MCAPI ::MovementDataExtractionUtility::MovementSnapshotComponent&
    operator=(::MovementDataExtractionUtility::MovementSnapshotComponent&&);

    MCAPI ~MovementSnapshotComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::MovementDataExtractionUtility::MovementSnapshotComponent&&);

    MCAPI void* $ctor(::MovementDataExtractionUtility::MovementSnapshotComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace MovementDataExtractionUtility
