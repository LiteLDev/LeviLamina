#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class ILevel;
class MapItemSavedData;
class TrimMaterialRegistry;
class TrimPatternRegistry;
struct ActorUniqueID;
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
        ::ll::UntypedStorage<8, 16>  mUnkd10edc;
        ::ll::UntypedStorage<8, 16>  mUnke6135a;
        ::ll::UntypedStorage<8, 120> mUnkde9e64;
        ::ll::UntypedStorage<8, 72>  mUnk2c370e;
        ::ll::UntypedStorage<8, 64>  mUnkf47724;
        ::ll::UntypedStorage<8, 64>  mUnka39f24;
        ::ll::UntypedStorage<8, 64>  mUnk4059ed;
        ::ll::UntypedStorage<8, 64>  mUnkd7f78a;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
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
    ::ll::UntypedStorage<8, 8> mUnk922d05;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingContext& operator=(CraftingContext const&);
    CraftingContext(CraftingContext const&);
    CraftingContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CraftingContext(::Bedrock::NotNullNonOwnerPtr<::ILevel> level);

    MCAPI bool copyAndLockMap(::ActorUniqueID originalMapUuid, ::ActorUniqueID newMapUuid);

    MCAPI ::ActorUniqueID expandMapById(::ActorUniqueID uuid, bool wasInit);

    MCAPI ::BaseGameVersion getBaseGameVersion() const;

    MCAPI ::MapItemSavedData* getMapSavedData(::CompoundTag const* instance) const;

    MCAPI ::MapItemSavedData* getMapSavedData(::ActorUniqueID uuid) const;

    MCAPI ::std::weak_ptr<::TrimMaterialRegistry const> const getTrimMaterialRegistry() const;

    MCAPI ::std::weak_ptr<::TrimPatternRegistry const> const getTrimPatternRegistry() const;

    MCAPI ::std::weak_ptr<::TrimPatternRegistry> const getTrimPatternRegistry();

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
