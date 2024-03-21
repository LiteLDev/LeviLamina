#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace BlockGeometrySerializer {

class Constraint : public ::cereal::Constraint {
public:
    // prevent constructor by default
    Constraint& operator=(Constraint const&);
    Constraint(Constraint const&);
    Constraint();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?doValidate@Constraint@BlockGeometrySerializer@@UEBAXAEBVmeta_any@entt@@AEAVSerializerContext@cereal@@@Z
    virtual void doValidate(entt::meta_any const&, class cereal::SerializerContext&) const;

    // vIndex: 1, symbol: __gen_??1Constraint@BlockGeometrySerializer@@UEAA@XZ
    virtual ~Constraint() = default;

    // vIndex: 2, symbol:
    // ?description@Constraint@BlockGeometrySerializer@@UEBA?AUConstraintDescription@internal@cereal@@XZ
    virtual struct cereal::internal::ConstraintDescription description() const;

    // symbol:
    // ?checkValidVanillaName@Constraint@BlockGeometrySerializer@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool checkValidVanillaName(std::string const&);

    // NOLINTEND
};

}; // namespace BlockGeometrySerializer
