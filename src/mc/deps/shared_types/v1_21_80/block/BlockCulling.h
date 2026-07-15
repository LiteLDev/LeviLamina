#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Facing.h"
#include "mc/deps/shared_types/v1_20_60/block/BlockCulling.h"

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
        ::ll::TypedStorage<8, 48, ::SharedTypes::v1_20_60::BlockCulling::Rule::GeometryPart>              mGeometryPart;
        ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::v1_21_80::BlockCulling::Rule::Condition>> mCondition;
        ::ll::TypedStorage<1, 1, bool>                  mCullAgainstFullAndOpaque;
        ::ll::TypedStorage<2, 2, ::SharedTypes::Facing> mDirectionToCheckAgainst;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_20_60::BlockCulling::Description>         mDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_80::BlockCulling::Rule>> mRules;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80
