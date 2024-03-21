#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ConstantFactory; }
// clang-format on

namespace Scripting {

struct EnumBinding {
public:
    // EnumBinding inner types declare
    // clang-format off
    struct EnumValue;
    // clang-format on

    // EnumBinding inner types define
    struct EnumValue {
    public:
        // prevent constructor by default
        EnumValue& operator=(EnumValue const&);
        EnumValue(EnumValue const&);
        EnumValue();

    public:
        // NOLINTBEGIN
        // symbol: ??0EnumValue@EnumBinding@Scripting@@QEAA@$$QEAU012@@Z
        MCAPI EnumValue(struct Scripting::EnumBinding::EnumValue&&);

        // symbol: ??1EnumValue@EnumBinding@Scripting@@QEAA@XZ
        MCAPI ~EnumValue();

        // NOLINTEND
    };

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
    // ??0EnumBinding@Scripting@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vmeta_type@entt@@_NV?$vector@UConstantFactory@Scripting@@V?$allocator@UConstantFactory@Scripting@@@std@@@3@V?$vector@UEnumValue@EnumBinding@Scripting@@V?$allocator@UEnumValue@EnumBinding@Scripting@@@std@@@3@@Z
    MCAPI
    EnumBinding(std::string, entt::meta_type, bool, std::vector<struct Scripting::ConstantFactory>, std::vector<struct Scripting::EnumBinding::EnumValue>);

    // symbol: ??1EnumBinding@Scripting@@QEAA@XZ
    MCAPI ~EnumBinding();

    // NOLINTEND
};

}; // namespace Scripting
