#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IProfileEntryPromptData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IProfileEntryPromptData() = default;

    virtual bool allowedToOpenCheck() const = 0;

    virtual void callOnOpen() = 0;

    virtual void callOnClose() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
