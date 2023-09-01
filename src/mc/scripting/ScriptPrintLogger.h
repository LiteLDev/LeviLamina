#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
// clang-format on

class ScriptPrintLogger {
public:
    // prevent constructor by default
    ScriptPrintLogger& operator=(ScriptPrintLogger const&) = delete;
    ScriptPrintLogger(ScriptPrintLogger const&)            = delete;
    ScriptPrintLogger()                                    = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?onInfo@ScriptPrintLogger@@UEBAXUContextId@Scripting@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void onInfo(struct Scripting::ContextId, std::string_view const&) const;

    // vIndex: 2, symbol:
    // ?onWarn@ScriptPrintLogger@@UEBAXUContextId@Scripting@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void onWarn(struct Scripting::ContextId, std::string_view const&) const;

    // vIndex: 3, symbol:
    // ?onError@ScriptPrintLogger@@UEBAXUContextId@Scripting@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void onError(struct Scripting::ContextId, std::string_view const&) const;

    // vIndex: 4, symbol: ?onException@ScriptPrintLogger@@UEBAXUContextId@Scripting@@AEBVmeta_any@entt@@@Z
    virtual void onException(struct Scripting::ContextId, entt::meta_any const&) const;

    // vIndex: 5, symbol: ?shouldPrintException@ScriptPrintLogger@@UEBA_NUContextId@Scripting@@AEBVmeta_any@entt@@@Z
    virtual bool shouldPrintException(struct Scripting::ContextId, entt::meta_any const&) const;

    // vIndex: 6, symbol:
    // ?onPromiseRejection@ScriptPrintLogger@@UEBAXUContextId@Scripting@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z
    virtual void onPromiseRejection(struct Scripting::ContextId, std::string_view const&, bool) const;

    // NOLINTEND
};
