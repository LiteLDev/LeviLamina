#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptFeedItem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTFEEDITEM
public:
    ScriptFeedItem& operator=(ScriptFeedItem const&) = delete;
    ScriptFeedItem(ScriptFeedItem const&)            = delete;
    ScriptFeedItem()                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptFeedItem\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UFeedItem\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct FeedItem> bind();
};

}; // namespace ScriptModuleMinecraft
