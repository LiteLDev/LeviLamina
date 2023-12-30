#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

namespace webrtc {

class PendingTaskSafetyFlag {
public:
    // prevent constructor by default
    PendingTaskSafetyFlag& operator=(PendingTaskSafetyFlag const&);
    PendingTaskSafetyFlag(PendingTaskSafetyFlag const&);
    PendingTaskSafetyFlag();

public:
    // NOLINTBEGIN
    // symbol: ?SetAlive@PendingTaskSafetyFlag@webrtc@@QEAAXXZ
    MCAPI void SetAlive();

    // symbol: ?SetNotAlive@PendingTaskSafetyFlag@webrtc@@QEAAXXZ
    MCAPI void SetNotAlive();

    // symbol: ?alive@PendingTaskSafetyFlag@webrtc@@QEBA_NXZ
    MCAPI bool alive() const;

    // symbol: ?Create@PendingTaskSafetyFlag@webrtc@@SA?AV?$scoped_refptr@VPendingTaskSafetyFlag@webrtc@@@rtc@@XZ
    MCAPI static class rtc::scoped_refptr<class webrtc::PendingTaskSafetyFlag> Create();

    // symbol:
    // ?CreateDetached@PendingTaskSafetyFlag@webrtc@@SA?AV?$scoped_refptr@VPendingTaskSafetyFlag@webrtc@@@rtc@@XZ
    MCAPI static class rtc::scoped_refptr<class webrtc::PendingTaskSafetyFlag> CreateDetached();

    // symbol:
    // ?CreateDetachedInactive@PendingTaskSafetyFlag@webrtc@@SA?AV?$scoped_refptr@VPendingTaskSafetyFlag@webrtc@@@rtc@@XZ
    MCAPI static class rtc::scoped_refptr<class webrtc::PendingTaskSafetyFlag> CreateDetachedInactive();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?CreateInternal@PendingTaskSafetyFlag@webrtc@@CA?AV?$scoped_refptr@VPendingTaskSafetyFlag@webrtc@@@rtc@@_N@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::PendingTaskSafetyFlag> CreateInternal(bool);

    // NOLINTEND
};

}; // namespace webrtc
