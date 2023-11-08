#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityComponentFactoryCereal.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VolumeComponentFactory : public ::EntityComponentFactoryCereal {
public:
    // prevent constructor by default
    VolumeComponentFactory& operator=(VolumeComponentFactory const&);
    VolumeComponentFactory(VolumeComponentFactory const&);
    VolumeComponentFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VolumeComponentFactory@@UEAA@XZ
    virtual ~VolumeComponentFactory() = default;

    // symbol: ??0VolumeComponentFactory@@QEAA@AEAUReflectionCtx@cereal@@@Z
    MCAPI explicit VolumeComponentFactory(struct cereal::ReflectionCtx&);

    // symbol: ?registerVolumeComponentDefinitions@VolumeComponentFactory@@QEAAX_N@Z
    MCAPI void registerVolumeComponentDefinitions(bool);

    // NOLINTEND
};
