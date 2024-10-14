#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackManifest.h"
#include "mc/world/level/GameType.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class PackManifest> clone$() const;

    // NOLINTEND
};
