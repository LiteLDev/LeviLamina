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

struct ExternalDataSnapshot : public ::ExternalDataInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk780e49;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalDataSnapshot& operator=(ExternalDataSnapshot const&);
    ExternalDataSnapshot(ExternalDataSnapshot const&);
    ExternalDataSnapshot();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExternalDataSnapshot() /*override*/ = default;

    virtual bool isInWorldAndNotShowingAnyMenuScreens() const /*override*/;

    virtual bool isPausingGame() const /*override*/;

    virtual ::AdventureSettings const& getAdventureSettings() const /*override*/;

    virtual ::ClientPlayMode getPlayMode() const /*override*/;

    virtual ::InputMode getInputMode() const /*override*/;

    virtual ::GameType getDefaultGameType() const /*override*/;

    virtual float getSmoothRotationSpeed() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isInWorldAndNotShowingAnyMenuScreens() const;

    MCNAPI bool $isPausingGame() const;

    MCNAPI ::AdventureSettings const& $getAdventureSettings() const;

    MCNAPI ::ClientPlayMode $getPlayMode() const;

    MCNAPI ::InputMode $getInputMode() const;

    MCNAPI ::GameType $getDefaultGameType() const;

    MCNAPI float $getSmoothRotationSpeed() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
