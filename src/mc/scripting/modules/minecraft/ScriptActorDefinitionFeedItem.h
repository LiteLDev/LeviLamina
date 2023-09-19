#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct ActorDefinitionFeedItem;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorDefinitionFeedItem {
public:
    // prevent constructor by default
    ScriptActorDefinitionFeedItem& operator=(ScriptActorDefinitionFeedItem const&);
    ScriptActorDefinitionFeedItem(ScriptActorDefinitionFeedItem const&);
    ScriptActorDefinitionFeedItem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptActorDefinitionFeedItem@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UActorDefinitionFeedItem@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ActorDefinitionFeedItem> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
