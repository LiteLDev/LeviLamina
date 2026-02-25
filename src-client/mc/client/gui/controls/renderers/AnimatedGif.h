#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/gif/FrameDisposalMethod.h"
#include "mc/util/gif/Gif.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { struct Image; }
// clang-format on

class AnimatedGif {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::gif::Gif>                             mGifData;
    ::ll::TypedStorage<4, 4, uint>                                    mFrameIndex;
    ::ll::TypedStorage<1, 1, bool>                                    mFrameDirty;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastRenderedTime;
    ::ll::TypedStorage<4, 4, ::gif::FrameDisposalMethod>              mFrameDisposal;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::Color>>            mFrameCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::Color>>            mPrevFrameCache;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimatedGif& operator=(AnimatedGif const&);
    AnimatedGif(AnimatedGif const&);
    AnimatedGif();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::mce::Image makeCurrentFrame();

    MCAPI ::AnimatedGif& operator=(::AnimatedGif&&);

    MCAPI bool setAnimationProgress(::std::chrono::steady_clock::time_point now);

    MCAPI ~AnimatedGif();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
