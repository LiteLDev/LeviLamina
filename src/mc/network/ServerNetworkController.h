#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ServerNetworkController {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERNETWORKCONTROLLER
public:
    ServerNetworkController& operator=(ServerNetworkController const&) = delete;
    ServerNetworkController(ServerNetworkController const&)            = delete;
    ServerNetworkController()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isDedicatedServer\@ServerNetworkController\@\@UEBA_NXZ
     */
    virtual bool isDedicatedServer() const;
    /**
     * @vftbl 2
     * @symbol ?isHost\@ServerNetworkController\@\@UEBA_NAEBVUUID\@mce\@\@\@Z
     */
    virtual bool isHost(class mce::UUID const&) const;
    /**
     * @vftbl 3
     * @symbol ?canChangePermission\@ServerNetworkController\@\@UEBA_NAEBVUUID\@mce\@\@AEBVServerPlayer\@\@\@Z
     */
    virtual bool canChangePermission(class mce::UUID const&, class ServerPlayer const&) const;
};
