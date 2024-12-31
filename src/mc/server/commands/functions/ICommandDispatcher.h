#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
// clang-format on

class ICommandDispatcher {
public:
    // prevent constructor by default
    ICommandDispatcher& operator=(ICommandDispatcher const&);
    ICommandDispatcher(ICommandDispatcher const&);
    ICommandDispatcher();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ICommandDispatcher() = default;

    // vIndex: 1
    virtual int performCommand(::CommandOrigin const&, ::Command&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
