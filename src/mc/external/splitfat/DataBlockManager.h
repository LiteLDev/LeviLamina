#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class DataBlockManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka754a4;
    ::ll::UntypedStorage<4, 4>  mUnk8182c1;
    ::ll::UntypedStorage<4, 4>  mUnkcf0609;
    ::ll::UntypedStorage<8, 8>  mUnkcdef1b;
    ::ll::UntypedStorage<8, 8>  mUnka97153;
    ::ll::UntypedStorage<8, 16> mUnk79716a;
    ::ll::UntypedStorage<8, 88> mUnk6e2751;
    // NOLINTEND

public:
    // prevent constructor by default
    DataBlockManager& operator=(DataBlockManager const&);
    DataBlockManager(DataBlockManager const&);
    DataBlockManager();
};

} // namespace SFAT
