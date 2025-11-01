#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk277d7f;
    ::ll::UntypedStorage<4, 4> mUnkb55a6f;
    ::ll::UntypedStorage<8, 32> mUnk401808;
    ::ll::UntypedStorage<8, 32> mUnk4f77ed;
    ::ll::UntypedStorage<8, 32> mUnkc05b2e;
    ::ll::UntypedStorage<8, 32> mUnk6ff4ae;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestResult(GameTestResult const&);
    GameTestResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::GameTestResult& operator=(::GameTestResult&&);

    MCNAPI ::GameTestResult& operator=(::GameTestResult const&);

    MCNAPI bool operator==(::GameTestResult const& rhs) const;

    MCNAPI ~GameTestResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
