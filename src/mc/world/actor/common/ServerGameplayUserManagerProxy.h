#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/common/GameplayUserManagerProxy.h"

class ServerGameplayUserManagerProxy : public ::GameplayUserManagerProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERGAMEPLAYUSERMANAGERPROXY
public:
    ServerGameplayUserManagerProxy& operator=(ServerGameplayUserManagerProxy const&) = delete;
    ServerGameplayUserManagerProxy(ServerGameplayUserManagerProxy const&)            = delete;
    ServerGameplayUserManagerProxy()                                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?validatePlayerName\@ServerGameplayUserManagerProxy\@\@UEBA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVGameplayUserManager\@\@\@Z
     */
    virtual class std::optional<std::string>
    validatePlayerName(std::string const&, class GameplayUserManager const&) const;
    /**
     * @vftbl 2
     * @symbol ?shouldGeneratePlayerIndex\@ServerGameplayUserManagerProxy\@\@UEBA_NXZ
     */
    virtual bool shouldGeneratePlayerIndex() const;
};
