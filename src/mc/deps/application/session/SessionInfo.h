#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SessionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd1ebd7;
    ::ll::UntypedStorage<8, 32> mUnkd9e956;
    ::ll::UntypedStorage<8, 32> mUnk5a1ed1;
    ::ll::UntypedStorage<8, 32> mUnkdc6067;
    ::ll::UntypedStorage<8, 32> mUnk2fa3c9;
    ::ll::UntypedStorage<8, 32> mUnkc9ca4e;
    ::ll::UntypedStorage<8, 16> mUnk46f4f1;
    ::ll::UntypedStorage<8, 8>  mUnk519224;
    ::ll::UntypedStorage<8, 8>  mUnk6a042c;
    ::ll::UntypedStorage<4, 8>  mUnkc1616b;
    ::ll::UntypedStorage<8, 32> mUnkcdddba;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionInfo(SessionInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SessionInfo();

    MCNAPI ::Bedrock::SessionInfo& operator=(::Bedrock::SessionInfo const&);

    MCNAPI ::Bedrock::SessionInfo& operator=(::Bedrock::SessionInfo&&);

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
