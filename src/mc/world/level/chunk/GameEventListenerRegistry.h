#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventListenerRegistry {
public:
    // prevent constructor by default
    GameEventListenerRegistry& operator=(GameEventListenerRegistry const&);
    GameEventListenerRegistry(GameEventListenerRegistry const&);
    GameEventListenerRegistry();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getListeners@GameEventListenerRegistry@@QEBA?AV?$vector@V?$reference_wrapper@VGameEventListener@@@std@@V?$allocator@V?$reference_wrapper@VGameEventListener@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::reference_wrapper<class GameEventListener>> getListeners() const;

    // symbol:
    // ?registerListener@GameEventListenerRegistry@@QEAA?AV?$final_action@V?$function@$$A6AXXZ@std@@@gsl@@AEAVGameEventListener@@@Z
    MCAPI gsl::final_action<std::function<void()>> registerListener(class GameEventListener&);

    // NOLINTEND
};
