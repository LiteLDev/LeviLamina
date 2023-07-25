#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class MultiplayerServiceObserver {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOCIAL_MULTIPLAYERSERVICEOBSERVER
public:
    MultiplayerServiceObserver& operator=(MultiplayerServiceObserver const&) = delete;
    MultiplayerServiceObserver(MultiplayerServiceObserver const&)            = delete;
    MultiplayerServiceObserver()                                             = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SOCIAL_MULTIPLAYERSERVICEOBSERVER
    /**
     * @symbol
     * ?onUserDisconnectedBecauseConcurrentLogin\@MultiplayerServiceObserver\@Social\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onUserDisconnectedBecauseConcurrentLogin(std::string const&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MultiplayerServiceObserver();
#endif
};

}; // namespace Social
