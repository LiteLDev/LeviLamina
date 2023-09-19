#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/world/actor/FeedItem.h"

namespace ScriptModuleMinecraft {

class ScriptFeedItemEffect {
public:
    // prevent constructor by default
    ScriptFeedItemEffect& operator=(ScriptFeedItemEffect const&);
    ScriptFeedItemEffect(ScriptFeedItemEffect const&);
    ScriptFeedItemEffect();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptFeedItemEffect@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UEffect@FeedItem@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct FeedItem::Effect> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
