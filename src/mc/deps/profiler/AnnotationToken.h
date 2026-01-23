#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class AnnotationToken {
public:
    // AnnotationToken inner types declare
    // clang-format off
    struct AnnotationData;
    struct CounterImplToken;
    struct ScopeImplToken;
    // clang-format on

    // AnnotationToken inner types define
    struct AnnotationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk39a3cb;
        ::ll::UntypedStorage<4, 4>  mUnke7dae9;
        ::ll::UntypedStorage<8, 32> mUnkae16e0;
        // NOLINTEND

    public:
        // prevent constructor by default
        AnnotationData& operator=(AnnotationData const&);
        AnnotationData(AnnotationData const&);
        AnnotationData();
    };

    struct CounterImplToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk1de006;
        ::ll::UntypedStorage<1, 3> mUnk6799cb;
        // NOLINTEND

    public:
        // prevent constructor by default
        CounterImplToken& operator=(CounterImplToken const&);
        CounterImplToken(CounterImplToken const&);
        CounterImplToken();
    };

    struct ScopeImplToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkdff518;
        ::ll::UntypedStorage<1, 3> mUnk4d206d;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScopeImplToken& operator=(ScopeImplToken const&);
        ScopeImplToken(ScopeImplToken const&);
        ScopeImplToken();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk672302;
    ::ll::UntypedStorage<1, 1>  mUnk3775c0;
    ::ll::UntypedStorage<8, 48> mUnk25c2cb;
    ::ll::UntypedStorage<4, 8>  mUnkb46ddc;
    ::ll::UntypedStorage<4, 8>  mUnk984e29;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnotationToken& operator=(AnnotationToken const&);
    AnnotationToken(AnnotationToken const&);
    AnnotationToken();
};

} // namespace Core::Profile
