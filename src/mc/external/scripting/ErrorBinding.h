#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct PropertyBinding; }
// clang-format on

namespace Scripting {

struct ErrorBinding {
public:
    // prevent constructor by default
    ErrorBinding& operator=(ErrorBinding const&);
    ErrorBinding(ErrorBinding const&);
    ErrorBinding();

public:
    // NOLINTBEGIN
    // symbol: ??0ErrorBinding@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI ErrorBinding(struct Scripting::ErrorBinding&&);

    // symbol:
    // ??0ErrorBinding@Scripting@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vmeta_type@entt@@V?$vector@UPropertyBinding@Scripting@@V?$allocator@UPropertyBinding@Scripting@@@std@@@3@@Z
    MCAPI ErrorBinding(std::string name_, entt::meta_type type_, std::vector<struct Scripting::PropertyBinding>);

    // symbol: ??1ErrorBinding@Scripting@@QEAA@XZ
    MCAPI ~ErrorBinding();

    // NOLINTEND
};

}; // namespace Scripting
