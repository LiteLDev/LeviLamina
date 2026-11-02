#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

namespace Bedrock::Resources {

class SpecStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnk2c0d96;
    ::ll::UntypedStorage<8, 32>  mUnk5ca609;
    ::ll::UntypedStorage<8, 64>  mUnk48847a;
    // NOLINTEND

public:
    // prevent constructor by default
    SpecStorage& operator=(SpecStorage const&);
    SpecStorage(SpecStorage const&);
    SpecStorage();
};

} // namespace Bedrock::Resources
