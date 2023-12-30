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

    // symbol: ?onBaseGamePackDownloadComplete@ResourcePackListener@@UEAAXXZ
    MCVAPI void onBaseGamePackDownloadComplete();

    // symbol: ?onFullPackStackInvalid@ResourcePackListener@@UEAAXXZ
    MCVAPI void onFullPackStackInvalid();

    // symbol: ?onLanguageSubpacksChanged@ResourcePackListener@@UEAAXXZ
    MCVAPI void onLanguageSubpacksChanged();

    // symbol: ?onResourceManagerDestroyed@ResourcePackListener@@UEAAXAEAVResourcePackManager@@@Z
    MCVAPI void onResourceManagerDestroyed(class ResourcePackManager& mgr);

    // NOLINTEND
};
