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
    ::ll::UntypedStorage<8, 8> mUnkcf2467;
    // NOLINTEND

public:
    // prevent constructor by default
    AppIsland& operator=(AppIsland const&);
    AppIsland(AppIsland const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AppIsland() /*override*/;

    virtual ushort getId() /*override*/;

    virtual bool start() /*override*/;

    virtual bool suspend() /*override*/;

    virtual bool resume() /*override*/;

    virtual bool stop() /*override*/;

    virtual void mainUpdate() /*override*/;

    virtual void processActivationArguments(::Bedrock::ActivationArguments const& args) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AppIsland();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
