#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::ChunkDiag {

struct TotalChunkHealthScore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9c29bd;
    ::ll::UntypedStorage<8, 8> mUnk4d9550;
    ::ll::UntypedStorage<8, 8> mUnkbd5f30;
    ::ll::UntypedStorage<1, 1> mUnkdf5f58;
    ::ll::UntypedStorage<1, 1> mUnkfdcf0f;
    ::ll::UntypedStorage<8, 8> mUnk219de4;
    ::ll::UntypedStorage<8, 8> mUnk7efca6;
    // NOLINTEND

public:
    // prevent constructor by default
    TotalChunkHealthScore& operator=(TotalChunkHealthScore const&);
    TotalChunkHealthScore(TotalChunkHealthScore const&);
    TotalChunkHealthScore();
};

} // namespace Bedrock::ChunkDiag
