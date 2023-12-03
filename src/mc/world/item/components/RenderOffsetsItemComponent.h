#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RenderOffsetsItemComponent {
public:
    // RenderOffsetsItemComponent inner types declare
    // clang-format off
    struct ItemTransforms;
    struct TRS;
    // clang-format on

    // RenderOffsetsItemComponent inner types define
    struct ItemTransforms {
    public:
        // prevent constructor by default
        ItemTransforms& operator=(ItemTransforms const&);
        ItemTransforms(ItemTransforms const&);
        ItemTransforms();

    public:
        // NOLINTBEGIN
        // symbol: ??8ItemTransforms@RenderOffsetsItemComponent@@QEBA_NAEBU01@@Z
        MCAPI bool operator==(struct RenderOffsetsItemComponent::ItemTransforms const&) const;

        // NOLINTEND
    };

    struct TRS {
    public:
        // prevent constructor by default
        TRS& operator=(TRS const&);
        TRS(TRS const&);
        TRS();

    public:
        // NOLINTBEGIN
        // symbol: ??8TRS@RenderOffsetsItemComponent@@QEBA_NAEBU01@@Z
        MCAPI bool operator==(struct RenderOffsetsItemComponent::TRS const&) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RenderOffsetsItemComponent& operator=(RenderOffsetsItemComponent const&);
    RenderOffsetsItemComponent(RenderOffsetsItemComponent const&);
    RenderOffsetsItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RenderOffsetsItemComponent@@UEAA@XZ
    virtual ~RenderOffsetsItemComponent() = default;

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: ?writeSettings@ItemComponent@@UEAAXXZ
    virtual void writeSettings();

    // vIndex: 3, symbol: ?isNetworkComponent@InteractButtonItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@?$NetworkedItemComponent@VRenderOffsetsItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5, symbol:
    // ?initializeFromNetwork@?$NetworkedItemComponent@VRenderOffsetsItemComponent@@@@UEAA_NAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@ItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?_canUseOn@ItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?_useOn@ItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9, symbol: ?_initializeComponent@ItemComponent@@MEBAXXZ
    virtual void _initializeComponent() const;

    // symbol:
    // ?bindType@RenderOffsetsItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@RenderOffsetsItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?Main_Hand_Defaults@RenderOffsetsItemComponent@@0UItemTransforms@1@A
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Main_Hand_Defaults;

    // symbol: ?Off_Hand_Defaults@RenderOffsetsItemComponent@@0UItemTransforms@1@A
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Off_Hand_Defaults;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $Main_Hand_Defaults() { return Main_Hand_Defaults; }

    static auto& $Off_Hand_Defaults() { return Off_Hand_Defaults; }

    // NOLINTEND
};
