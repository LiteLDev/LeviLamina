#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_80 {

struct ComponentItemComponentData {
public:
    // NOLINTBEGIN
    MCAPI ComponentItemComponentData();

    MCAPI ComponentItemComponentData(struct Puv::v1_20_80::ComponentItemComponentData&&);

    MCAPI ComponentItemComponentData(struct Puv::v1_20_80::ComponentItemComponentData const&);

    MCAPI struct Puv::v1_20_80::ComponentItemComponentData&
    operator=(struct Puv::v1_20_80::ComponentItemComponentData&&);

    MCAPI struct Puv::v1_20_80::ComponentItemComponentData&
    operator=(struct Puv::v1_20_80::ComponentItemComponentData const&);

    MCAPI ~ComponentItemComponentData();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static class SemVersion const FIRST_VERSION;

    MCAPI static class SemVersion const LAST_VERSION;

    // NOLINTEND
};

}; // namespace Puv::v1_20_80
