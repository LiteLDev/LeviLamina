#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameplayUserManagerProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEPLAYUSERMANAGERPROXY
public:
    GameplayUserManagerProxy& operator=(GameplayUserManagerProxy const&) = delete;
    GameplayUserManagerProxy(GameplayUserManagerProxy const&)            = delete;
    GameplayUserManagerProxy()                                           = delete;
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
     * ?validatePlayerName\@GameplayUserManagerProxy\@\@UEBA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVGameplayUserManager\@\@\@Z
     */
    virtual class std::optional<std::string>
    validatePlayerName(std::string const&, class GameplayUserManager const&) const;
    /**
     * @vftbl 2
     * @symbol ?shouldGeneratePlayerIndex\@GameplayUserManagerProxy\@\@UEBA_NXZ
     */
    virtual bool shouldGeneratePlayerIndex() const;
    /**
     * @vftbl 3
     * @symbol ?reloadActor\@GameplayUserManagerProxy\@\@UEBAXAEAVActor\@\@\@Z
     */
    virtual void reloadActor(class Actor&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEPLAYUSERMANAGERPROXY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GameplayUserManagerProxy();
#endif
};
