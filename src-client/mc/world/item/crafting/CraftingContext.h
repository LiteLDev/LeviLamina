#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class MapItemSavedData;
class TrimMaterialRegistry;
class TrimPatternRegistry;
struct ActorUniqueID;
struct ILevel;
// clang-format on

class CraftingContext {
public:
    // CraftingContext inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // CraftingContext inner types define
    class Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::TrimPatternRegistry> const>        mTrimPatternRegistry;
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::TrimMaterialRegistry const> const> mTrimMaterialRegistry;
        ::ll::TypedStorage<8, 32, ::BaseGameVersion>                                   mBaseGameVersion;
        ::ll::TypedStorage<8, 72, ::Experiments>                                       mExperiments;
        ::ll::TypedStorage<8, 64, ::std::function<::MapItemSavedData*(::ActorUniqueID)>>
            mGetMapSavedDataByActorUniqueId;
        ::ll::TypedStorage<8, 64, ::std::function<::MapItemSavedData*(::CompoundTag const*)>>
            mGetMapSavedDataByCampoundTag;
        ::ll::TypedStorage<8, 64, ::std::function<::ActorUniqueID(::ActorUniqueID, bool)>> mExpandMapByID;
        ::ll::TypedStorage<8, 64, ::std::function<bool(::ActorUniqueID, ::ActorUniqueID)>> mCopyAndLockMap;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit Impl(::Bedrock::NotNullNonOwnerPtr<::ILevel> level);

        MCAPI ~Impl();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ILevel> level);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftingContext::Impl>> mPimpl;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CraftingContext(::Bedrock::NotNullNonOwnerPtr<::ILevel> level);

    MCAPI ~CraftingContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ILevel> level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
