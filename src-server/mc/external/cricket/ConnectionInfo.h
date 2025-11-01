#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct ConnectionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk37f948;
    ::ll::UntypedStorage<1, 1> mUnk4315c0;
    ::ll::UntypedStorage<1, 1> mUnk113967;
    ::ll::UntypedStorage<1, 1> mUnk70d2a0;
    ::ll::UntypedStorage<8, 8> mUnk44ba1c;
    ::ll::UntypedStorage<8, 8> mUnkf8bbd3;
    ::ll::UntypedStorage<8, 8> mUnkec38bc;
    ::ll::UntypedStorage<8, 8> mUnk56bdfe;
    ::ll::UntypedStorage<8, 8> mUnkcc5834;
    ::ll::UntypedStorage<8, 8> mUnkc5fadb;
    ::ll::UntypedStorage<8, 8> mUnke2c421;
    ::ll::UntypedStorage<8, 8> mUnkea6b48;
    ::ll::UntypedStorage<8, 8> mUnka8f065;
    ::ll::UntypedStorage<8, 8> mUnk24cc6d;
    ::ll::UntypedStorage<8, 8> mUnk8abee7;
    ::ll::UntypedStorage<8, 8> mUnk995b1d;
    ::ll::UntypedStorage<8, 8> mUnk165a08;
    ::ll::UntypedStorage<8, 8> mUnkc8123b;
    ::ll::UntypedStorage<8, 8> mUnkf8f814;
    ::ll::UntypedStorage<8, 528> mUnkc43377;
    ::ll::UntypedStorage<8, 528> mUnkb9b735;
    ::ll::UntypedStorage<8, 8> mUnkea5fda;
    ::ll::UntypedStorage<4, 4> mUnke0ea8e;
    ::ll::UntypedStorage<8, 8> mUnkc5f5b9;
    ::ll::UntypedStorage<1, 1> mUnka0454a;
    ::ll::UntypedStorage<8, 8> mUnk25188b;
    ::ll::UntypedStorage<4, 8> mUnk129431;
    ::ll::UntypedStorage<8, 16> mUnke38a1e;
    ::ll::UntypedStorage<8, 16> mUnk461f65;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionInfo& operator=(ConnectionInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConnectionInfo();

    MCNAPI ConnectionInfo(::cricket::ConnectionInfo const&);

    MCNAPI ~ConnectionInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::ConnectionInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
