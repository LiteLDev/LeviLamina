#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/deps/shared_types/persona/BodySizeType.h"

namespace persona {

class SizeSectionModel {
public:
    // SizeSectionModel inner types define
    enum class Section : schar {
        Height  = 0,
        ArmSize = 1,
        None    = 2,
    };

    using ArmSizeType = ::SharedTypes::persona::ArmSizeType;

    using BodySizeType = ::SharedTypes::persona::BodySizeType;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::persona::SizeSectionModel::Section> mActiveSection;
    ::ll::TypedStorage<1, 1, ::SharedTypes::persona::ArmSizeType>  mEquippedArmSize;
    ::ll::TypedStorage<1, 1, ::SharedTypes::persona::ArmSizeType>  mPreviewedArmSize;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::BodySizeType> mEquippedHeight;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::BodySizeType> mPreviewedHeight;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SizeSectionModel() = default;
    // NOLINTEND
};

} // namespace persona
