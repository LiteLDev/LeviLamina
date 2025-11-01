#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RenderOffsetsItemComponent : public ::NetworkedItemComponent<::RenderOffsetsItemComponent> {
public:
    // RenderOffsetsItemComponent inner types declare
    // clang-format off
    struct ItemTransforms;
    struct TRS;
    // clang-format on
    
    // RenderOffsetsItemComponent inner types define
    struct TRS {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::std::array<float, 3>> mTranslation;
        ::ll::TypedStorage<4, 12, ::std::array<float, 3>> mRotation;
        ::ll::TypedStorage<4, 12, ::std::array<float, 3>> mScale;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::RenderOffsetsItemComponent::TRS const& other) const;
        // NOLINTEND
    
    };
    
    struct ItemTransforms {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 36, ::RenderOffsetsItemComponent::TRS> mFirstPerson;
        ::ll::TypedStorage<4, 36, ::RenderOffsetsItemComponent::TRS> mThirdPerson;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::RenderOffsetsItemComponent::ItemTransforms const& other) const;
        // NOLINTEND
    
    };
    
    enum class Hand : int {
        MainHand = 0,
        OffHand = 1,
    };
    
    enum class Perspective : int {
        FirstPerson = 0,
        ThirdPerson = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 72, ::RenderOffsetsItemComponent::ItemTransforms> mMainHand;
    ::ll::TypedStorage<4, 72, ::RenderOffsetsItemComponent::ItemTransforms> mOffhand;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RenderOffsetsItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static void _fromString(::RenderOffsetsItemComponent&, ::std::string const&);

    MCAPI static void bindType(::cereal::ReflectionCtx& ctx, ::std::vector<::AllExperiments> const& requiredToggles, ::std::optional<::SemVersion> releasedMinFormatVersion);

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::RenderOffsetsItemComponent::ItemTransforms& Main_Hand_Defaults();

    MCAPI static ::RenderOffsetsItemComponent::ItemTransforms& Off_Hand_Defaults();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
