#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/TabbedUpsellScreenDefaultTab.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Json { class Value; }
// clang-format on

class TabbedUpsellScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TabbedUpsellScreenDefaultTab> mActiveTabIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    TabbedUpsellScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TabbedUpsellScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    TabbedUpsellScreenController(::std::shared_ptr<::MinecraftScreenModel> model, ::TabbedUpsellScreenDefaultTab tab);

    MCAPI ::std::string _getActiveTab() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::TabbedUpsellScreenDefaultTab tab);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::std::string $getAdditionalScreenInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
