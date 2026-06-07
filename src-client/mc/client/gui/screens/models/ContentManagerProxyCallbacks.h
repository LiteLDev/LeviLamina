#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
struct ContentItem;
// clang-format on

struct ContentManagerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::ContentItem>(::PackManifest&)>>
        mGetContentItemByManifest;
    // NOLINTEND
};
