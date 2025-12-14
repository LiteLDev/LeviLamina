#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IDebuggerController {
public:
    // IDebuggerController inner types define
    using MessageHandler = ::std::function<void(::std::string_view)>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDebuggerController() = default;

    virtual bool attach(bool, ::std::optional<::std::string>, ::std::function<void(::std::string_view)>) = 0;

    virtual void detach() = 0;

    virtual bool closed() const = 0;

    virtual void pumpMessages() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
