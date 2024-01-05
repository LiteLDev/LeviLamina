#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct IteratorBinding; }
namespace Scripting { struct PropertyBinding; }
// clang-format on

namespace Scripting {

struct ClassBinding {
public:
    // prevent constructor by default
    ClassBinding& operator=(ClassBinding const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ClassBinding@Scripting@@QEAA@XZ
    MCAPI ClassBinding();

    // symbol: ??0ClassBinding@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI ClassBinding(struct Scripting::ClassBinding&&);

    // symbol: ??0ClassBinding@Scripting@@QEAA@AEBU01@@Z
    MCAPI ClassBinding(struct Scripting::ClassBinding const&);

    // symbol:
    // ??0ClassBinding@Scripting@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vmeta_type@entt@@1V?$vector@UFunctionBinding@Scripting@@V?$allocator@UFunctionBinding@Scripting@@@std@@@3@V?$shared_ptr@UIteratorBinding@Scripting@@@3@2V?$vector@UPropertyBinding@Scripting@@V?$allocator@UPropertyBinding@Scripting@@@std@@@3@V?$vector@UConstantFactory@Scripting@@V?$allocator@UConstantFactory@Scripting@@@std@@@3@@Z
    MCAPI
    ClassBinding(std::string name_, entt::meta_type type_, entt::meta_type, std::vector<struct Scripting::FunctionBinding>, std::shared_ptr<struct Scripting::IteratorBinding>, std::vector<struct Scripting::FunctionBinding>, std::vector<struct Scripting::PropertyBinding>, std::vector<struct Scripting::ConstantFactory>);

    // symbol: ??1ClassBinding@Scripting@@QEAA@XZ
    MCAPI ~ClassBinding();

    // NOLINTEND
};

}; // namespace Scripting
