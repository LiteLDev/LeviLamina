#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct ShadowParameters {
public:
    // ShadowParameters inner types declare
    // clang-format off
    struct ShadowRange;
    // clang-format on

    // ShadowParameters inner types define
    struct ShadowRange {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk7f572a;
        ::ll::UntypedStorage<4, 4> mUnk6de3b8;
        // NOLINTEND

    public:
        // prevent constructor by default
        ShadowRange& operator=(ShadowRange const&);
        ShadowRange(ShadowRange const&);
        ShadowRange();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk5891a9;
    ::ll::UntypedStorage<4, 16> mUnk7d82bf;
    ::ll::UntypedStorage<4, 16> mUnk5605b2;
    ::ll::UntypedStorage<4, 16> mUnk8945ea;
    ::ll::UntypedStorage<1, 4>  mUnkf19df7;
    ::ll::UntypedStorage<4, 4>  mUnkb7a902;
    ::ll::UntypedStorage<4, 4>  mUnk66b071;
    ::ll::UntypedStorage<4, 4>  mUnk47a49e;
    ::ll::UntypedStorage<4, 8>  mUnk65890f;
    ::ll::UntypedStorage<4, 4>  mUnk4801d3;
    ::ll::UntypedStorage<4, 4>  mUnka5917a;
    ::ll::UntypedStorage<4, 16> mUnkab5b1a;
    ::ll::UntypedStorage<4, 16> mUnk9e9898;
    ::ll::UntypedStorage<4, 4>  mUnk68c9e9;
    ::ll::UntypedStorage<4, 4>  mUnkda5e24;
    ::ll::UntypedStorage<4, 4>  mUnkb1aea0;
    ::ll::UntypedStorage<4, 4>  mUnk4ad4d2;
    ::ll::UntypedStorage<1, 1>  mUnk27c571;
    ::ll::UntypedStorage<1, 1>  mUnkfe2562;
    ::ll::UntypedStorage<1, 1>  mUnkc971cf;
    ::ll::UntypedStorage<4, 4>  mUnk40598d;
    ::ll::UntypedStorage<4, 4>  mUnk93a7ef;
    ::ll::UntypedStorage<4, 4>  mUnk1b9a82;
    ::ll::UntypedStorage<4, 4>  mUnkf1ddbe;
    ::ll::UntypedStorage<4, 4>  mUnk4075c1;
    ::ll::UntypedStorage<1, 1>  mUnka816a8;
    bool                        mUnkc0d797 : 1;
    bool                        mUnkec249f : 1;
    bool                        mUnk63a5ec : 1;
    bool                        mUnk8c2808 : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    ShadowParameters& operator=(ShadowParameters const&);
    ShadowParameters(ShadowParameters const&);
    ShadowParameters();
};

} // namespace mce::framebuilder
