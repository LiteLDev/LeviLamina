#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IPrinter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPrinter; }
namespace Scripting { struct ContextId; }
// clang-format on

class ScriptPrintLogger : public ::Scripting::IPrinter {
public:
    // prevent constructor by default
    ScriptPrintLogger& operator=(ScriptPrintLogger const&);
    ScriptPrintLogger(ScriptPrintLogger const&);
    ScriptPrintLogger();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPrintLogger() = default;

    // vIndex: 1
    virtual void onInfo(struct Scripting::ContextId, std::string_view message) const;

    // vIndex: 2
    virtual void onWarn(struct Scripting::ContextId, std::string_view message) const;

    // vIndex: 3
    virtual void onError(struct Scripting::ContextId, std::string_view message) const;

    // vIndex: 4
    virtual void onException(struct Scripting::ContextId, entt::meta_any const& e) const;

    // vIndex: 5
    virtual bool shouldPrintException(struct Scripting::ContextId, entt::meta_any const& e) const;

    // vIndex: 6
    virtual void onPromiseRejection(struct Scripting::ContextId, std::string_view message, bool) const;

    // NOLINTEND
};
