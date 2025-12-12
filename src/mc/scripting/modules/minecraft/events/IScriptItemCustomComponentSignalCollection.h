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
    // vIndex: 0
    virtual ~IScriptItemCustomComponentSignalCollection() /*override*/ = default;

    // vIndex: 13
    virtual void
    registerClosures(::HashedString const&, ::ScriptModuleMinecraft::ScriptItemCustomComponentInterface&&) = 0;

    // vIndex: 14
    virtual void subscribeToItemForComponent(::ComponentItem&, ::std::vector<::ItemCustomComponentData> const&) = 0;

    // vIndex: 15
    virtual void clear() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
