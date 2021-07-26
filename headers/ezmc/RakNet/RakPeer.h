#pragma once

#include <hook.h>

#include "../dll.h"
#include "RakNetTypes.h"

namespace RakNet {

class RakPeer {
public:
    MCAPI RakPeer();

    inline SystemAddress GetSystemAddressFromGuid(RakNetGUID guid) const {
        return CallServerClassMethod<SystemAddress>(
            "?GetSystemAddressFromGuid@RakPeer@RakNet@@UEBA?AUSystemAddress@2@URakNetGUID@2@@Z", this, guid);
    }

    inline void SetOfflinePingResponse(const char* data, const unsigned int length) {
        CallServerClassMethod<void>("?SetOfflinePingResponse@RakPeer@RakNet@@UEAAXPEBDI@Z", this, data, length);
    }
};

} // namespace RakNet