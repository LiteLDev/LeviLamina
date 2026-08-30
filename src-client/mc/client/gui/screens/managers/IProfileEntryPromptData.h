#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IProfileEntryPromptData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IProfileEntryPromptData();

    virtual bool allowedToOpenCheck() const = 0;

    virtual void callOnOpen() = 0;

    virtual void callOnClose() = 0;
    // NOLINTEND
};
