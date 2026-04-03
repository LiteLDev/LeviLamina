#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SessionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk80d1c0;
    ::ll::UntypedStorage<8, 32> mUnk645e34;
    ::ll::UntypedStorage<8, 32> mUnkdcdfd2;
    ::ll::UntypedStorage<8, 32> mUnkbc1fbb;
    ::ll::UntypedStorage<8, 32> mUnkffff9d;
    ::ll::UntypedStorage<8, 32> mUnkb92fea;
    ::ll::UntypedStorage<8, 16> mUnk296a2f;
    ::ll::UntypedStorage<8, 8>  mUnk519224;
    ::ll::UntypedStorage<8, 8>  mUnk6a042c;
    ::ll::UntypedStorage<4, 8>  mUnkc1616b;
    ::ll::UntypedStorage<8, 32> mUnk221f1b;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionInfo(SessionInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SessionInfo();

    MCNAPI ::Bedrock::SessionInfo& operator=(::Bedrock::SessionInfo&&);

    MCNAPI ::Bedrock::SessionInfo& operator=(::Bedrock::SessionInfo const&);

    MCNAPI bool operator==(::Bedrock::SessionInfo const& rhs) const;

    MCNAPI ~SessionInfo();
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
};

} // namespace Bedrock
