#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Internal {

class DirectoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3e4712;
    ::ll::UntypedStorage<8, 8> mUnk4dd4bf;
    ::ll::UntypedStorage<8, 64> mUnk3eb97d;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryData& operator=(DirectoryData const&);
    DirectoryData(DirectoryData const&);
    DirectoryData();

};

}
