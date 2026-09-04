#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/deps/shared_types/legacy/item/RenderOffsetsItemComponent.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RenderOffsetsItemComponent : public ::NetworkedItemComponent<::RenderOffsetsItemComponent> {
public:
    // RenderOffsetsItemComponent inner types define
    enum class Hand : int {
        MainHand = 0,
        OffHand  = 1,
    };

    enum class Perspective : int {
        FirstPerson = 0,
        ThirdPerson = 1,
    };

    using ItemTransforms = ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms;

    using TRS = ::SharedTypes::Legacy::RenderOffsetsItemComponent::TRS;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 72, ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms> mMainHand;
    ::ll::TypedStorage<4, 72, ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms> mOffhand;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void _buildMatrixFromData(
        ::MatrixStack::MatrixStackRef&                                           mvs,
        ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms const& hand,
        ::RenderOffsetsItemComponent::Perspective                                perspective
    );
#endif

    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms& Main_Hand_Defaults();

    MCAPI static ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms& Off_Hand_Defaults();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
