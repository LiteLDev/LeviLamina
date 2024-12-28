#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::RenderHelper {

struct NameTag {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnke1fbd8;
    ::ll::UntypedStorage<8, 32> mUnk340d2c;
    ::ll::UntypedStorage<4, 16> mUnke7aadc;
    // NOLINTEND

public:
    // prevent constructor by default
    NameTag& operator=(NameTag const&);
    NameTag(NameTag const&);
    NameTag();
};

} // namespace Editor::RenderHelper
