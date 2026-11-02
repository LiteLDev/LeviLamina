#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class TagsComponentBase {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadhelper);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _writeAdditionalSaveData(::CompoundTag& tag, ::std::vector<::std::string> const& componentTags);
    // NOLINTEND
};
