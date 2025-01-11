#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace Core {

class LoadTimeProfiler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkeffd94;
    ::ll::UntypedStorage<4, 4>   mUnkec42a1;
    ::ll::UntypedStorage<8, 24>  mUnkd556d0;
    ::ll::UntypedStorage<8, 296> mUnk58830a;
    ::ll::UntypedStorage<1, 1>   mUnka79572;
    ::ll::UntypedStorage<1, 1>   mUnkfa6b3f;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadTimeProfiler& operator=(LoadTimeProfiler const&);
    LoadTimeProfiler(LoadTimeProfiler const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoadTimeProfiler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LoadTimeProfiler();

    MCFOLD void setEnabled(bool enabled);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
