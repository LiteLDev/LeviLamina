#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
struct FrameRenderObject;
// clang-format on

namespace mce {

class RenderStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk59b11f;
    ::ll::UntypedStorage<4, 4>  mUnk77539e;
    ::ll::UntypedStorage<1, 1>  mUnk29f6ab;
    ::ll::UntypedStorage<1, 1>  mUnk7e2334;
    ::ll::UntypedStorage<1, 1>  mUnkc7b0fb;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderStage& operator=(RenderStage const&);
    RenderStage(RenderStage const&);
    RenderStage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RenderStage();

    // vIndex: 1
    virtual void preRenderUpdate(::ScreenContext& screenContext);

    // vIndex: 2
    virtual void postRenderUpdate(::ScreenContext& screenContext);

    // vIndex: 3
    virtual void preRender(::ScreenContext&) = 0;

    // vIndex: 4
    virtual void prepareFrame(::ScreenContext& screenContext);

    // vIndex: 5
    virtual void render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    // vIndex: 6
    virtual void postRender(::ScreenContext&);

    // vIndex: 7
    virtual bool shouldSkip() const;

    // vIndex: 8
    virtual bool shouldRender() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRenderUpdate(::ScreenContext& screenContext);

    MCNAPI void $postRenderUpdate(::ScreenContext& screenContext);

    MCNAPI void $prepareFrame(::ScreenContext& screenContext);

    MCNAPI void $render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    MCNAPI bool $shouldSkip() const;

    MCNAPI bool $shouldRender() const;
    // NOLINTEND
};

} // namespace mce
