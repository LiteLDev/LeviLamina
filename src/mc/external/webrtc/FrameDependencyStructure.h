#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RenderResolution.h"

namespace webrtc {

struct FrameDependencyStructure {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk17d6b4;
    ::ll::UntypedStorage<4, 4>  mUnkf7f0e5;
    ::ll::UntypedStorage<4, 4>  mUnk227561;
    ::ll::UntypedStorage<8, 48> mUnk44b88a;
    ::ll::UntypedStorage<8, 40> mUnkf53829;
    ::ll::UntypedStorage<8, 24> mUnk65aae2;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameDependencyStructure& operator=(FrameDependencyStructure const&);
    FrameDependencyStructure();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FrameDependencyStructure(::webrtc::FrameDependencyStructure const&);

    MCNAPI ~FrameDependencyStructure();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FrameDependencyStructure const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
