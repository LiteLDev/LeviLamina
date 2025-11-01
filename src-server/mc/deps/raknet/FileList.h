#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class FileList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnked6204;
    ::ll::UntypedStorage<8, 16> mUnkc354fa;
    // NOLINTEND

public:
    // prevent constructor by default
    FileList& operator=(FileList const&);
    FileList(FileList const&);
    FileList();
};

} // namespace RakNet
