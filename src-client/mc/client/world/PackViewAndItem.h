#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContentView;
struct PackContentItem;
// clang-format on

namespace World {

struct PackViewAndItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContentView*>                        mContentView;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PackContentItem>> mContentItem;
    // NOLINTEND
};

} // namespace World
