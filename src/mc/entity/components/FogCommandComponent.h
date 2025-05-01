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
    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI ::std::vector<::std::string> getFogSettingsStack() const;

    MCNAPI bool popFogSetting(::std::string const& userProvidedId);

    MCNAPI void readAdditionalSaveData(::Actor& tag, ::CompoundTag const& owner, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isValidIdentifier(::std::string const& format);
    // NOLINTEND
};
