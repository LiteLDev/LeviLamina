#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct RenderControlMetadata;
struct ScreenEvent;
// clang-format on

struct ClippedControlMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderControlMetadata>>        controlsToUpdate;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> clippedGrids;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScreenEvent>>                  clipStateChangeEvents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ClippedControlMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
