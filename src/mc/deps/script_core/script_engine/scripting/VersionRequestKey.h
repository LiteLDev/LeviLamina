#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct VersionRequestKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk392781;
    ::ll::UntypedStorage<8, 32> mUnk2fa9c5;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionRequestKey& operator=(VersionRequestKey const&);
    VersionRequestKey(VersionRequestKey const&);
    VersionRequestKey();
};

} // namespace Scripting
