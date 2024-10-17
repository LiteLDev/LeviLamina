#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct FeedItem;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptFeedItem {
public:
    // prevent constructor by default
    ScriptFeedItem& operator=(ScriptFeedItem const&);
    ScriptFeedItem(ScriptFeedItem const&);
    ScriptFeedItem();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<struct FeedItem> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
