#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct GameTestReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk8ed0c3;
    ::ll::UntypedStorage<4, 4>  mUnk8a5383;
    ::ll::UntypedStorage<4, 4>  mUnk16f680;
    ::ll::UntypedStorage<4, 4>  mUnkf2f840;
    ::ll::UntypedStorage<4, 4>  mUnkfff9e0;
    ::ll::UntypedStorage<1, 1>  mUnkb0d7d3;
    ::ll::UntypedStorage<8, 24> mUnka6d25a;
    ::ll::UntypedStorage<8, 24> mUnk7deb6f;
    ::ll::UntypedStorage<4, 4>  mUnk97bf5a;
    ::ll::UntypedStorage<4, 4>  mUnkfdfd01;
    ::ll::UntypedStorage<8, 32> mUnk53165d;
    ::ll::UntypedStorage<8, 32> mUnkabbb85;
    ::ll::UntypedStorage<1, 1>  mUnkaf5c0a;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestReport(GameTestReport const&);
    GameTestReport();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::GameTestReport& operator=(::GameTestReport const&);

    MCNAPI ::GameTestReport& operator=(::GameTestReport&&);

    MCNAPI ~GameTestReport();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
