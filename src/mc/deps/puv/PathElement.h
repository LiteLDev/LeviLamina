#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

namespace Puv::internal {

struct PathElement {
public:
    // prevent constructor by default
    PathElement& operator=(PathElement const&);
    PathElement(PathElement const&);
    PathElement();

public:
    // NOLINTBEGIN
    // symbol: ??0PathElement@internal@Puv@@QEAA@$$QEAU012@@Z
    MCAPI PathElement(struct Puv::internal::PathElement&&);

    // symbol:
    // ??0PathElement@internal@Puv@@QEAA@Vmeta_type@entt@@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ContextType@SerializerContext@cereal@@@Z
    MCAPI PathElement(entt::meta_type, uint, std::string, ::cereal::SerializerContext::ContextType);

    // symbol: ??1PathElement@internal@Puv@@QEAA@XZ
    MCAPI ~PathElement();

    // NOLINTEND
};

}; // namespace Puv::internal
