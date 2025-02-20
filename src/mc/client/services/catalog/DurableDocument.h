#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DurableDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1208> mUnk81c89b;
    ::ll::UntypedStorage<8, 1248> mUnkc2b3b2;
    // NOLINTEND

public:
    // prevent constructor by default
    DurableDocument& operator=(DurableDocument const&);
    DurableDocument(DurableDocument const&);
    DurableDocument();
};
