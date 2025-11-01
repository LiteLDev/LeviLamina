#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DebugRenderPositionQueueComponent {
public:
    // DebugRenderPositionQueueComponent inner types declare
    // clang-format off
    struct DebugRenderInfo;
    // clang-format on
    
    // DebugRenderPositionQueueComponent inner types define
    struct DebugRenderInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk3cbe8e;
        ::ll::UntypedStorage<4, 16> mUnk583566;
        ::ll::UntypedStorage<8, 32> mUnk90aa06;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        DebugRenderInfo& operator=(DebugRenderInfo const&);
        DebugRenderInfo(DebugRenderInfo const&);
        DebugRenderInfo();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::queue<::DebugRenderPositionQueueComponent::DebugRenderInfo, ::std::deque<::DebugRenderPositionQueueComponent::DebugRenderInfo>>> mPositions;
    // NOLINTEND

};
