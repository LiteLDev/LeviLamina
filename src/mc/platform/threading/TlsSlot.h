#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/NonCopyable.h"

namespace Bedrock::Threading {

class TlsSlot : public ::Bedrock::NonCopyable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mKey;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TlsSlot();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Threading
