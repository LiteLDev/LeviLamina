#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventListenerComponent {
public:
    // prevent constructor by default
    GameEventListenerComponent& operator=(GameEventListenerComponent const&);
    GameEventListenerComponent(GameEventListenerComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0GameEventListenerComponent@@QEAA@XZ
    MCAPI GameEventListenerComponent();

    // symbol: ??0GameEventListenerComponent@@QEAA@$$QEAV0@@Z
    MCAPI GameEventListenerComponent(class GameEventListenerComponent&& other);

    // symbol:
    // ?initialize@GameEventListenerComponent@@QEAA_NV?$unique_ptr@VGameEventDynamicRegistration@@U?$default_delete@VGameEventDynamicRegistration@@@std@@@std@@@Z
    MCAPI bool initialize(std::unique_ptr<class GameEventDynamicRegistration>);

    // symbol: ??4GameEventListenerComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class GameEventListenerComponent& operator=(class GameEventListenerComponent&& other);

    // symbol: ?tryGetListenerRegistration@GameEventListenerComponent@@QEBAPEAVGameEventDynamicRegistration@@XZ
    MCAPI class GameEventDynamicRegistration* tryGetListenerRegistration() const;

    // symbol: ??1GameEventListenerComponent@@QEAA@XZ
    MCAPI ~GameEventListenerComponent();

    // NOLINTEND
};
