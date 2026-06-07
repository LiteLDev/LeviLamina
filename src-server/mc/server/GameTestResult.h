#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct GameTestResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk204eba;
    ::ll::UntypedStorage<4, 4>  mUnkb55a6f;
    ::ll::UntypedStorage<8, 32> mUnk19282e;
    ::ll::UntypedStorage<8, 32> mUnkcfa1f2;
    ::ll::UntypedStorage<8, 32> mUnke85467;
    ::ll::UntypedStorage<8, 32> mUnk37d3dd;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameTestResult(::GameTestResult const&);

    MCNAPI ::GameTestResult& operator=(::GameTestResult&&);

    MCNAPI ::GameTestResult& operator=(::GameTestResult const&);

    MCNAPI bool operator==(::GameTestResult const& rhs) const;

    MCNAPI ~GameTestResult();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GameTestResult const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
