#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
struct ItemCustomComponentData;
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentInterface; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptItemCustomComponentSignalCollection : public ::ScriptDeferredEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptItemCustomComponentSignalCollection() /*override*/ = default;

    virtual void
    registerClosures(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&) = 0;

    virtual void subscribeToItemForComponent(::ComponentItem&, ::std::vector<::ItemCustomComponentData> const&) = 0;

    virtual void clear() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
