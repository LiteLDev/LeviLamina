#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class Win10TrialConversionScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsFirstTick;
    // NOLINTEND

public:
    // prevent constructor by default
    Win10TrialConversionScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Win10TrialConversionScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Win10TrialConversionScreenController(::std::shared_ptr<::MinecraftScreenModel> model);

    MCNAPI void _registerBindings();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::std::string> const& mMasterPackTitle();

    MCNAPI static ::std::map<::std::string, ::std::string> const& mPacksImages();

    MCNAPI static ::std::map<::std::string, ::std::string> const& mPacksInfo();

    MCNAPI static ::std::vector<::std::string> const& mStarterPackTitle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
