/**
 * @file  StoreWasAutoJumpingClientSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StoreWasAutoJumpingClientSystem.
 *
 */
class StoreWasAutoJumpingClientSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOREWASAUTOJUMPINGCLIENTSYSTEM
public:
    class StoreWasAutoJumpingClientSystem& operator=(class StoreWasAutoJumpingClientSystem const &) = delete;
    StoreWasAutoJumpingClientSystem(class StoreWasAutoJumpingClientSystem const &) = delete;
    StoreWasAutoJumpingClientSystem() = delete;
#endif

public:
    /**
     * @symbol ?createStoreWasAutoJumpingClientSystem\@StoreWasAutoJumpingClientSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createStoreWasAutoJumpingClientSystem();
    /**
     * @symbol ?tickStoreWasAutoJumpingClientSystem\@StoreWasAutoJumpingClientSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UAutoJumpingFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UWasAutoJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void tickStoreWasAutoJumpingClientSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct LocalPlayerComponentFlag>>, class Optional<class FlagComponent<struct AutoJumpingFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasAutoJumpingFlag>>);

};
