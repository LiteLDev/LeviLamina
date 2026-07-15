#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

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
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUAddServerScreenController() /*override*/ = default;
    // NOLINTEND
};
