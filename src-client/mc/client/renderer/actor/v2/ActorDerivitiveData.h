#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/ActorIndex.h"
#include "mc/client/renderer/actor/v2/ActorUniformBits.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

struct ActorDerivitiveData {
public:
    // ActorDerivitiveData inner types declare
    // clang-format off
    struct TileLightInformation;
    struct UniformEntry;
    // clang-format on

    // ActorDerivitiveData inner types define
    struct TileLightInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>              mPos;
        ::ll::TypedStorage<4, 24, ::AABB>              mAabb;
        ::ll::TypedStorage<4, 4, float>                mHeightOffset;
        bool                                           mIsItem             : 1;
        bool                                           mHasUpsideDownLight : 1;
        ::ll::TypedStorage<8, 8, ::BlockSource const*> mBlockSource;
        // NOLINTEND
    };

    struct UniformEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::ActorIndex>       mActorIdx;
        ::ll::TypedStorage<4, 4, uint>               mEnabledBits;
        ::ll::TypedStorage<4, 4, uint>               mColorOverrideOffset;
        ::ll::TypedStorage<1, 1, ::ActorUniformBits> mBits;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDerivitiveData::TileLightInformation>> mTileLightInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::vec4>>                                 mColorOverrides;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDerivitiveData::UniformEntry>>         mUniformEntries;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorDerivitiveData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
