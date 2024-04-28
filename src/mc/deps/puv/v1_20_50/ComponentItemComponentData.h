#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct ComponentItemComponentData {
public:
    // NOLINTBEGIN
    // symbol: ??0ComponentItemComponentData@v1_20_50@Puv@@QEAA@XZ
    MCAPI ComponentItemComponentData();

    // symbol: ??0ComponentItemComponentData@v1_20_50@Puv@@QEAA@$$QEAU012@@Z
    MCAPI ComponentItemComponentData(struct Puv::v1_20_50::ComponentItemComponentData&&);

    // symbol: ??0ComponentItemComponentData@v1_20_50@Puv@@QEAA@AEBU012@@Z
    MCAPI ComponentItemComponentData(struct Puv::v1_20_50::ComponentItemComponentData const&);

    // symbol: ??4ComponentItemComponentData@v1_20_50@Puv@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct Puv::v1_20_50::ComponentItemComponentData&
    operator=(struct Puv::v1_20_50::ComponentItemComponentData&&);

    // symbol: ??4ComponentItemComponentData@v1_20_50@Puv@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct Puv::v1_20_50::ComponentItemComponentData&
    operator=(struct Puv::v1_20_50::ComponentItemComponentData const&);

    // symbol: ??1ComponentItemComponentData@v1_20_50@Puv@@QEAA@XZ
    MCAPI ~ComponentItemComponentData();

    // symbol: ?bindType@ComponentItemComponentData@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?FIRST_VERSION@ComponentItemComponentData@v1_20_50@Puv@@2VSemVersion@@B
    MCAPI static class SemVersion const FIRST_VERSION;

    // symbol: ?LAST_VERSION@ComponentItemComponentData@v1_20_50@Puv@@2VSemVersion@@B
    MCAPI static class SemVersion const LAST_VERSION;

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
