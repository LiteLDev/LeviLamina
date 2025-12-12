#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class GroupToken {
public:
    // GroupToken inner types declare
    // clang-format off
    struct AnnotationData;
    struct CounterImplToken;
    struct ScopeImplToken;
    // clang-format on

    // GroupToken inner types define
    struct AnnotationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkfbfb91;
        ::ll::UntypedStorage<4, 4>  mUnkc70989;
        ::ll::UntypedStorage<8, 32> mUnk3677c3;
        // NOLINTEND

    public:
        // prevent constructor by default
        AnnotationData& operator=(AnnotationData const&);
        AnnotationData(AnnotationData const&);
        AnnotationData();
    };

    struct ScopeImplToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk913715;
        ::ll::UntypedStorage<8, 48> mUnk749021;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScopeImplToken& operator=(ScopeImplToken const&);
        ScopeImplToken(ScopeImplToken const&);
        ScopeImplToken();
    };

    struct CounterImplToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk5aea86;
        ::ll::UntypedStorage<1, 1> mUnkd199ca;
        // NOLINTEND

    public:
        // prevent constructor by default
        CounterImplToken& operator=(CounterImplToken const&);
        CounterImplToken(CounterImplToken const&);
        CounterImplToken();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2bbf36;
    ::ll::UntypedStorage<1, 1>  mUnkaff84b;
    ::ll::UntypedStorage<8, 48> mUnkfac06b;
    ::ll::UntypedStorage<8, 56> mUnkf5efac;
    ::ll::UntypedStorage<4, 8>  mUnk98783c;
    // NOLINTEND

public:
    // prevent constructor by default
    GroupToken& operator=(GroupToken const&);
    GroupToken(GroupToken const&);
    GroupToken();
};

} // namespace Core::Profile
