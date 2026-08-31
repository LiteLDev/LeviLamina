#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

struct CustomFormButtonData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk927960;
    ::ll::UntypedStorage<8, 32>  mUnk21067e;
    ::ll::UntypedStorage<8, 224> mUnked9ea4;
    ::ll::UntypedStorage<8, 48>  mUnkd25605;
    ::ll::UntypedStorage<8, 40>  mUnkde4bb5;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomFormButtonData& operator=(CustomFormButtonData const&);
    CustomFormButtonData(CustomFormButtonData const&);
    CustomFormButtonData();
};

} // namespace ScriptModuleMinecraftServerUI
