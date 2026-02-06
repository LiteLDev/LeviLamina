#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/SkinPackMeta.h"
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
struct IEntitlement;
struct SkinRepositoryClientInterface;
// clang-format on

class SkinPackModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SkinRepositoryClientInterface&> mSkinRepositoryClientInterface;
    ::ll::TypedStorage<8, 8, ::IEntitlement const*>            mEntitlement;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>                 mPackIdentity;
    ::ll::TypedStorage<8, 2544, ::SkinPackMeta>                mSkinPackMetaData;
    ::ll::TypedStorage<4, 4, int>                              mFirstVisibleSkinIndex;
    ::ll::TypedStorage<4, 4, int>                              mSelectedSkinIndex;
    ::ll::TypedStorage<1, 1, bool>                             mIsOfflineLoaded;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinPackModel& operator=(SkinPackModel const&);
    SkinPackModel(SkinPackModel const&);
    SkinPackModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinPackModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkinPackModel(
        ::PackIdVersion const&           packIdentity,
        ::SkinRepositoryClientInterface& skinRepoInterface,
        ::IEntitlement const*            entitlement
    );

    MCAPI SkinPackModel(
        ::PackManifest const&            manifest,
        ::SkinRepositoryClientInterface& skinRepoInterface,
        ::IEntitlement const*            entitlement,
        bool                             isOfflineLoaded
    );

    MCAPI ::std::string const& getSkinName(int skinIndex) const;

    MCAPI void incrementFirstVisibleSkinIndex(int amount);

    MCAPI bool isLimitedUsageSkinPack() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::PackIdVersion const&           packIdentity,
        ::SkinRepositoryClientInterface& skinRepoInterface,
        ::IEntitlement const*            entitlement
    );

    MCAPI void* $ctor(
        ::PackManifest const&            manifest,
        ::SkinRepositoryClientInterface& skinRepoInterface,
        ::IEntitlement const*            entitlement,
        bool                             isOfflineLoaded
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
