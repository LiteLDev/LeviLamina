#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MessageItemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkd4c03b;
    ::ll::UntypedStorage<8, 32>  mUnkec9b4b;
    ::ll::UntypedStorage<8, 136> mUnk71c457;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageItemData& operator=(MessageItemData const&);
    MessageItemData(MessageItemData const&);
    MessageItemData();
};
