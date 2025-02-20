#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class ValueWrapper {
public:
    // ValueWrapper inner types declare
    // clang-format off
    struct NumberInfo;
    struct StringInfo;
    // clang-format on

    // ValueWrapper inner types define
    struct NumberInfo {
    public:
        // member variables
        // NOLINTBEGIN
        union {
            ::ll::UntypedStorage<8, 8> mUnk2d9cad;
            ::ll::UntypedStorage<8, 8> mUnk69087f;
        };
        ::ll::UntypedStorage<1, 1> mUnk9b5c2a;
        // NOLINTEND

    public:
        // prevent constructor by default
        NumberInfo& operator=(NumberInfo const&);
        NumberInfo(NumberInfo const&);
        NumberInfo();
    };

    struct StringInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk1197f1;
        ::ll::UntypedStorage<4, 4> mUnk970063;
        ::ll::UntypedStorage<4, 4> mUnkd0118a;
        // NOLINTEND

    public:
        // prevent constructor by default
        StringInfo& operator=(StringInfo const&);
        StringInfo(StringInfo const&);
        StringInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7795a7;
    union {
        ::ll::UntypedStorage<8, 16> mUnk7f22b7;
        ::ll::UntypedStorage<1, 1>  mUnk97e533;
        ::ll::UntypedStorage<8, 16> mUnka7ef63;
        ::ll::UntypedStorage<8, 64> mUnk5b5602;
        ::ll::UntypedStorage<8, 64> mUnk827f1a;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    ValueWrapper& operator=(ValueWrapper const&);
    ValueWrapper(ValueWrapper const&);
    ValueWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ValueWrapper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
