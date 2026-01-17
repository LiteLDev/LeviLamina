#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renoir/CommonRenderingLibraryParams.h"

namespace renoir {

struct RenderingLibraryParams : public ::renoir::CommonRenderingLibraryParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke5248c;
    ::ll::UntypedStorage<8, 8> mUnk9e4d58;
    ::ll::UntypedStorage<4, 4> mUnk3ea4fa;
    ::ll::UntypedStorage<8, 8> mUnkbdb56b;
    ::ll::UntypedStorage<8, 8> mUnk6bfec9;
    ::ll::UntypedStorage<8, 8> mUnk51a004;
    ::ll::UntypedStorage<8, 8> mUnkcb525f;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderingLibraryParams& operator=(RenderingLibraryParams const&);
    RenderingLibraryParams(RenderingLibraryParams const&);
    RenderingLibraryParams();
};

} // namespace renoir
