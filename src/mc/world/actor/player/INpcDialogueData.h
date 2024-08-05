#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct INpcDialogueData {
public:
    // prevent constructor by default
    INpcDialogueData& operator=(INpcDialogueData const&);
    INpcDialogueData(INpcDialogueData const&);
    INpcDialogueData();

public:
    // NOLINTBEGIN
    MCVAPI std::string const& getRawDialogueText() const;

    MCVAPI bool isRemoteFire();

    // NOLINTEND
};
