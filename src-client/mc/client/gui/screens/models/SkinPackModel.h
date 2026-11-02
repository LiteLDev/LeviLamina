#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/SkinPackMeta.h"
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
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
    ::ll::TypedStorage<8, 2616, ::SkinPackMeta>     mSkinPackMetaData;
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
    virtual ~SkinPackModel() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SkinPackModel(
        ::PackIdVersion const& packIdentity,
        ::PersonaClient&       skinRepoInterface,
        ::IEntitlement const*  entitlement
    );

    MCNAPI SkinPackModel(
        ::PackManifest const& manifest,
        ::PersonaClient&      skinRepoInterface,
        ::IEntitlement const* entitlement,
        bool                  isOfflineLoaded
    );

    MCNAPI ::std::string const& getLocName() const;

    MCNAPI int getNumSkins() const;

    MCNAPI ::std::string const& getSkinName(int skinIndex) const;

    MCNAPI void incrementFirstVisibleSkinIndex(int amount);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::PackIdVersion const& packIdentity, ::PersonaClient& skinRepoInterface, ::IEntitlement const* entitlement);

    MCNAPI void* $ctor(
        ::PackManifest const& manifest,
        ::PersonaClient&      skinRepoInterface,
        ::IEntitlement const* entitlement,
        bool                  isOfflineLoaded
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
