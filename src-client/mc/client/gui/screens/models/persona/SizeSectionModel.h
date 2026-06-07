#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/ArmSize.h"
#include "mc/world/actor/player/persona/BodySize.h"

// auto generated forward declare list
// clang-format off
struct PersonaCharacter;
// clang-format on

namespace persona {

class SizeSectionModel {
public:
    // SizeSectionModel inner types define
    enum class Section : schar {
        Height  = 0,
        ArmSize = 1,
        None    = 2,
    };

    using ArmSizeType = ::persona::ArmSize::Type;

    using BodySizeType = ::persona::BodySize::Type;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::persona::SizeSectionModel::Section> mActiveSection;
    ::ll::TypedStorage<1, 1, ::persona::ArmSize::Type>             mEquippedArmSize;
    ::ll::TypedStorage<1, 1, ::persona::ArmSize::Type>             mPreviewedArmSize;
    ::ll::TypedStorage<8, 8, ::persona::BodySize::Type>            mEquippedHeight;
    ::ll::TypedStorage<8, 8, ::persona::BodySize::Type>            mPreviewedHeight;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SizeSectionModel() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool canEquipPreviewed() const;

    MCFOLD ::persona::ArmSize::Type const& getEquippedArmSize() const;

    MCFOLD ::persona::BodySize::Type const& getEquippedHeight() const;

    MCFOLD ::persona::ArmSize::Type const& getPreviewedArmSize() const;

    MCFOLD ::persona::BodySize::Type const& getPreviewedHeight() const;

    MCAPI bool isActive() const;

    MCAPI bool isArmSizePreviewed(::persona::ArmSize::Type const& armSizeType) const;

    MCAPI bool isHeightPreviewed(::persona::BodySize::Type const& heightOption) const;

    MCAPI void setActiveSection(::persona::SizeSectionModel::Section const& newActiveSection);

    MCAPI void setPreviewedArmSize(::persona::ArmSize::Type const& newPreviewedArmSize);

    MCAPI void setPreviewedHeight(::persona::BodySize::Type const& newPreviewedHeight);

    MCAPI void updateEquippedSizeByActiveSection();

    MCAPI void updateEquippedValuesByCharacter(::PersonaCharacter const& character);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace persona
