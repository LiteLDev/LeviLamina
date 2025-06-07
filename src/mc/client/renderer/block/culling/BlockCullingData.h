#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCullingData {
public:
    // BlockCullingData inner types declare
    // clang-format off
    struct CullingRule;
    // clang-format on

    // BlockCullingData inner types define
    struct CullingRule {
    public:
        // CullingRule inner types declare
        // clang-format off
        struct GeometryPart;
        // clang-format on

        // CullingRule inner types define
        enum class Condition : uchar {
            Default              = 0,
            SameCullingLayer     = 1,
            SameBlock            = 2,
            SameBlockPermutation = 3,
        };

        struct GeometryPart {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk9bb609;
            ::ll::UntypedStorage<4, 4>  mUnkbdd225;
            ::ll::UntypedStorage<1, 1>  mUnk1ab2e4;
            // NOLINTEND

        public:
            // prevent constructor by default
            GeometryPart& operator=(GeometryPart const&);
            GeometryPart(GeometryPart const&);
            GeometryPart();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk54878d;
        ::ll::UntypedStorage<1, 1>  mUnk24dd3a;
        ::ll::UntypedStorage<8, 40> mUnk23f61d;
        // NOLINTEND

    public:
        // prevent constructor by default
        CullingRule& operator=(CullingRule const&);
        CullingRule(CullingRule const&);
        CullingRule();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk35b5fa;
    ::ll::UntypedStorage<8, 24> mUnkfc93e8;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCullingData& operator=(BlockCullingData const&);
    BlockCullingData(BlockCullingData const&);
    BlockCullingData();
};
