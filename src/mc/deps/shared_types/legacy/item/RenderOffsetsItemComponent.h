#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

struct RenderOffsetsItemComponent {
public:
    // RenderOffsetsItemComponent inner types declare
    // clang-format off
    struct TRS;
    struct ItemTransforms;
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
    };

    struct ItemTransforms {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 36, ::SharedTypes::Legacy::RenderOffsetsItemComponent::TRS> mFirstPerson;
        ::ll::TypedStorage<4, 36, ::SharedTypes::Legacy::RenderOffsetsItemComponent::TRS> mThirdPerson;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 72, ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms> mMainHand;
    ::ll::TypedStorage<4, 72, ::SharedTypes::Legacy::RenderOffsetsItemComponent::ItemTransforms> mOffhand;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::SharedTypes::Legacy::RenderOffsetsItemComponent const& other) const;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
