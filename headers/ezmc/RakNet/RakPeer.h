#pragma once

#include <loader/Loader.h>

#include "../dll.h"
#include "RakNetTypes.h"

namespace RakNet {

class RakPeer {
public:
    MCAPI RakPeer();

    inline SystemAddress GetSystemAddressFromGuid(RakNetGUID guid) const {
        return SymCall(
            "?GetSystemAddressFromGuid@RakPeer@RakNet@@UEBA?AUSystemAddress@2@URakNetGUID@2@@Z", SystemAddress, const RakPeer*, RakNetGUID)(this, guid);
    }

    inline void SetOfflinePingResponse(const char* data, const unsigned int length) {
        SymCall("?SetOfflinePingResponse@RakPeer@RakNet@@UEAAXPEBDI@Z", void, const RakPeer*, const char*, const unsigned int)(this, data, length);
    }
};

} // namespace RakNet