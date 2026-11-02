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
    MCNAPI TlsSlot();

    MCNAPI void* getValue() const;

    MCNAPI void setValue(void* value);

    MCNAPI ~TlsSlot();
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

} // namespace Bedrock::Threading
