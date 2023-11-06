#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"
#include "mc/resources/PackManifest.h"

class WorldTemplatePackManifest : public ::PackManifest {
public:
    // prevent constructor by default
    WorldTemplatePackManifest& operator=(WorldTemplatePackManifest const&);
    WorldTemplatePackManifest(WorldTemplatePackManifest const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1WorldTemplatePackManifest@@UEAA@XZ
    virtual ~WorldTemplatePackManifest();

    // vIndex: 1, symbol:
    // ?clone@WorldTemplatePackManifest@@UEBA?AV?$unique_ptr@VPackManifest@@U?$default_delete@VPackManifest@@@std@@@std@@XZ
    virtual std::unique_ptr<class PackManifest> clone() const;

    // symbol: ??0WorldTemplatePackManifest@@QEAA@XZ
    MCAPI WorldTemplatePackManifest();

    // symbol: ?getGameType@WorldTemplatePackManifest@@QEBA?AW4GameType@@XZ
    MCAPI ::GameType getGameType() const;

    // NOLINTEND
};
