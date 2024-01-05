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
    // vIndex: 0, symbol: __gen_??1ScriptPrintLogger@@UEAA@XZ
    virtual ~ScriptPrintLogger() = default;

    // vIndex: 1, symbol:
    // ?onInfo@ScriptPrintLogger@@UEBAXUContextId@Scripting@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void onInfo(struct Scripting::ContextId, std::string_view const& message) const;

    // vIndex: 2, symbol:
    // ?onWarn@ScriptPrintLogger@@UEBAXUContextId@Scripting@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void onWarn(struct Scripting::ContextId, std::string_view const& message) const;

    // vIndex: 3, symbol:
    // ?onError@ScriptPrintLogger@@UEBAXUContextId@Scripting@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void onError(struct Scripting::ContextId, std::string_view const& message) const;

    // vIndex: 4, symbol: ?onException@ScriptPrintLogger@@UEBAXUContextId@Scripting@@AEBVmeta_any@entt@@@Z
    virtual void onException(struct Scripting::ContextId, entt::meta_any const& e) const;

    // vIndex: 5, symbol: ?shouldPrintException@ScriptPrintLogger@@UEBA_NUContextId@Scripting@@AEBVmeta_any@entt@@@Z
    virtual bool shouldPrintException(struct Scripting::ContextId, entt::meta_any const& e) const;

    // vIndex: 6, symbol:
    // ?onPromiseRejection@ScriptPrintLogger@@UEBAXUContextId@Scripting@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z
    virtual void onPromiseRejection(struct Scripting::ContextId, std::string_view const& message, bool) const;

    // NOLINTEND
};
