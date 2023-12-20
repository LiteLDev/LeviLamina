#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/RefCountInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RefCountInterface; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace rtc::internal {

class WeakReference {
public:
    // WeakReference inner types declare
    // clang-format off
    class Flag;
    // clang-format on

    // WeakReference inner types define
    class Flag : public ::rtc::RefCountInterface {
    public:
        // prevent constructor by default
        Flag& operator=(Flag const&);
        Flag(Flag const&);

    public:
        // NOLINTBEGIN
        // vIndex: 2, symbol: ??1Flag@WeakReference@internal@rtc@@EEAA@XZ
        virtual ~Flag();

        // symbol: ??0Flag@WeakReference@internal@rtc@@QEAA@XZ
        MCAPI Flag();

        // symbol: ?Invalidate@Flag@WeakReference@internal@rtc@@QEAAXXZ
        MCAPI void Invalidate();

        // symbol: ?IsValid@Flag@WeakReference@internal@rtc@@QEBA_NXZ
        MCAPI bool IsValid() const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    WeakReference& operator=(WeakReference const&);

public:
    // NOLINTBEGIN
    // symbol: ??0WeakReference@internal@rtc@@QEAA@XZ
    MCAPI WeakReference();

    // symbol: ??0WeakReference@internal@rtc@@QEAA@$$QEAV012@@Z
    MCAPI WeakReference(class rtc::internal::WeakReference&&);

    // symbol: ??0WeakReference@internal@rtc@@QEAA@AEBV012@@Z
    MCAPI WeakReference(class rtc::internal::WeakReference const&);

    // symbol: ??0WeakReference@internal@rtc@@QEAA@PEBVFlag@012@@Z
    MCAPI explicit WeakReference(class rtc::internal::WeakReference::Flag const*);

    // symbol: ?is_valid@WeakReference@internal@rtc@@QEBA_NXZ
    MCAPI bool is_valid() const;

    // symbol: ??1WeakReference@internal@rtc@@QEAA@XZ
    MCAPI ~WeakReference();

    // NOLINTEND
};

}; // namespace rtc::internal
