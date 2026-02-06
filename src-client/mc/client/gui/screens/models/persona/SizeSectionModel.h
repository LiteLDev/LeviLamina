#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/ArmSize.h"
#include "mc/world/actor/player/persona/BodySize.h"

namespace persona {

class SizeSectionModel {
public:
    // SizeSectionModel inner types define
    enum class Section : schar {};

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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace persona
