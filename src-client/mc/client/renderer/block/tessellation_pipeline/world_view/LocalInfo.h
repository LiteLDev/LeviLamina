#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/BrightnessPair.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace ClientBlockPipeline::WorldView {

struct LocalInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>         mBlock;
    ::ll::TypedStorage<1, 2, ::BrightnessPair const> mLight;
    ::ll::TypedStorage<1, 1, bool const>             mIsExternal;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalInfo& operator=(LocalInfo const&);
    LocalInfo(LocalInfo const&);
    LocalInfo();
};

} // namespace ClientBlockPipeline::WorldView
