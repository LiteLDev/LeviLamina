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
    MCAPI TlsSlot();

    MCAPI void* getValue() const;

    MCAPI void setValue(void* value);

    MCAPI ~TlsSlot();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Threading
