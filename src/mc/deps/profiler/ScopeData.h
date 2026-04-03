#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profile::Whisker {

struct ScopeData {
public:
    // ScopeData inner types declare
    // clang-format off
    struct Historical;
    struct Recent;
    // clang-format on

    // ScopeData inner types define
    struct Historical {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk3410a4;
        ::ll::UntypedStorage<8, 24> mUnk62193b;
        ::ll::UntypedStorage<8, 24> mUnk9224aa;
        ::ll::UntypedStorage<8, 24> mUnkc75bc3;
        // NOLINTEND

    public:
        // prevent constructor by default
        Historical& operator=(Historical const&);
        Historical(Historical const&);
        Historical();
    };

    struct Recent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkdfb54d;
        ::ll::UntypedStorage<8, 8> mUnkd49f1e;
        ::ll::UntypedStorage<8, 8> mUnkff70b9;
        ::ll::UntypedStorage<8, 8> mUnk7d9d61;
        // NOLINTEND

    public:
        // prevent constructor by default
        Recent& operator=(Recent const&);
        Recent(Recent const&);
        Recent();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkbdef23;
    ::ll::UntypedStorage<8, 32> mUnk456e68;
    ::ll::UntypedStorage<8, 96> mUnk225a4d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeData& operator=(ScopeData const&);
    ScopeData(ScopeData const&);
    ScopeData();
};

} // namespace Bedrock::Profile::Whisker
