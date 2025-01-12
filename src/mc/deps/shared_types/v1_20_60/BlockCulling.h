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
    struct Contents;
    // clang-format on

    // BlockCulling inner types define
    struct Contents {
    public:
        // Contents inner types declare
        // clang-format off
        struct Description;
        struct Rule;
        // clang-format on

        // Contents inner types define
        struct Description {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk6fd166;
            // NOLINTEND

        public:
            // prevent constructor by default
            Description(Description const&);
            Description();

        public:
            // member functions
            // NOLINTBEGIN
            MCFOLD ::SharedTypes::v1_20_60::BlockCulling::Contents::Description&
            operator=(::SharedTypes::v1_20_60::BlockCulling::Contents::Description&&);

            MCFOLD ::SharedTypes::v1_20_60::BlockCulling::Contents::Description&
            operator=(::SharedTypes::v1_20_60::BlockCulling::Contents::Description const&);

            MCAPI ~Description();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCFOLD void $dtor();
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
                ::ll::UntypedStorage<8, 32> mUnk722f3b;
                ::ll::UntypedStorage<4, 8>  mUnka6431b;
                ::ll::UntypedStorage<2, 4>  mUnke6ec3c;
                // NOLINTEND

            public:
                // prevent constructor by default
                GeometryPart(GeometryPart const&);
                GeometryPart();

            public:
                // member functions
                // NOLINTBEGIN
                MCAPI ::SharedTypes::v1_20_60::BlockCulling::Contents::Rule::GeometryPart&
                operator=(::SharedTypes::v1_20_60::BlockCulling::Contents::Rule::GeometryPart const&);

                MCAPI ::SharedTypes::v1_20_60::BlockCulling::Contents::Rule::GeometryPart&
                operator=(::SharedTypes::v1_20_60::BlockCulling::Contents::Rule::GeometryPart&&);
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 48> mUnkcf8fbb;
            ::ll::UntypedStorage<2, 2>  mUnkb9cd09;
            // NOLINTEND

        public:
            // prevent constructor by default
            Rule(Rule const&);
            Rule();

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI ::SharedTypes::v1_20_60::BlockCulling::Contents::Rule&
            operator=(::SharedTypes::v1_20_60::BlockCulling::Contents::Rule const&);

            MCAPI ::SharedTypes::v1_20_60::BlockCulling::Contents::Rule&
            operator=(::SharedTypes::v1_20_60::BlockCulling::Contents::Rule&&);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk42746d;
        ::ll::UntypedStorage<8, 24> mUnkd0d530;
        // NOLINTEND

    public:
        // prevent constructor by default
        Contents(Contents const&);
        Contents();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::SharedTypes::v1_20_60::BlockCulling::Contents&
        operator=(::SharedTypes::v1_20_60::BlockCulling::Contents&&);

        MCAPI ::SharedTypes::v1_20_60::BlockCulling::Contents&
        operator=(::SharedTypes::v1_20_60::BlockCulling::Contents const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6b4f1b;
    ::ll::UntypedStorage<8, 56> mUnke7f1ca;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCulling& operator=(BlockCulling const&);
    BlockCulling(BlockCulling const&);
    BlockCulling();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
