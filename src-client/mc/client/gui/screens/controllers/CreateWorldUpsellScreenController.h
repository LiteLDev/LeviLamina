#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/store/iap/RealmsOfferPeriod.h"
#include "mc/client/store/iap/RealmsOfferTier.h"
#include "mc/client/store/iap/RealmsOfferType.h"

// auto generated forward declare list
// clang-format off
class PlatformMultiplayerRestrictions;
namespace Json { class Value; }
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetailsGroup; }
// clang-format on

class CreateWorldUpsellScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                        mWorldSellingPoints;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                        mRealmSellingPoints;
    ::ll::TypedStorage<4, 4, ::RealmsOfferType>                                    mOfferType;
    ::ll::TypedStorage<4, 4, ::RealmsOfferPeriod>                                  mOfferPeriod;
    ::ll::TypedStorage<4, 4, ::RealmsOfferTier>                                    mOfferTier;
    ::ll::TypedStorage<1, 1, bool>                                                 mFirstTimeShown;
    ::ll::TypedStorage<1, 1, bool>                                                 mCalledFromPlayScreen;
    ::ll::TypedStorage<1, 1, bool>                                                 mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                 mWorldsLoaded;
    ::ll::TypedStorage<8, 32, ::std::string const>                                 mAdditionalScreenInfo;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RealmsScreenUtils::RealmsWorldLoadingDetailsGroup>>
        mRealmsWorldLoadingDetailsGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreateWorldUpsellScreenController() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual void onCreation() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _createRealmSellingPointList();

    MCAPI void _createWorldSellingPointList();

    MCAPI void _equalizeSellingPointListSize();

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::std::string $getAdditionalScreenInfo() const;

    MCAPI void $onCreation();

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
