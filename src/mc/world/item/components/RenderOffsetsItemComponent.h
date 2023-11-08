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
