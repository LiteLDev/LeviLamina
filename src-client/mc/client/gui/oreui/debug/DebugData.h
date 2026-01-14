#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace OreUI {

struct DebugData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 208> mUnk73c39d;
    ::ll::UntypedStorage<8, 40>  mUnk63d30e;
    ::ll::UntypedStorage<1, 4>   mUnkc945fb;
    ::ll::UntypedStorage<8, 40>  mUnk4f9430;
    ::ll::UntypedStorage<8, 96>  mUnkecc0bc;
    ::ll::UntypedStorage<8, 56>  mUnk5b563c;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugData& operator=(DebugData const&);
    DebugData(DebugData const&);
    DebugData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DebugData() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
