/**
 * @file  BlockEventDispatcherToken.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
typedef int ListenerHandle;
#include "llapi/mc/BlockEventDispatcher.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockEventDispatcherToken.
 *
 */
class BlockEventDispatcherToken {

#define AFTER_EXTRA
// Add Member There
public:
  ListenerHandle mHandle;
  BlockEventDispatcher *mDispatcher;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTDISPATCHERTOKEN
public:
    class BlockEventDispatcherToken& operator=(class BlockEventDispatcherToken const &) = delete;
    BlockEventDispatcherToken(class BlockEventDispatcherToken const &) = delete;
    BlockEventDispatcherToken() = delete;
#endif

public:
    /**
     * @symbol ??4BlockEventDispatcherToken\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BlockEventDispatcherToken & operator=(class BlockEventDispatcherToken &&);
    /**
     * @symbol ?unregister\@BlockEventDispatcherToken\@\@QEAAXXZ
     */
    MCAPI void unregister();
    /**
     * @symbol ??1BlockEventDispatcherToken\@\@QEAA\@XZ
     */
    MCAPI ~BlockEventDispatcherToken();

};
