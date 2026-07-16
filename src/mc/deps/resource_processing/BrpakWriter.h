#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

class BrpakWriter {
public:
    // BrpakWriter inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // BrpakWriter inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk658377;
        ::ll::UntypedStorage<8, 24> mUnk4e6ce9;
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
        Entry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2f031e;
    // NOLINTEND

public:
    // prevent constructor by default
    BrpakWriter& operator=(BrpakWriter const&);
    BrpakWriter(BrpakWriter const&);
    BrpakWriter();
};

} // namespace Bedrock::Resources
