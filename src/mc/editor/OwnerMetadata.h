#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Coroutine {

struct OwnerMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf47931;
    ::ll::UntypedStorage<8, 32> mUnk1dc201;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnerMetadata& operator=(OwnerMetadata const&);
    OwnerMetadata(OwnerMetadata const&);
    OwnerMetadata();
};

} // namespace Editor::Coroutine
