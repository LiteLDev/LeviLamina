#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
struct FogCommandSettings;
// clang-format on

class FogCommandComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::FogCommandSettings>> mFogStack;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::std::vector<::std::string> getFogSettingsStack() const;

    MCAPI bool popFogSetting(::std::string const& userProvidedId);

    MCAPI void readAdditionalSaveData(::Actor& tag, ::CompoundTag const& owner, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isValidIdentifier(::std::string const& format);
    // NOLINTEND
};
