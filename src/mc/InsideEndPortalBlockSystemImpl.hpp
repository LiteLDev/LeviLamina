/**
 * @file  InsideEndPortalBlockSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideEndPortalBlockSystemImpl.
 *
 */
class InsideEndPortalBlockSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEENDPORTALBLOCKSYSTEMIMPL
public:
    class InsideEndPortalBlockSystemImpl& operator=(class InsideEndPortalBlockSystemImpl const &) = delete;
    InsideEndPortalBlockSystemImpl(class InsideEndPortalBlockSystemImpl const &) = delete;
    InsideEndPortalBlockSystemImpl() = delete;
#endif

public:
    /**
     * @symbol  ?_tickInsideEndPortalBlockSystem\@InsideEndPortalBlockSystemImpl\@\@SAXAEAVStrictEntityContext\@\@AEBU?$InsideBlockWithPosAndBlockComponent\@UEndPortalBlockFlag\@\@\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tickInsideEndPortalBlockSystem(class StrictEntityContext &, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag> const &, class ActorOwnerComponent &);

};