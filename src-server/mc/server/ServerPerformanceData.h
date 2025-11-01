#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

struct ServerPerformanceData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk90f384;
    ::ll::UntypedStorage<8, 48> mUnkeac554;
    ::ll::UntypedStorage<8, 48> mUnk63f31f;
    ::ll::UntypedStorage<8, 48> mUnkf38210;
    ::ll::UntypedStorage<8, 48> mUnkb8e3b5;
    ::ll::UntypedStorage<8, 48> mUnk8a5b76;
    ::ll::UntypedStorage<8, 48> mUnk637e78;
    ::ll::UntypedStorage<8, 16> mUnke76a06;
    ::ll::UntypedStorage<8, 48> mUnkc61a06;
    ::ll::UntypedStorage<8, 184> mUnkf9461b;
    ::ll::UntypedStorage<8, 184> mUnk33527a;
    ::ll::UntypedStorage<8, 184> mUnk37c092;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPerformanceData& operator=(ServerPerformanceData const&);
    ServerPerformanceData(ServerPerformanceData const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerPerformanceData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerPerformanceData();
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
