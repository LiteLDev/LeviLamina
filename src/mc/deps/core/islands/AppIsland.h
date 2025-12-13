#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/islands/IIslandCore.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ActivationArguments; }
// clang-format on

namespace Bedrock {

class AppIsland : public ::Bedrock::IIslandCore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5bfdb3;
    // NOLINTEND

public:
    // prevent constructor by default
    AppIsland& operator=(AppIsland const&);
    AppIsland(AppIsland const&);
    AppIsland();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AppIsland() /*override*/;

    // vIndex: 1
    virtual ushort getId() /*override*/;

    // vIndex: 2
    virtual bool start() /*override*/;

    // vIndex: 3
    virtual bool suspend() /*override*/;

    // vIndex: 4
    virtual bool resume() /*override*/;

    // vIndex: 5
    virtual bool stop() /*override*/;

    // vIndex: 6
    virtual void mainUpdate() /*override*/;

    // vIndex: 7
    virtual void processActivationArguments(::Bedrock::ActivationArguments const& args) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ushort $getId();

    MCNAPI bool $start();

    MCNAPI bool $suspend();

    MCNAPI bool $resume();

    MCNAPI bool $stop();

    MCNAPI void $mainUpdate();

    MCNAPI void $processActivationArguments(::Bedrock::ActivationArguments const& args);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
