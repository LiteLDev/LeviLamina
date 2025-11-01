#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct BlockCulling {
public:
    // BlockCulling inner types declare
    // clang-format off
    struct Description;
    struct Rule;
    // clang-format on

    // BlockCulling inner types define
    struct Description {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk7d35d9;
        // NOLINTEND

    public:
        // prevent constructor by default
        Description& operator=(Description const&);
        Description(Description const&);
        Description();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SharedTypes::v1_20_60::BlockCulling::Description&
        operator=(::SharedTypes::v1_20_60::BlockCulling::Description&&);

        MCNAPI ~Description();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Rule {
    public:
        // Rule inner types declare
        // clang-format off
        struct GeometryPart;
        // clang-format on

        // Rule inner types define
        struct GeometryPart {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk1f8b89;
            ::ll::UntypedStorage<4, 8>  mUnk3ef3e6;
            ::ll::UntypedStorage<2, 4>  mUnk67ee93;
            // NOLINTEND

        public:
            // prevent constructor by default
            GeometryPart& operator=(GeometryPart const&);
            GeometryPart(GeometryPart const&);
            GeometryPart();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ::SharedTypes::v1_20_60::BlockCulling::Rule::GeometryPart&
            operator=(::SharedTypes::v1_20_60::BlockCulling::Rule::GeometryPart&&);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnk9db7e3;
        ::ll::UntypedStorage<2, 2>  mUnk2fc63e;
        // NOLINTEND

    public:
        // prevent constructor by default
        Rule& operator=(Rule const&);
        Rule(Rule const&);
        Rule();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SharedTypes::v1_20_60::BlockCulling::Rule& operator=(::SharedTypes::v1_20_60::BlockCulling::Rule&&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcd29ba;
    ::ll::UntypedStorage<8, 24> mUnk1cf3df;
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

} // namespace SharedTypes::v1_20_60
