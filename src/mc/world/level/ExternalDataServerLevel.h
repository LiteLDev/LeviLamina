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
    // vIndex: 0, symbol: __gen_??1ExternalDataServerLevel@@UEAA@XZ
    virtual ~ExternalDataServerLevel() = default;

    // vIndex: 1, symbol: ?isInGame@ExternalDataServerLevel@@UEBA_NXZ
    virtual bool isInGame() const;

    // vIndex: 2, symbol: ?getAdventureSettings@ExternalDataServerLevel@@UEBAAEBUAdventureSettings@@XZ
    virtual struct AdventureSettings const& getAdventureSettings() const;

    // vIndex: 3, symbol: ?getPlayMode@ExternalDataServerLevel@@UEBA?AW4ClientPlayMode@@XZ
    virtual ::ClientPlayMode getPlayMode() const;

    // vIndex: 4, symbol: ?getInputMode@ExternalDataServerLevel@@UEBA?AW4InputMode@@XZ
    virtual ::InputMode getInputMode() const;

    // vIndex: 5, symbol: ?getDefaultGameType@ExternalDataServerLevel@@UEBA?AW4GameType@@XZ
    virtual ::GameType getDefaultGameType() const;

    // vIndex: 6, symbol: ?getSmoothRotationSpeed@ExternalDataServerLevel@@UEBAMXZ
    virtual float getSmoothRotationSpeed() const;

    // symbol: ??0ExternalDataServerLevel@@QEAA@V?$not_null@V?$NonOwnerPointer@$$CBVILevel@@@Bedrock@@@gsl@@@Z
    MCAPI explicit ExternalDataServerLevel(Bedrock::NotNullNonOwnerPtr<class ILevel const> level);

    // NOLINTEND
};
