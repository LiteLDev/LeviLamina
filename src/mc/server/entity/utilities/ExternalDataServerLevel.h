#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/entity/utilities/ExternalDataInterface.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
struct AdventureSettings;
// clang-format on

struct ExternalDataServerLevel : public ::ExternalDataInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke4525e;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalDataServerLevel& operator=(ExternalDataServerLevel const&);
    ExternalDataServerLevel(ExternalDataServerLevel const&);
    ExternalDataServerLevel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExternalDataServerLevel() /*override*/ = default;

    virtual bool isInWorldAndNotShowingAnyMenuScreens() const /*override*/;

    virtual bool isPausingGame() const /*override*/;

    virtual ::AdventureSettings const& getAdventureSettings() const /*override*/;

    virtual ::ClientPlayMode getPlayMode() const /*override*/;

    virtual float getSmoothRotationSpeed() const /*override*/;

    virtual ::InputMode getInputMode() const /*override*/;

    virtual ::GameType getDefaultGameType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInWorldAndNotShowingAnyMenuScreens() const;

    MCNAPI bool $isPausingGame() const;

    MCNAPI ::AdventureSettings const& $getAdventureSettings() const;

    MCNAPI ::ClientPlayMode $getPlayMode() const;

    MCNAPI float $getSmoothRotationSpeed() const;

    MCNAPI ::InputMode $getInputMode() const;

    MCNAPI ::GameType $getDefaultGameType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
