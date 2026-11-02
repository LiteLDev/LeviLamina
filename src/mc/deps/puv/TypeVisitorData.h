#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

struct TypeVisitorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9faff4;
    ::ll::UntypedStorage<8, 64> mUnk3c55ae;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeVisitorData& operator=(TypeVisitorData const&);
    TypeVisitorData(TypeVisitorData const&);
    TypeVisitorData();
};

} // namespace Puv::internal
