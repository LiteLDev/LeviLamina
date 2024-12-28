#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace personaScreen {

class CustomizationSelectionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk21eb8b;
    ::ll::UntypedStorage<8, 16> mUnk82f15d;
    ::ll::UntypedStorage<8, 16> mUnk888ad4;
    ::ll::UntypedStorage<8, 32> mUnkc29bee;
    ::ll::UntypedStorage<8, 32> mUnkaeeded;
    ::ll::UntypedStorage<4, 4>  mUnk2bafc1;
    ::ll::UntypedStorage<4, 4>  mUnkd0d507;
    ::ll::UntypedStorage<1, 1>  mUnk54fba7;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomizationSelectionInfo& operator=(CustomizationSelectionInfo const&);
    CustomizationSelectionInfo(CustomizationSelectionInfo const&);
    CustomizationSelectionInfo();
};

} // namespace personaScreen
