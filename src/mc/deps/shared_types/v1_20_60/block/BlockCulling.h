#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Facing.h"

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
        ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
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
            ::ll::TypedStorage<8, 32, ::std::string>                         mBoneName;
            ::ll::TypedStorage<4, 8, ::std::optional<int>>                   mCubeIndex;
            ::ll::TypedStorage<2, 4, ::std::optional<::SharedTypes::Facing>> mFace;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::SharedTypes::v1_20_60::BlockCulling::Rule::GeometryPart> mGeometryPart;
        ::ll::TypedStorage<2, 2, ::SharedTypes::Facing>                                      mDirectionToCheckAgainst;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_20_60::BlockCulling::Description>         mDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_60::BlockCulling::Rule>> mRules;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
