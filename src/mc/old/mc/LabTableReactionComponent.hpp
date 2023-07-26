/**
 * @file  LabTableReactionComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LabTableReactionComponent.
 *
 */
class LabTableReactionComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LABTABLEREACTIONCOMPONENT
public:
    class LabTableReactionComponent& operator=(class LabTableReactionComponent const &) = delete;
    LabTableReactionComponent(class LabTableReactionComponent const &) = delete;
    LabTableReactionComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LABTABLEREACTIONCOMPONENT
    /**
     * @symbol  ?_onEnd\@LabTableReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onEnd(class LabTableReaction &, class BlockSource &);
    /**
     * @symbol  ?_onStart\@LabTableReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onStart(class LabTableReaction &, class BlockSource &);
    /**
     * @symbol  ?_onTick\@LabTableReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onTick(class LabTableReaction &, class BlockSource &);
#endif

};