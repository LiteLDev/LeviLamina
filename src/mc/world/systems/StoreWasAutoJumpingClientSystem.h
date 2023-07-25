#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class StoreWasAutoJumpingClientSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOREWASAUTOJUMPINGCLIENTSYSTEM
public:
    StoreWasAutoJumpingClientSystem& operator=(StoreWasAutoJumpingClientSystem const&) = delete;
    StoreWasAutoJumpingClientSystem(StoreWasAutoJumpingClientSystem const&)            = delete;
    StoreWasAutoJumpingClientSystem()                                                  = delete;
#endif

public:
    /**
     * @symbol
     * ?createStoreWasAutoJumpingClientSystem\@StoreWasAutoJumpingClientSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createStoreWasAutoJumpingClientSystem();
    /**
     * @symbol
     * ?tickStoreWasAutoJumpingClientSystem\@StoreWasAutoJumpingClientSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UAutoJumpingFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UWasAutoJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
        tickStoreWasAutoJumpingClientSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct LocalPlayerComponentFlag>>, class Optional<class FlagComponent<struct AutoJumpingFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasAutoJumpingFlag>>);
};
