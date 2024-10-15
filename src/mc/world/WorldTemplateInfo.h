#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

struct WorldTemplateInfo {
public:
    // prevent constructor by default
    WorldTemplateInfo& operator=(WorldTemplateInfo const&);
    WorldTemplateInfo(WorldTemplateInfo const&);
    WorldTemplateInfo();

public:
    // NOLINTBEGIN
    MCAPI explicit WorldTemplateInfo(class WorldTemplatePackManifest const& manifest);

    MCAPI void addWorldTemplatePackSource(class WorldTemplatePackSource& source);

    MCAPI class WorldTemplatePackManifest const& getPackManifest() const;

    MCAPI std::string const& getWorldName() const;

    MCAPI class Core::PathBuffer<std::string> const& getWorldPath() const;

    MCAPI bool isVirtualCatalogItem() const;

    MCAPI ~WorldTemplateInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class WorldTemplatePackManifest const& manifest);

    MCAPI void dtor$();

    // NOLINTEND
};
