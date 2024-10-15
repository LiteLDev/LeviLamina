#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/entity/utilities/ExternalDataInterface.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/world/level/GameType.h"

struct ExternalDataServerLevel : public ::ExternalDataInterface {
public:
    // prevent constructor by default
    ExternalDataServerLevel& operator=(ExternalDataServerLevel const&);
    ExternalDataServerLevel(ExternalDataServerLevel const&);
    ExternalDataServerLevel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExternalDataServerLevel() = default;

    // vIndex: 1
    virtual bool isInWorldAndNotShowingAnyMenuScreens() const;

    // vIndex: 2
    virtual struct AdventureSettings const& getAdventureSettings() const;

    // vIndex: 3
    virtual ::ClientPlayMode getPlayMode() const;

    // vIndex: 4
    virtual ::InputMode getInputMode() const;

    // vIndex: 5
    virtual ::GameType getDefaultGameType() const;

    // vIndex: 6
    virtual float getSmoothRotationSpeed() const;

    MCAPI explicit ExternalDataServerLevel(Bedrock::NotNullNonOwnerPtr<class ILevel const> level);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(Bedrock::NotNullNonOwnerPtr<class ILevel const> level);

    MCAPI struct AdventureSettings const& getAdventureSettings$() const;

    MCAPI ::GameType getDefaultGameType$() const;

    MCAPI ::InputMode getInputMode$() const;

    MCAPI ::ClientPlayMode getPlayMode$() const;

    MCAPI float getSmoothRotationSpeed$() const;

    MCAPI bool isInWorldAndNotShowingAnyMenuScreens$() const;

    // NOLINTEND
};
