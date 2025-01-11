#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/DispatcherInterface.h"

namespace Bedrock::Http {

class DispatcherProcess : public ::Bedrock::Http::DispatcherInterface,
                          public ::std::enable_shared_from_this<::Bedrock::Http::DispatcherProcess> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk757a87;
    // NOLINTEND

public:
    // prevent constructor by default
    DispatcherProcess& operator=(DispatcherProcess const&);
    DispatcherProcess(DispatcherProcess const&);
    DispatcherProcess();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DispatcherProcess() /*override*/;

    // vIndex: 2
    virtual void initialize();

    // vIndex: 3
    virtual void shutdown();

    // vIndex: 4
    virtual void suspend();

    // vIndex: 5
    virtual void resume();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DispatcherProcess(::std::shared_ptr<::Bedrock::Http::DispatcherProcess> childProcess);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Bedrock::Http::DispatcherProcess> childProcess);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initialize();

    MCAPI void $shutdown();

    MCAPI void $suspend();

    MCAPI void $resume();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
