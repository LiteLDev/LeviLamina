#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SignaledEvent {

public:
    // prevent constructor by default
    SignaledEvent& operator=(SignaledEvent const&) = delete;
    SignaledEvent(SignaledEvent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?CloseEvent\@SignaledEvent\@RakNet\@\@QEAAXXZ
     */
    MCAPI void CloseEvent();
    /**
     * @symbol ?InitEvent\@SignaledEvent\@RakNet\@\@QEAAXXZ
     */
    MCAPI void InitEvent();
    /**
     * @symbol ?SetEvent\@SignaledEvent\@RakNet\@\@QEAAXXZ
     */
    MCAPI void SetEvent();
    /**
     * @symbol ??0SignaledEvent\@RakNet\@\@QEAA\@XZ
     */
    MCAPI SignaledEvent();
    /**
     * @symbol ?WaitOnEvent\@SignaledEvent\@RakNet\@\@QEAAXH\@Z
     */
    MCAPI void WaitOnEvent(int);
    /**
     * @symbol ??1SignaledEvent\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~SignaledEvent();
    // NOLINTEND
};

}; // namespace RakNet
