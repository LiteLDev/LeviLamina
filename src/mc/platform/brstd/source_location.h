#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd {

struct source_location {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka5a291;
    ::ll::UntypedStorage<8, 8> mUnka63487;
    ::ll::UntypedStorage<4, 4> mUnk6299c8;
    ::ll::UntypedStorage<4, 4> mUnk7d4674;
    ::ll::UntypedStorage<4, 4> mUnkd253b0;
    ::ll::UntypedStorage<4, 4> mUnk3d56d9;
    // NOLINTEND

public:
    // prevent constructor by default
    source_location& operator=(source_location const&);
    source_location(source_location const&);
    source_location();
};

} // namespace brstd
