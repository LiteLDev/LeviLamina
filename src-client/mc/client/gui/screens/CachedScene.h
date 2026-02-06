#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LayoutManager;
class UIControlFactory;
struct VisualTree;
// clang-format on

struct CachedScene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VisualTree>>        mVisualTree;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControlFactory>> mControlFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LayoutManager>>     mLayoutManager;
    // NOLINTEND
};
