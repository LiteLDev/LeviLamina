#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SignaledEvent {

public:
    // prevent constructor by default
    SignaledEvent& operator=(SignaledEvent const&) = delete;
    SignaledEvent(SignaledEvent const&)            = delete;

public:
    /**
     * @symbol ?CloseEvent\@SignaledEvent\@RakNet\@\@QEAAXXZ
     */
    MCAPI void CloseEvent(); // NOLINT
    /**
     * @symbol ?InitEvent\@SignaledEvent\@RakNet\@\@QEAAXXZ
     */
    MCAPI void InitEvent(); // NOLINT
    /**
     * @symbol ?SetEvent\@SignaledEvent\@RakNet\@\@QEAAXXZ
     */
    MCAPI void SetEvent(); // NOLINT
    /**
     * @symbol ??0SignaledEvent\@RakNet\@\@QEAA\@XZ
     */
    MCAPI SignaledEvent(); // NOLINT
    /**
     * @symbol ?WaitOnEvent\@SignaledEvent\@RakNet\@\@QEAAXH\@Z
     */
    MCAPI void WaitOnEvent(int); // NOLINT
    /**
     * @symbol ??1SignaledEvent\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~SignaledEvent(); // NOLINT
};

}; // namespace RakNet
