#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/SkinPackMeta.h"
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IEntitlement;
class PackManifest;
class PersonaClient;
// clang-format on

class SkinPackModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PersonaClient&>      mPersonaClient;
    ::ll::TypedStorage<8, 8, ::IEntitlement const*> mEntitlement;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>      mPackIdentity;
    ::ll::TypedStorage<8, 2552, ::SkinPackMeta>     mSkinPackMetaData;
    ::ll::TypedStorage<4, 4, int>                   mFirstVisibleSkinIndex;
    ::ll::TypedStorage<4, 4, int>                   mSelectedSkinIndex;
    ::ll::TypedStorage<1, 1, bool>                  mIsOfflineLoaded;
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
        ::PackIdVersion const& packIdentity,
        ::PersonaClient&       skinRepoInterface,
        ::IEntitlement const*  entitlement
    );

    MCAPI SkinPackModel(
        ::PackManifest const& manifest,
        ::PersonaClient&      skinRepoInterface,
        ::IEntitlement const* entitlement,
        bool                  isOfflineLoaded
    );

    MCAPI void decrementFirstVisibleSkinIndex(int amount);

    MCAPI ::ContentIdentity const& getContentIdentity() const;

    MCAPI int getFirstVisibleSkinIndex() const;

    MCAPI ::std::string const& getLocName() const;

    MCFOLD ::SkinPackMeta const& getMetaData() const;

    MCAPI int getNumSkins() const;

    MCFOLD ::PackIdVersion const& getPackIdentity() const;

    MCAPI ::std::string const& getSkinName(int skinIndex) const;

    MCAPI void incrementFirstVisibleSkinIndex(int amount);

    MCAPI bool isCustomSkinPack() const;

    MCAPI bool isInPackage() const;

    MCAPI bool isLimitedUsageSkinPack() const;

    MCAPI bool isOfflineOrSideLoaded() const;

    MCAPI bool isPlatformLocked() const;

    MCAPI bool isSideLoaded() const;

    MCAPI bool isSkinLocked(int skinIndex) const;

    MCAPI bool isSkinPackOwned() const;

    MCAPI bool isValid() const;

    MCAPI bool isVanillaSkinPack() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::PackIdVersion const& packIdentity, ::PersonaClient& skinRepoInterface, ::IEntitlement const* entitlement);

    MCAPI void* $ctor(
        ::PackManifest const& manifest,
        ::PersonaClient&      skinRepoInterface,
        ::IEntitlement const* entitlement,
        bool                  isOfflineLoaded
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
