#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct ConnectionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk3b0027;
    ::ll::UntypedStorage<1, 1>   mUnkaaf693;
    ::ll::UntypedStorage<1, 1>   mUnk577733;
    ::ll::UntypedStorage<1, 1>   mUnkd52113;
    ::ll::UntypedStorage<8, 8>   mUnk2842bf;
    ::ll::UntypedStorage<8, 8>   mUnk21a098;
    ::ll::UntypedStorage<8, 8>   mUnk11382e;
    ::ll::UntypedStorage<8, 8>   mUnk46820c;
    ::ll::UntypedStorage<8, 8>   mUnk89e535;
    ::ll::UntypedStorage<8, 8>   mUnk59ff88;
    ::ll::UntypedStorage<8, 8>   mUnke0e60f;
    ::ll::UntypedStorage<8, 8>   mUnk2ce414;
    ::ll::UntypedStorage<8, 8>   mUnkb3cc88;
    ::ll::UntypedStorage<8, 8>   mUnk6ee0e3;
    ::ll::UntypedStorage<8, 8>   mUnk9892db;
    ::ll::UntypedStorage<8, 8>   mUnke02680;
    ::ll::UntypedStorage<8, 8>   mUnk3309c1;
    ::ll::UntypedStorage<8, 8>   mUnk857013;
    ::ll::UntypedStorage<8, 8>   mUnkc6b3f6;
    ::ll::UntypedStorage<8, 528> mUnkdad49f;
    ::ll::UntypedStorage<8, 528> mUnk8d66c2;
    ::ll::UntypedStorage<8, 8>   mUnk521881;
    ::ll::UntypedStorage<4, 4>   mUnkf01c9a;
    ::ll::UntypedStorage<8, 8>   mUnk1543fd;
    ::ll::UntypedStorage<1, 1>   mUnkf36a30;
    ::ll::UntypedStorage<8, 8>   mUnkffe382;
    ::ll::UntypedStorage<4, 8>   mUnk124529;
    ::ll::UntypedStorage<8, 16>  mUnka96eaa;
    ::ll::UntypedStorage<8, 16>  mUnk81fb6e;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionInfo& operator=(ConnectionInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConnectionInfo();

    MCNAPI ConnectionInfo(::webrtc::ConnectionInfo const&);

    MCNAPI ~ConnectionInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::ConnectionInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
