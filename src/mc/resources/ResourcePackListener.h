#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackListener {
public:
    // prevent constructor by default
    ResourcePackListener& operator=(ResourcePackListener const&);
    ResourcePackListener(ResourcePackListener const&);
    ResourcePackListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ResourcePackListener@@UEAA@XZ
    virtual ~ResourcePackListener();

    // vIndex: 1, symbol:
    // ?onActiveResourcePacksChanged@VanillaWorldChecker@DebugEndPoint@@UEAAXAEAVResourcePackManager@@@Z
    virtual void onActiveResourcePacksChanged(class ResourcePackManager& mgr) = 0;

    // vIndex: 2, symbol: ?onFullPackStackInvalid@ResourcePackListener@@UEAAXXZ
    virtual void onFullPackStackInvalid();

    // vIndex: 3, symbol: ?onBaseGamePackDownloadComplete@ResourcePackListener@@UEAAXXZ
    virtual void onBaseGamePackDownloadComplete();

    // vIndex: 4, symbol: ?onLanguageSubpacksChanged@ResourcePackListener@@UEAAXXZ
    virtual void onLanguageSubpacksChanged();

    // vIndex: 5, symbol: ?onResourceManagerDestroyed@ResourcePackListener@@UEAAXAEAVResourcePackManager@@@Z
    virtual void onResourceManagerDestroyed(class ResourcePackManager& mgr);

    // NOLINTEND
};
