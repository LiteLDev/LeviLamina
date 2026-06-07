#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct ClipboardWriteOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkbc4dfc;
    ::ll::UntypedStorage<1, 1>  mUnkd6ab32;
    ::ll::UntypedStorage<4, 12> mUnke4a3f2;
    ::ll::UntypedStorage<4, 12> mUnk6db396;
    ::ll::UntypedStorage<1, 1>  mUnk24de0e;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipboardWriteOptions& operator=(ClipboardWriteOptions const&);
    ClipboardWriteOptions(ClipboardWriteOptions const&);
    ClipboardWriteOptions();
};

} // namespace Editor::Services
