#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class NotifierInterface {
public:
    // prevent constructor by default
    NotifierInterface& operator=(NotifierInterface const&);
    NotifierInterface(NotifierInterface const&);
    NotifierInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: __gen_??1NotifierInterface@webrtc@@UEAA@XZ
    virtual ~NotifierInterface() = default;

    // NOLINTEND
};

}; // namespace webrtc
