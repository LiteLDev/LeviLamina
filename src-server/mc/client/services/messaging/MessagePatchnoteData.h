#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MessagePatchnoteData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9bd0ca;
    ::ll::UntypedStorage<8, 32> mUnk44d937;
    ::ll::UntypedStorage<8, 32> mUnk221f5d;
    // NOLINTEND

public:
    // prevent constructor by default
    MessagePatchnoteData& operator=(MessagePatchnoteData const&);
    MessagePatchnoteData(MessagePatchnoteData const&);
    MessagePatchnoteData();

};
