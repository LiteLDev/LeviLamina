#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/ClientPlayMode.h"
#include "mc/enums/GameType.h"
#include "mc/enums/InputMode.h"
#include "mc/world/level/ExternalDataInterface.h"

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
};
