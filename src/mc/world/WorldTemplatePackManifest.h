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
    // vIndex: 0
    virtual ~WorldTemplatePackManifest();

    // vIndex: 1
    virtual std::unique_ptr<class PackManifest> clone() const;

    MCAPI WorldTemplatePackManifest();

    MCAPI ::GameType getGameType() const;

    // NOLINTEND
};
