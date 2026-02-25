#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class PurchaseProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mShowTitle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PurchaseProgressHandler() /*override*/ = default;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
