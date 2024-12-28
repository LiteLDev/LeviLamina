#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Url {

struct ComponentsView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3c0461;
    ::ll::UntypedStorage<8, 16> mUnk6c1f03;
    ::ll::UntypedStorage<8, 16> mUnkc5f673;
    ::ll::UntypedStorage<8, 16> mUnk6fbbab;
    ::ll::UntypedStorage<8, 16> mUnk70faf8;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentsView& operator=(ComponentsView const&);
    ComponentsView(ComponentsView const&);
    ComponentsView();
};

} // namespace Util::Url
