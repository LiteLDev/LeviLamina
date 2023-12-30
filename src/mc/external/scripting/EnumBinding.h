#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ConstantFactory; }
// clang-format on

namespace Scripting {

struct EnumBinding {
public:
    // prevent constructor by default
    EnumBinding& operator=(EnumBinding const&);

public:
    // NOLINTBEGIN
    // symbol: ??0EnumBinding@Scripting@@QEAA@XZ
    MCAPI EnumBinding();

    // symbol: ??0EnumBinding@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI EnumBinding(struct Scripting::EnumBinding&&);

    // symbol: ??0EnumBinding@Scripting@@QEAA@AEBU01@@Z
    MCAPI EnumBinding(struct Scripting::EnumBinding const&);

    // symbol:
    // ??0EnumBinding@Scripting@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vmeta_type@entt@@_NV?$vector@UConstantFactory@Scripting@@V?$allocator@UConstantFactory@Scripting@@@std@@@3@V?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vmeta_any@entt@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vmeta_any@entt@@@std@@@2@@3@@Z
    MCAPI
    EnumBinding(std::string, entt::meta_type, bool, std::vector<struct Scripting::ConstantFactory>, std::vector<std::pair<std::string, entt::meta_any>>);

    // symbol: ??1EnumBinding@Scripting@@QEAA@XZ
    MCAPI ~EnumBinding();

    // NOLINTEND
};

}; // namespace Scripting
