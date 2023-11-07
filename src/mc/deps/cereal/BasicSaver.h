#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { class BasicSchema; }
// clang-format on

namespace cereal {

class BasicSaver {
public:
    // prevent constructor by default
    BasicSaver& operator=(BasicSaver const&);
    BasicSaver(BasicSaver const&);
    BasicSaver();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BasicSaver@cereal@@UEAA@XZ
    virtual ~BasicSaver();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?saveImpl@BasicSaver@cereal@@AEAA_NAEAUSchemaWriter@2@Umeta_handle@entt@@AEBVBasicSchema@internal@2@@Z
    MCAPI bool saveImpl(struct cereal::SchemaWriter&, entt::meta_handle, class cereal::internal::BasicSchema const&);

    // NOLINTEND
};

}; // namespace cereal
