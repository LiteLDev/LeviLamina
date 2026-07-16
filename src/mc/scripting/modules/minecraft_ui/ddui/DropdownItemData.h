#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

struct DropdownItemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk8badb1;
    ::ll::UntypedStorage<8, 8>   mUnkcf4071;
    ::ll::UntypedStorage<8, 224> mUnkb42eab;
    // NOLINTEND

public:
    // prevent constructor by default
    DropdownItemData& operator=(DropdownItemData const&);
    DropdownItemData(DropdownItemData const&);
    DropdownItemData();
};

} // namespace ScriptModuleMinecraftServerUI
