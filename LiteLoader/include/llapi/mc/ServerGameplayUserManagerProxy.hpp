/**
 * @file  ServerGameplayUserManagerProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "GameplayUserManagerProxy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ServerGameplayUserManagerProxy : public GameplayUserManagerProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERGAMEPLAYUSERMANAGERPROXY
public:
    class ServerGameplayUserManagerProxy& operator=(class ServerGameplayUserManagerProxy const &) = delete;
    ServerGameplayUserManagerProxy(class ServerGameplayUserManagerProxy const &) = delete;
    ServerGameplayUserManagerProxy() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?validatePlayerName\@ServerGameplayUserManagerProxy\@\@UEBA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVGameplayUserManager\@\@\@Z
     */
    virtual class std::optional<std::string> validatePlayerName(std::string const &, class GameplayUserManager const &) const;
    /**
     * @vftbl 2
     * @symbol ?shouldGeneratePlayerIndex\@ServerGameplayUserManagerProxy\@\@UEBA_NXZ
     */
    virtual bool shouldGeneratePlayerIndex() const;

};
