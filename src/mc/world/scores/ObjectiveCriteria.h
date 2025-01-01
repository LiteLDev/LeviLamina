#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ObjectiveRenderType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class ObjectiveCriteria {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>        mName;
    ::ll::TypedStorage<1, 1, bool const>                  mReadOnly;
    ::ll::TypedStorage<1, 1, ::ObjectiveRenderType const> mRenderType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const& getName() const;

    MCAPI bool isReadOnly() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::ObjectiveCriteria> deserialize(::CompoundTag const& dataTag);

    MCAPI static ::std::unique_ptr<::CompoundTag> serialize(::ObjectiveCriteria const& toSave);
    // NOLINTEND
};
