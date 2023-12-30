#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Scripting {

struct ConstantFactory {
public:
    // prevent constructor by default
    ConstantFactory& operator=(ConstantFactory const&);
    ConstantFactory();

public:
    // NOLINTBEGIN
    // symbol: ??0ConstantFactory@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI ConstantFactory(struct Scripting::ConstantFactory&&);

    // symbol: ??0ConstantFactory@Scripting@@QEAA@AEBU01@@Z
    MCAPI ConstantFactory(struct Scripting::ConstantFactory const&);

    // symbol:
    // ??0ConstantFactory@Scripting@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vmeta_type@entt@@_NV?$function@$$A6A?AVmeta_any@entt@@AEAVWeakLifetimeScope@Scripting@@@Z@3@@Z
    MCAPI
    ConstantFactory(std::string, entt::meta_type, bool, std::function<entt::meta_any(class Scripting::WeakLifetimeScope&)>);

    // symbol: ??1ConstantFactory@Scripting@@QEAA@XZ
    MCAPI ~ConstantFactory();

    // NOLINTEND
};

}; // namespace Scripting
