#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class StrongObjectHandle; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Scripting {

struct ObjectFactory {
public:
    // prevent constructor by default
    ObjectFactory& operator=(ObjectFactory const&);
    ObjectFactory();

public:
    // NOLINTBEGIN
    // symbol: ??0ObjectFactory@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI ObjectFactory(struct Scripting::ObjectFactory&&);

    // symbol: ??0ObjectFactory@Scripting@@QEAA@AEBU01@@Z
    MCAPI ObjectFactory(struct Scripting::ObjectFactory const&);

    // symbol:
    // ??0ObjectFactory@Scripting@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AVStrongObjectHandle@Scripting@@VWeakLifetimeScope@2@@Z@3@Vmeta_type@entt@@@Z
    MCAPI ObjectFactory(
        std::string name_,
        std::function<class Scripting::StrongObjectHandle(class Scripting::WeakLifetimeScope)>,
        entt::meta_type type_
    );

    // symbol: ??1ObjectFactory@Scripting@@QEAA@XZ
    MCAPI ~ObjectFactory();

    // NOLINTEND
};

}; // namespace Scripting
