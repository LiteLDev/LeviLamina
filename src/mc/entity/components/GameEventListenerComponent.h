#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventListenerComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTLISTENERCOMPONENT
public:
    GameEventListenerComponent& operator=(GameEventListenerComponent const&) = delete;
    GameEventListenerComponent(GameEventListenerComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0GameEventListenerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI GameEventListenerComponent(class GameEventListenerComponent&&);
    /**
     * @symbol ??0GameEventListenerComponent\@\@QEAA\@XZ
     */
    MCAPI GameEventListenerComponent();
    /**
     * @symbol
     * ?initialize\@GameEventListenerComponent\@\@QEAA_NV?$unique_ptr\@VGameEventDynamicRegistration\@\@U?$default_delete\@VGameEventDynamicRegistration\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool initialize(std::unique_ptr<class GameEventDynamicRegistration>);
    /**
     * @symbol ??4GameEventListenerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class GameEventListenerComponent& operator=(class GameEventListenerComponent&&);
    /**
     * @symbol ?tryGetListenerRegistration\@GameEventListenerComponent\@\@QEBAPEAVGameEventDynamicRegistration\@\@XZ
     */
    MCAPI class GameEventDynamicRegistration* tryGetListenerRegistration() const;
    /**
     * @symbol ??1GameEventListenerComponent\@\@QEAA\@XZ
     */
    MCAPI ~GameEventListenerComponent();
};
