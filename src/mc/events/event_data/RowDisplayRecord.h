#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct RowDisplayRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb743d6;
    ::ll::UntypedStorage<8, 32> mUnkaf2972;
    ::ll::UntypedStorage<8, 32> mUnk9aa3ac;
    ::ll::UntypedStorage<4, 4>  mUnke67fc0;
    ::ll::UntypedStorage<4, 4>  mUnk4f0ed9;
    ::ll::UntypedStorage<4, 4>  mUnk4b3b1a;
    ::ll::UntypedStorage<1, 1>  mUnkd535d5;
    ::ll::UntypedStorage<1, 1>  mUnk4326d1;
    ::ll::UntypedStorage<8, 24> mUnk67c72b;
    // NOLINTEND

public:
    // prevent constructor by default
    RowDisplayRecord& operator=(RowDisplayRecord const&);
    RowDisplayRecord(RowDisplayRecord const&);
    RowDisplayRecord();
};

} // namespace Social::Events
