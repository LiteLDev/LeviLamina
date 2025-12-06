#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/RenderStage.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

namespace mce {

class RenderStageWithFrameBufferObject : public ::mce::RenderStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96>  mUnkafeb0d;
    ::ll::UntypedStorage<8, 104> mUnk50d734;
    ::ll::UntypedStorage<8, 104> mUnk81383b;
    ::ll::UntypedStorage<8, 8>   mUnkc3ec04;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderStageWithFrameBufferObject& operator=(RenderStageWithFrameBufferObject const&);
    RenderStageWithFrameBufferObject(RenderStageWithFrameBufferObject const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void preRender(::ScreenContext& screenContext) /*override*/;

    // vIndex: 6
    virtual void postRender(::ScreenContext& screenContext) /*override*/;

    // vIndex: 9
    virtual void setupStage(::ScreenContext& screenContext, bool const clearBuffer);

    // vIndex: 0
    virtual ~RenderStageWithFrameBufferObject() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderStageWithFrameBufferObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRender(::ScreenContext& screenContext);

    MCNAPI void $postRender(::ScreenContext& screenContext);

    MCNAPI void $setupStage(::ScreenContext& screenContext, bool const clearBuffer);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
