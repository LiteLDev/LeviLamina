#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {

struct BlockCulling {
public:
    // BlockCulling inner types declare
    // clang-format off
    struct Rule;
    // clang-format on

    // BlockCulling inner types define
    struct Rule {
    public:
        // Rule inner types define
        enum class Condition : int {
            NotDefined           = 0,
            SameCullingLayer     = 1,
            SameBlock            = 2,
            SameBlockPermutation = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnk8bb813;
        ::ll::UntypedStorage<4, 8>  mUnk54eeb9;
        ::ll::UntypedStorage<1, 1>  mUnke10792;
        ::ll::UntypedStorage<2, 2>  mUnk587179;
        // NOLINTEND

    public:
        // prevent constructor by default
        Rule(Rule const&);
        Rule();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SharedTypes::v1_21_80::BlockCulling::Rule& operator=(::SharedTypes::v1_21_80::BlockCulling::Rule&&);

        MCNAPI ::SharedTypes::v1_21_80::BlockCulling::Rule&
        operator=(::SharedTypes::v1_21_80::BlockCulling::Rule const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3c8943;
    ::ll::UntypedStorage<8, 24> mUnkf4d2c6;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCulling& operator=(BlockCulling const&);
    BlockCulling(BlockCulling const&);
    BlockCulling();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80
