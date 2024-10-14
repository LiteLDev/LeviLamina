#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

class UPNPInterface {
public:
    // prevent constructor by default
    UPNPInterface& operator=(UPNPInterface const&);
    UPNPInterface(UPNPInterface const&);
    UPNPInterface();

public:
    // NOLINTBEGIN
    MCVAPI void _onDisable();

    MCVAPI void _onEnable();

    MCAPI explicit UPNPInterface(class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform);

    MCAPI void reset();

    MCAPI void tick();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForNetworkEnableDisableListener();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void _onDisable$();

    MCAPI void _onEnable$();

    // NOLINTEND
};
