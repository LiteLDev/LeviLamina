#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NPCDialogueData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9349ec;
    ::ll::UntypedStorage<1, 1>  mUnk7d68c6;
    ::ll::UntypedStorage<8, 32> mUnka3d7d9;
    ::ll::UntypedStorage<8, 32> mUnk2a60d1;
    ::ll::UntypedStorage<8, 32> mUnk6eaaa9;
    ::ll::UntypedStorage<8, 48> mUnk1a1d89;
    // NOLINTEND

public:
    // prevent constructor by default
    NPCDialogueData& operator=(NPCDialogueData const&);
    NPCDialogueData(NPCDialogueData const&);
    NPCDialogueData();
};
