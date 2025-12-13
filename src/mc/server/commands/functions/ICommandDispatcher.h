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
    virtual ~ICommandDispatcher() = default;

    virtual int performCommand(::CommandOrigin const&, ::Command&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
