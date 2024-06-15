#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace PublisherItemComponent {

class OnUseOn {
public:
    // prevent constructor by default
    OnUseOn& operator=(OnUseOn const&);
    OnUseOn(OnUseOn const&);

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildNetworkTag@OnUseOn@PublisherItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    MCVAPI std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // symbol:
    // ?initializeFromNetwork@OnUseOn@PublisherItemComponent@@UEAA_NAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    MCVAPI bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // symbol: ?isNetworkComponent@OnUseOn@PublisherItemComponent@@UEBA_NXZ
    MCVAPI bool isNetworkComponent() const;

    // symbol: ??0OnUseOn@PublisherItemComponent@@QEAA@XZ
    MCAPI OnUseOn();

    // symbol: ?getIdentifier@OnUseOn@PublisherItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};

}; // namespace PublisherItemComponent
