#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

struct BufferDescriptionIdentifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfe4e90;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferDescriptionIdentifier& operator=(BufferDescriptionIdentifier const&);
    BufferDescriptionIdentifier(BufferDescriptionIdentifier const&);
    BufferDescriptionIdentifier();
};

} // namespace dragon
