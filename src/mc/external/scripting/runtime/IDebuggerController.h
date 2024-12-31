#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IDebuggerController {
public:
    // prevent constructor by default
    IDebuggerController& operator=(IDebuggerController const&);
    IDebuggerController(IDebuggerController const&);
    IDebuggerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDebuggerController() = default;

    // vIndex: 1
    virtual bool attach(bool, ::std::optional<::std::string>, ::std::function<void(::std::string_view)>) = 0;

    // vIndex: 2
    virtual void detach() = 0;

    // vIndex: 3
    virtual bool closed() const = 0;

    // vIndex: 4
    virtual void pumpMessages() = 0;
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

} // namespace Scripting
