#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla_gameplay/ChatAvailability.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
// clang-format on

namespace OreUI {

class PlayerInBedFacet : public ::OreUI::FacetBase<::OreUI::PlayerInBedFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LocalPlayer*> mPlayer;
    ::ll::TypedStorage<1, 1, bool>           mIsTrial;
    ::ll::TypedStorage<4, 4, int>            mSleepingPlayerCount;
    ::ll::TypedStorage<4, 4, int>            mRequiredSleepingPlayerCount;
    ::ll::TypedStorage<4, 4, int>            mRemotePlayersCount;
    ::ll::TypedStorage<1, 1, bool>           mIsAbleToSleep;
    ::ll::TypedStorage<1, 1, bool>           mCanChangeSleepSettings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~PlayerInBedFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canChangeSleepSettings();

    MCFOLD bool getCanChangeSleepSettings() const;

    MCAPI ::OreUI::ChatAvailability getChatAvailability() const;

    MCFOLD bool getIsAbleToSleep() const;

    MCFOLD int getRemotePlayersCount() const;

    MCFOLD int getRequiredSleepingPlayerCount() const;

    MCFOLD int getSleepingPlayerCount() const;

    MCAPI void wakeUp();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
