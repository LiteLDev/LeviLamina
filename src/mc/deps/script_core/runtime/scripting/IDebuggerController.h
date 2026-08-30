#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IDebuggerController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDebuggerController();

    virtual bool attach(
        bool                                      performHandshake,
        ::std::optional<::std::string>            targetModuleUuid,
        ::std::function<void(::std::string_view)> handler
    ) = 0;

    virtual void detach() = 0;

    virtual bool closed() const = 0;

    virtual void pumpMessages() = 0;
    // NOLINTEND
};

} // namespace Scripting
