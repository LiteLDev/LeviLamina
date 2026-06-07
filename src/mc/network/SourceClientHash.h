#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
// clang-format on

class SourceClientHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkff3bb8;
    // NOLINTEND

public:
    // prevent constructor by default
    SourceClientHash& operator=(SourceClientHash const&);
    SourceClientHash(SourceClientHash const&);
    SourceClientHash();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SourceClientHash(::NetworkIdentifier source, ::SubClientId subClientId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetworkIdentifier source, ::SubClientId subClientId);
    // NOLINTEND
};
