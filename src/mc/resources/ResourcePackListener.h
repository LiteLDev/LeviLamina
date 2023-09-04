#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackListener {
public:
    // prevent constructor by default
    ResourcePackListener& operator=(ResourcePackListener const&) = delete;
    ResourcePackListener(ResourcePackListener const&)            = delete;
    ResourcePackListener()                                       = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?onActiveResourcePacksChanged@VanillaWorldChecker@DebugEndPoint@@UEAAXAEAVResourcePackManager@@@Z
    virtual void onActiveResourcePacksChanged(class ResourcePackManager&) = 0;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?onResourceManagerDestroyed@ResourcePackListener@@UEAAXAEAVResourcePackManager@@@Z
    virtual void onResourceManagerDestroyed(class ResourcePackManager&);

    // symbol: ?onBaseGamePackDownloadComplete@ResourcePackListener@@UEAAXXZ
    MCVAPI void onBaseGamePackDownloadComplete();

    // symbol: ?onFullPackStackInvalid@ResourcePackListener@@UEAAXXZ
    MCVAPI void onFullPackStackInvalid();

    // symbol: ?onLanguageSubpacksChanged@ResourcePackListener@@UEAAXXZ
    MCVAPI void onLanguageSubpacksChanged();

    // symbol: ??1ResourcePackListener@@UEAA@XZ
    MCVAPI ~ResourcePackListener();

    // NOLINTEND
};
