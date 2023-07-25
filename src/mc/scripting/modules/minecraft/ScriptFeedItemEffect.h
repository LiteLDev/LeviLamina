#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/world/actor/FeedItem.h"

namespace ScriptModuleMinecraft {

class ScriptFeedItemEffect {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTFEEDITEMEFFECT
public:
    ScriptFeedItemEffect& operator=(ScriptFeedItemEffect const&) = delete;
    ScriptFeedItemEffect(ScriptFeedItemEffect const&)            = delete;
    ScriptFeedItemEffect()                                       = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptFeedItemEffect\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UEffect\@FeedItem\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct FeedItem::Effect> bind();
};

}; // namespace ScriptModuleMinecraft
