#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CraftUpdateResultItemClientEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkf0a2e7;
    ::ll::UntypedStorage<8, 128> mUnk45df5a;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftUpdateResultItemClientEvent& operator=(CraftUpdateResultItemClientEvent const&);
    CraftUpdateResultItemClientEvent(CraftUpdateResultItemClientEvent const&);
    CraftUpdateResultItemClientEvent();
};
