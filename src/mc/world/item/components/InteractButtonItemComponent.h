#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class InteractButtonItemComponent : public ::ItemComponent {
public:
    // prevent constructor by default
    InteractButtonItemComponent(InteractButtonItemComponent const&);
    InteractButtonItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?isNetworkComponent@InteractButtonItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@InteractButtonItemComponent@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5, symbol:
    // ?initializeFromNetwork@InteractButtonItemComponent@@UEAA_NAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 9, symbol: ?_initializeComponent@InteractButtonItemComponent@@UEBAXXZ
    virtual void _initializeComponent() const;

    // symbol: ??1InteractButtonItemComponent@@UEAA@XZ
    MCVAPI ~InteractButtonItemComponent();

    // symbol:
    // ?getInteractText@InteractButtonItemComponent@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getInteractText() const;

    // symbol: ??4InteractButtonItemComponent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class InteractButtonItemComponent& operator=(class InteractButtonItemComponent const&);

    // symbol:
    // ?bindType@InteractButtonItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@InteractButtonItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
