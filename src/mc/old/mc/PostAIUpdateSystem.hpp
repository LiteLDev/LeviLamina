/**
 * @file  PostAIUpdateSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PostAIUpdateSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSTAIUPDATESYSTEM
public:
    class PostAIUpdateSystem& operator=(class PostAIUpdateSystem const &) = delete;
    PostAIUpdateSystem(class PostAIUpdateSystem const &) = delete;
    PostAIUpdateSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@PostAIUpdateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?doPostAiUpdate\@PostAIUpdateSystem\@\@CAXAEAVStrictEntityContext\@\@AEBUAttributesComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@AEAUNoActionTimeComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UWasOnGroundFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void doPostAiUpdate(class StrictEntityContext &, struct AttributesComponent const &, class Optional<class FlagComponent<struct OnGroundFlag> const>, struct NoActionTimeComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasOnGroundFlag>>);

private:

};