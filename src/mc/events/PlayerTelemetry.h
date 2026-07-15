#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class PlayerTelemetry {
public:
    // PlayerTelemetry inner types declare
    // clang-format off
    struct nowFunc;
    // clang-format on

    // PlayerTelemetry inner types define
    struct nowFunc {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke716c1;
    ::ll::UntypedStorage<8, 64> mUnk53b940;
    ::ll::UntypedStorage<8, 64> mUnk6f8dfa;
    ::ll::UntypedStorage<8, 64> mUnk6ece61;
    ::ll::UntypedStorage<8, 64> mUnkd91fc1;
    ::ll::UntypedStorage<8, 64> mUnk7bdf26;
    ::ll::UntypedStorage<8, 64> mUnk953895;
    ::ll::UntypedStorage<8, 64> mUnke031eb;
    ::ll::UntypedStorage<8, 64> mUnkae0859;
    ::ll::UntypedStorage<8, 64> mUnk743504;
    ::ll::UntypedStorage<8, 24> mUnk9c704b;
    ::ll::UntypedStorage<8, 64> mUnk1ff91e;
    ::ll::UntypedStorage<8, 16> mUnkfa52ad;
    ::ll::UntypedStorage<8, 8>  mUnk7ed562;
    ::ll::UntypedStorage<8, 8>  mUnk2c6cf6;
    ::ll::UntypedStorage<8, 64> mUnkbc1121;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTelemetry& operator=(PlayerTelemetry const&);
    PlayerTelemetry(PlayerTelemetry const&);
    PlayerTelemetry();
};

} // namespace Social::Events
