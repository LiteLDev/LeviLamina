/**
 * @file  MC/NetworkCallbacks.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkCallbacks.
 *
 */
class NetworkCallbacks {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKCALLBACKS
public:
    class NetworkCallbacks& operator=(class NetworkCallbacks const &) = delete;
    NetworkCallbacks(class NetworkCallbacks const &) = delete;
    NetworkCallbacks() = delete;
#endif

public:
    /**
     * @symbol ?SetBroadcastRequestCallback@NetworkCallbacks@@QEAAX$$QEAV?$function@$$A6A_NPEAXPEAH@Z@std@@@Z
     */
    MCAPI void SetBroadcastRequestCallback(class std::function<bool (void *, int *)> &&);
    /**
     * @symbol ?SetBroadcastResponseCallback@NetworkCallbacks@@QEAAX$$QEAV?$function@$$A6AXAEBUNetworkID@NetherNet@@PEBXH@Z@std@@@Z
     */
    MCAPI void SetBroadcastResponseCallback(class std::function<void (struct NetherNet::NetworkID const &, void const *, int)> &&);

};