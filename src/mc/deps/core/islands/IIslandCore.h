#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ActivationArguments; }
// clang-format on

namespace Bedrock {

class IIslandCore {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IIslandCore();

    virtual ushort getId() = 0;

    virtual bool start() = 0;

    virtual bool suspend() = 0;

    virtual bool resume() = 0;

    virtual bool stop() = 0;

    virtual void mainUpdate() = 0;

    virtual void processActivationArguments(::Bedrock::ActivationArguments const& args) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
