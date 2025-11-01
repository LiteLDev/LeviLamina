#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
// clang-format on

class ICommandDispatcher {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ICommandDispatcher() = default;

    // vIndex: 1
    virtual int performCommand(::CommandOrigin const&, ::Command&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
