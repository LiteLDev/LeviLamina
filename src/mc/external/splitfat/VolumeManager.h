#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class VolumeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 576> mUnka97247;
    ::ll::UntypedStorage<8, 8>   mUnk2d746a;
    ::ll::UntypedStorage<8, 8>   mUnk543408;
    ::ll::UntypedStorage<8, 88>  mUnk90d463;
    ::ll::UntypedStorage<4, 12>  mUnk976c03;
    ::ll::UntypedStorage<8, 16>  mUnk1ba473;
    ::ll::UntypedStorage<8, 232> mUnk2c17ae;
    ::ll::UntypedStorage<8, 16>  mUnkdc0c77;
    ::ll::UntypedStorage<4, 4>   mUnka6b91b;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeManager& operator=(VolumeManager const&);
    VolumeManager(VolumeManager const&);
    VolumeManager();
};

} // namespace SFAT
