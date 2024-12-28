#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class FATDataManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf97ca7;
    ::ll::UntypedStorage<8, 24> mUnke03955;
    ::ll::UntypedStorage<8, 8>  mUnk146a06;
    ::ll::UntypedStorage<8, 88> mUnk25a6df;
    // NOLINTEND

public:
    // prevent constructor by default
    FATDataManager& operator=(FATDataManager const&);
    FATDataManager(FATDataManager const&);
    FATDataManager();
};

} // namespace SFAT
