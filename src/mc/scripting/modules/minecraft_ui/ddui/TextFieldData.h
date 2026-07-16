#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

struct TextFieldData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkfbdb02;
    ::ll::UntypedStorage<8, 32>  mUnkdd57d9;
    ::ll::UntypedStorage<8, 224> mUnka98473;
    ::ll::UntypedStorage<8, 48>  mUnk1c93be;
    ::ll::UntypedStorage<8, 40>  mUnkea8a18;
    // NOLINTEND

public:
    // prevent constructor by default
    TextFieldData& operator=(TextFieldData const&);
    TextFieldData(TextFieldData const&);
    TextFieldData();
};

} // namespace ScriptModuleMinecraftServerUI
