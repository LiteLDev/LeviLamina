#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ConnectionDefinition {
public:
    // ConnectionDefinition inner types define
    enum class PortBusyFallbackPolicy : int {
        UseRandom = 0,
        Fail      = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk164613;
    ::ll::UntypedStorage<2, 2> mUnk959b3f;
    ::ll::UntypedStorage<4, 4> mUnk45e051;
    ::ll::UntypedStorage<4, 4> mUnk12ee42;
    ::ll::UntypedStorage<4, 4> mUnk3d4e2a;
    ::ll::UntypedStorage<1, 1> mUnka76eeb;
    ::ll::UntypedStorage<1, 1> mUnk7d688e;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionDefinition& operator=(ConnectionDefinition const&);
    ConnectionDefinition(ConnectionDefinition const&);
    ConnectionDefinition();
};
