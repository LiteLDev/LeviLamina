#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct FeedItem;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptFeedItem {

public:
    // prevent constructor by default
    ScriptFeedItem& operator=(ScriptFeedItem const&) = delete;
    ScriptFeedItem(ScriptFeedItem const&)            = delete;
    ScriptFeedItem()                                 = delete;

public:
    /**
     * @symbol
     * ?bind\@ScriptFeedItem\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UFeedItem\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct FeedItem> bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
