#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/puv/puv_load_data/LoadResultWithTiming.h"

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
            SameCullingLayer     = 0,
            SameBlock            = 1,
            SameBlockPermutation = 2,
        };

        struct GeometryPart {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 32, ::std::string> mBoneName;
            ::ll::TypedStorage<4, 4, int>            mCubeIndex;
            ::ll::TypedStorage<1, 1, uchar>          mFaceToCull;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar>                                                       mNeighborToCheck;
        ::ll::TypedStorage<1, 2, ::std::optional<::BlockCullingData::CullingRule::Condition>> mCondition;
        ::ll::TypedStorage<1, 1, bool>                                                        mCullAgainstFullAndOpaque;
        ::ll::TypedStorage<8, 40, ::BlockCullingData::CullingRule::GeometryPart>              mGeometryPart;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~CullingRule();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                 mCullIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockCullingData::CullingRule>> mCullingRules;
    ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming>            mLoadTime;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCullingData& operator=(BlockCullingData const&);
    BlockCullingData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockCullingData(::BlockCullingData const&);

    MCAPI ~BlockCullingData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockCullingData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
