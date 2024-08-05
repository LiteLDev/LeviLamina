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
    // vIndex: 0
    virtual ~RenderOffsetsItemComponent() = default;

    // vIndex: 1
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2
    virtual void writeSettings();

    // vIndex: 3
    virtual bool isNetworkComponent() const;

    // vIndex: 4
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Main_Hand_Defaults;

    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Off_Hand_Defaults;

    // NOLINTEND
};
