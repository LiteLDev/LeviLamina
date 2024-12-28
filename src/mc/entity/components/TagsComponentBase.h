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
    // prevent constructor by default
    TagsComponentBase& operator=(TagsComponentBase const&);
    TagsComponentBase(TagsComponentBase const&);
    TagsComponentBase();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadhelper);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _writeAdditionalSaveData(::CompoundTag& tag, ::std::vector<::std::string> const& componentTags);
    // NOLINTEND
};
