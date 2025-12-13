#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct BlockSchematicPart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke04bbe;
    ::ll::UntypedStorage<8, 32> mUnkc3d03a;
    ::ll::UntypedStorage<1, 1>  mUnk729caa;
    ::ll::UntypedStorage<1, 2>  mUnk58f5e4;
    ::ll::UntypedStorage<1, 1>  mUnka8a9ef;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSchematicPart& operator=(BlockSchematicPart const&);
    BlockSchematicPart(BlockSchematicPart const&);
    BlockSchematicPart();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::ClientBlockPipeline::BlockSchematicPart& operator=(::ClientBlockPipeline::BlockSchematicPart&&);

    MCNAPI_C ~BlockSchematicPart();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
