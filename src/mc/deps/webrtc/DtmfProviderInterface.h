#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DtmfProviderInterface {
public:
    // prevent constructor by default
    DtmfProviderInterface& operator=(DtmfProviderInterface const&);
    DtmfProviderInterface(DtmfProviderInterface const&);
    DtmfProviderInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: ??1DtmfProviderInterface@webrtc@@MEAA@XZ
    virtual ~DtmfProviderInterface();

    // NOLINTEND
};

}; // namespace webrtc
