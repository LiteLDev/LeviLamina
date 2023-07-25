#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptActorDefinitionFeedItem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTACTORDEFINITIONFEEDITEM
public:
    ScriptActorDefinitionFeedItem& operator=(ScriptActorDefinitionFeedItem const&) = delete;
    ScriptActorDefinitionFeedItem(ScriptActorDefinitionFeedItem const&)            = delete;
    ScriptActorDefinitionFeedItem()                                                = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptActorDefinitionFeedItem\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UActorDefinitionFeedItem\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ActorDefinitionFeedItem> bind();
};

}; // namespace ScriptModuleMinecraft
