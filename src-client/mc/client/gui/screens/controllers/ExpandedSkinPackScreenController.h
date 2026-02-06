#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/player/SkinHandle.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class SkinPackCollectionModel;
class SkinPackModel;
struct StoreCatalogItem;
namespace Json { class Value; }
// clang-format on

class ExpandedSkinPackScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SkinPackCollectionModel&> mSkinPackCollection;
    ::ll::TypedStorage<8, 8, ::SkinPackModel&>           mSkinPackModel;
    ::ll::TypedStorage<8, 112, ::SkinHandle>             mPreviewSkinHandle;
    ::ll::TypedStorage<8, 112, ::SkinHandle const>       mInitialSkinHandle;
    ::ll::TypedStorage<4, 4, int>                        mHoverSkin;
    ::ll::TypedStorage<1, 1, bool>                       mForceSkinUpdate;
    ::ll::TypedStorage<1, 1, bool>                       mContentAreaActive;
    ::ll::TypedStorage<1, 1, bool>                       mRightSideVisible;
    ::ll::TypedStorage<1, 1, bool>                       mLeftSideVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpandedSkinPackScreenController& operator=(ExpandedSkinPackScreenController const&);
    ExpandedSkinPackScreenController(ExpandedSkinPackScreenController const&);
    ExpandedSkinPackScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExpandedSkinPackScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExpandedSkinPackScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::StoreCatalogItem const&,
        ::SkinPackModel&           skinPackModel,
        ::SkinPackCollectionModel& skinPackCollection
    );

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::StoreCatalogItem const&,
        ::SkinPackModel&           skinPackModel,
        ::SkinPackCollectionModel& skinPackCollection
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
