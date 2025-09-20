#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ChunkBlenderUtil {

struct AttenuationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk9ea586;
    ::ll::UntypedStorage<4, 4>   mUnk38a120;
    ::ll::UntypedStorage<4, 164> mUnk47ef9b;
    ::ll::UntypedStorage<2, 192> mUnkd68cef;
    ::ll::UntypedStorage<1, 41>  mUnk8e6bab;
    // NOLINTEND

public:
    // prevent constructor by default
    AttenuationData& operator=(AttenuationData const&);
    AttenuationData(AttenuationData const&);
    AttenuationData();
};

} // namespace ChunkBlenderUtil
