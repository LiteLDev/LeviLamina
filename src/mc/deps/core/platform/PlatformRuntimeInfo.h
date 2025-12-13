#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct PlatformRuntimeInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4bd95d;
    ::ll::UntypedStorage<8, 32> mUnke73ade;
    ::ll::UntypedStorage<8, 32> mUnk80bf7f;
    ::ll::UntypedStorage<8, 32> mUnka3d8c7;
    ::ll::UntypedStorage<8, 32> mUnk67da68;
    ::ll::UntypedStorage<8, 32> mUnk9e8c61;
    ::ll::UntypedStorage<8, 32> mUnkc37d3a;
    ::ll::UntypedStorage<8, 32> mUnkfebc5d;
    ::ll::UntypedStorage<8, 32> mUnkad06c0;
    ::ll::UntypedStorage<8, 32> mUnkbb283c;
    ::ll::UntypedStorage<8, 32> mUnk4f6d87;
    ::ll::UntypedStorage<4, 4>  mUnk7be153;
    ::ll::UntypedStorage<8, 8>  mUnke26e46;
    ::ll::UntypedStorage<8, 8>  mUnke184bc;
    ::ll::UntypedStorage<8, 8>  mUnk8f8931;
    ::ll::UntypedStorage<8, 8>  mUnkc866ca;
    ::ll::UntypedStorage<8, 8>  mUnk7da328;
    ::ll::UntypedStorage<8, 8>  mUnk109670;
    ::ll::UntypedStorage<8, 8>  mUnkb58086;
    ::ll::UntypedStorage<4, 4>  mUnk752258;
    ::ll::UntypedStorage<4, 4>  mUnk7f42d3;
    ::ll::UntypedStorage<4, 4>  mUnkfddc74;
    ::ll::UntypedStorage<4, 4>  mUnke6f100;
    ::ll::UntypedStorage<4, 4>  mUnkdb8438;
    ::ll::UntypedStorage<4, 4>  mUnk8fca59;
    ::ll::UntypedStorage<4, 4>  mUnka55450;
    ::ll::UntypedStorage<4, 4>  mUnkb1ab31;
    ::ll::UntypedStorage<1, 1>  mUnkc18517;
    ::ll::UntypedStorage<1, 1>  mUnk46af60;
    ::ll::UntypedStorage<1, 1>  mUnkd61296;
    ::ll::UntypedStorage<1, 1>  mUnk5eb061;
    ::ll::UntypedStorage<1, 1>  mUnka19644;
    ::ll::UntypedStorage<1, 1>  mUnk345f9e;
    ::ll::UntypedStorage<1, 1>  mUnkc40ac2;
    ::ll::UntypedStorage<1, 1>  mUnk441fb3;
    ::ll::UntypedStorage<1, 1>  mUnka8890e;
    ::ll::UntypedStorage<1, 1>  mUnk6e1bf7;
    ::ll::UntypedStorage<1, 1>  mUnk629fc5;
    ::ll::UntypedStorage<1, 1>  mUnkec4292;
    ::ll::UntypedStorage<1, 1>  mUnk60321b;
    ::ll::UntypedStorage<1, 1>  mUnk4c0235;
    ::ll::UntypedStorage<1, 1>  mUnkf9b459;
    ::ll::UntypedStorage<1, 1>  mUnk913b7e;
    ::ll::UntypedStorage<1, 1>  mUnkbb179f;
    ::ll::UntypedStorage<1, 1>  mUnk22b989;
    ::ll::UntypedStorage<1, 1>  mUnkc6204f;
    ::ll::UntypedStorage<1, 1>  mUnk10ec6e;
    ::ll::UntypedStorage<1, 1>  mUnk683774;
    ::ll::UntypedStorage<8, 32> mUnk62e7ad;
    ::ll::UntypedStorage<8, 32> mUnkb4c090;
    ::ll::UntypedStorage<8, 32> mUnkbd5f0a;
    ::ll::UntypedStorage<8, 32> mUnkb7559f;
    ::ll::UntypedStorage<8, 32> mUnk687dba;
    ::ll::UntypedStorage<8, 32> mUnkeec7af;
    ::ll::UntypedStorage<8, 32> mUnk7ee4aa;
    ::ll::UntypedStorage<8, 32> mUnkfbb0f4;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformRuntimeInfo& operator=(PlatformRuntimeInfo const&);
    PlatformRuntimeInfo(PlatformRuntimeInfo const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlatformRuntimeInfo();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlatformRuntimeInfo();
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

} // namespace Bedrock
