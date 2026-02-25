#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ViewId.h"
#include "mc/client/gui/oreui/views/FrameId.h"
#include "mc/platform/threading/Mutex.h"

namespace OreUI {

class FramesToPaintQueue {
public:
    // FramesToPaintQueue inner types declare
    // clang-format off
    struct ViewFrame;
    // clang-format on

    // FramesToPaintQueue inner types define
    struct ViewFrame {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::OreUI::ViewId>  viewId;
        ::ll::TypedStorage<4, 4, ::OreUI::FrameId> frameId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                           mMutex;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FramesToPaintQueue::ViewFrame>> mFrames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::OreUI::FrameId> popAll(::OreUI::ViewId viewId);

    MCAPI ~FramesToPaintQueue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
