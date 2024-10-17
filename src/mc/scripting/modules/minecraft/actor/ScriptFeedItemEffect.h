#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
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
    MCAPI static class Scripting::ClassBindingBuilder<struct FeedItem::Effect> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
