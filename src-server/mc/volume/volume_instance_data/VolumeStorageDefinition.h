#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VolumeInstanceData {

struct VolumeStorageDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc0514c;
    ::ll::UntypedStorage<8, 32> mUnkd5307d;
    ::ll::UntypedStorage<4, 12> mUnk531db0;
    ::ll::UntypedStorage<4, 12> mUnk71dbde;
    ::ll::UntypedStorage<4, 4> mUnk5328d3;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeStorageDefinition& operator=(VolumeStorageDefinition const&);
    VolumeStorageDefinition(VolumeStorageDefinition const&);
    VolumeStorageDefinition();

};

}
