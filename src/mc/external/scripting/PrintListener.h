#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IPrinter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPrinter; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting::QuickJS {

class PrintListener : public ::Scripting::IPrinter {
public:
    // prevent constructor by default
    PrintListener& operator=(PrintListener const&);
    PrintListener(PrintListener const&);
    PrintListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PrintListener@QuickJS@Scripting@@UEAA@XZ
    virtual ~PrintListener() = default;

    // vIndex: 1, symbol:
    // ?onInfo@PrintListener@QuickJS@Scripting@@UEBAXUContextId@3@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void onInfo(struct Scripting::ContextId, std::string_view const& message) const;

    // vIndex: 2, symbol:
    // ?onWarn@PrintListener@QuickJS@Scripting@@UEBAXUContextId@3@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void onWarn(struct Scripting::ContextId, std::string_view const& message) const;

    // vIndex: 3, symbol:
    // ?onError@PrintListener@QuickJS@Scripting@@UEBAXUContextId@3@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void onError(struct Scripting::ContextId, std::string_view const& message) const;

    // vIndex: 4, symbol: ?onException@PrintListener@QuickJS@Scripting@@UEBAXUContextId@3@AEBVmeta_any@entt@@@Z
    virtual void onException(struct Scripting::ContextId, entt::meta_any const& e) const;

    // vIndex: 5, symbol:
    // ?shouldPrintException@PrintListener@QuickJS@Scripting@@UEBA_NUContextId@3@AEBVmeta_any@entt@@@Z
    virtual bool shouldPrintException(struct Scripting::ContextId, entt::meta_any const& e) const;

    // vIndex: 6, symbol:
    // ?onPromiseRejection@PrintListener@QuickJS@Scripting@@UEBAXUContextId@3@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z
    virtual void onPromiseRejection(struct Scripting::ContextId, std::string_view const& reason, bool) const;

    // symbol:
    // ??0PrintListener@QuickJS@Scripting@@QEAA@V?$function@$$A6AXUContextId@Scripting@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z@std@@00V?$function@$$A6AXUContextId@Scripting@@AEBVmeta_any@entt@@@Z@4@V?$function@$$A6A_NUContextId@Scripting@@AEBVmeta_any@entt@@@Z@4@V?$function@$$A6AXUContextId@Scripting@@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z@4@@Z
    MCAPI PrintListener(std::function<void(struct Scripting::ContextId, std::string_view const&)>, std::function<void(struct Scripting::ContextId, std::string_view const&)>, std::function<void(struct Scripting::ContextId, std::string_view const&)>, std::function<void(struct Scripting::ContextId, entt::meta_any const&)>, std::function<bool(struct Scripting::ContextId, entt::meta_any const&)>, std::function<void(struct Scripting::ContextId, std::string_view const&, bool)>);

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
