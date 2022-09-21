/**
 * @file  MC/GameEventListenerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventListenerComponent.
 *
 */
class GameEventListenerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTLISTENERCOMPONENT
public:
    class GameEventListenerComponent& operator=(class GameEventListenerComponent const &) = delete;
    GameEventListenerComponent(class GameEventListenerComponent const &) = delete;
#endif

public:
    /**
     * @hash   -1346175957
     * @symbol ??0GameEventListenerComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI GameEventListenerComponent(class GameEventListenerComponent &&);
    /**
     * @hash   -136421043
     * @symbol ??0GameEventListenerComponent@@QEAA@XZ
     */
    MCAPI GameEventListenerComponent();
    /**
     * @hash   -1142975803
     * @symbol ?initialize@GameEventListenerComponent@@QEAA_NV?$unique_ptr@VGameEventDynamicRegistration@@U?$default_delete@VGameEventDynamicRegistration@@@std@@@std@@@Z
     */
    MCAPI bool initialize(std::unique_ptr<class GameEventDynamicRegistration>);
    /**
     * @hash   -531257170
     * @symbol ??4GameEventListenerComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class GameEventListenerComponent & operator=(class GameEventListenerComponent &&);
    /**
     * @hash   -47508347
     * @symbol ?tryGetListenerRegistration@GameEventListenerComponent@@QEBAPEAVGameEventDynamicRegistration@@XZ
     */
    MCAPI class GameEventDynamicRegistration * tryGetListenerRegistration() const;
    /**
     * @hash   -1675740885
     * @symbol ??1GameEventListenerComponent@@QEAA@XZ
     */
    MCAPI ~GameEventListenerComponent();

};