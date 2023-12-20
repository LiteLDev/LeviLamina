#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class UsedRtpHeaderExtensionIds {
public:
    // prevent constructor by default
    UsedRtpHeaderExtensionIds& operator=(UsedRtpHeaderExtensionIds const&);
    UsedRtpHeaderExtensionIds(UsedRtpHeaderExtensionIds const&);
    UsedRtpHeaderExtensionIds();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UsedRtpHeaderExtensionIds@cricket@@UEAA@XZ
    virtual ~UsedRtpHeaderExtensionIds();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?FindUnusedId@UsedRtpHeaderExtensionIds@cricket@@EEAAHXZ
    virtual int FindUnusedId();

    // NOLINTEND
};

}; // namespace cricket
