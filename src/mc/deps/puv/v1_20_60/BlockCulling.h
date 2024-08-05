#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_60 {

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
            // prevent constructor by default
            Description& operator=(Description const&);
            Description(Description const&);
            Description();

        public:
            // NOLINTBEGIN
            MCAPI ~Description();

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
                // prevent constructor by default
                GeometryPart(GeometryPart const&);
                GeometryPart();

            public:
                // NOLINTBEGIN
                MCAPI struct Puv::v1_20_60::BlockCulling::Contents::Rule::GeometryPart&
                operator=(struct Puv::v1_20_60::BlockCulling::Contents::Rule::GeometryPart&&);

                MCAPI struct Puv::v1_20_60::BlockCulling::Contents::Rule::GeometryPart&
                operator=(struct Puv::v1_20_60::BlockCulling::Contents::Rule::GeometryPart const&);

                // NOLINTEND
            };

        public:
            // prevent constructor by default
            Rule(Rule const&);
            Rule();

        public:
            // NOLINTBEGIN
            MCAPI struct Puv::v1_20_60::BlockCulling::Contents::Rule&
            operator=(struct Puv::v1_20_60::BlockCulling::Contents::Rule&&);

            MCAPI struct Puv::v1_20_60::BlockCulling::Contents::Rule&
            operator=(struct Puv::v1_20_60::BlockCulling::Contents::Rule const&);

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        Contents(Contents const&);
        Contents();

    public:
        // NOLINTBEGIN
        MCAPI struct Puv::v1_20_60::BlockCulling::Contents& operator=(struct Puv::v1_20_60::BlockCulling::Contents&&);

        MCAPI struct Puv::v1_20_60::BlockCulling::Contents&
        operator=(struct Puv::v1_20_60::BlockCulling::Contents const&);

        MCAPI ~Contents();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockCulling& operator=(BlockCulling const&);
    BlockCulling(BlockCulling const&);
    BlockCulling();

public:
    // NOLINTBEGIN
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_60
