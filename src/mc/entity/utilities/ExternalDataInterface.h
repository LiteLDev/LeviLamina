#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
struct AdventureSettings;
// clang-format on

struct ExternalDataInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExternalDataInterface() = default;

    virtual bool isInWorldAndNotShowingAnyMenuScreens() const = 0;

    virtual bool isPausingGame() const = 0;

    virtual ::AdventureSettings const& getAdventureSettings() const = 0;

    virtual ::ClientPlayMode getPlayMode() const = 0;

    virtual ::InputMode getInputMode() const = 0;

    virtual ::GameType getDefaultGameType() const = 0;

    virtual float getSmoothRotationSpeed() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
