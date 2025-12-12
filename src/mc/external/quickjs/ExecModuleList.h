#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExecModuleList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3ceb6a;
    ::ll::UntypedStorage<4, 4> mUnkfdfce0;
    ::ll::UntypedStorage<4, 4> mUnked182a;
    // NOLINTEND

public:
    // prevent constructor by default
    ExecModuleList& operator=(ExecModuleList const&);
    ExecModuleList(ExecModuleList const&);
    ExecModuleList();
};
