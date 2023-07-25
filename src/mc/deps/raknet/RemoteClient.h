#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RemoteClient {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_REMOTECLIENT
public:
    RemoteClient& operator=(RemoteClient const&) = delete;
    RemoteClient(RemoteClient const&)            = delete;
#endif

public:
    /**
     * @symbol ??0RemoteClient\@RakNet\@\@QEAA\@XZ
     */
    MCAPI RemoteClient();
    /**
     * @symbol ?SendOrBuffer\@RemoteClient\@RakNet\@\@QEAAXPEAPEBDPEBIH\@Z
     */
    MCAPI void SendOrBuffer(char const**, unsigned int const*, int);
    /**
     * @symbol ?SetActive\@RemoteClient\@RakNet\@\@QEAAX_N\@Z
     */
    MCAPI void SetActive(bool);
    /**
     * @symbol ??1RemoteClient\@RakNet\@\@QEAA\@XZ
     */
    MCAPI ~RemoteClient();
};

}; // namespace RakNet
