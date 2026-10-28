#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockUtils::FloodLevel {

struct FloodResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkec7329;
    ::ll::UntypedStorage<1, 1>  mUnk16052a;
    ::ll::UntypedStorage<1, 1>  mUnk84b0ad;
    ::ll::UntypedStorage<4, 12> mUnkd507cc;
    ::ll::UntypedStorage<8, 24> mUnk7a3177;
    ::ll::UntypedStorage<1, 1>  mUnk73b698;
    ::ll::UntypedStorage<4, 12> mUnkcf318c;
    ::ll::UntypedStorage<4, 12> mUnk4e84b5;
    ::ll::UntypedStorage<8, 8>  mUnk53261f;
    ::ll::UntypedStorage<4, 32> mUnk7c05d4;
    // NOLINTEND

public:
    // prevent constructor by default
    FloodResult& operator=(FloodResult const&);
    FloodResult(FloodResult const&);
    FloodResult();
};

} // namespace Editor::BlockUtils::FloodLevel
