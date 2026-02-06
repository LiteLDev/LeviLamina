#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class EDUAddServerScreenController : public ::MinecraftScreenController {
public:
    // EDUAddServerScreenController inner types define
    using OnAddServer = ::std::function<void(::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> mOnAddServer;
    ::ll::TypedStorage<8, 32, ::std::string>                               mServerId;
    ::ll::TypedStorage<1, 1, bool>                                         mShowServerIdTooltip;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUAddServerScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUAddServerScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EDUAddServerScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>   model,
        ::std::function<void(::std::string const&)> onAddServer
    );

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::MinecraftScreenModel> model, ::std::function<void(::std::string const&)> onAddServer);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
