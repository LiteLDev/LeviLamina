#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class FogCommandComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdf5f86;
    // NOLINTEND

public:
    // prevent constructor by default
    FogCommandComponent& operator=(FogCommandComponent const&);
    FogCommandComponent(FogCommandComponent const&);
    FogCommandComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::std::vector<::std::string> getFogSettingsStack() const;

    MCAPI bool popFogSetting(::std::string const& userProvidedId);

    MCAPI bool pushFogSetting(::std::string const& fogId, ::std::string const& userProvidedId);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool removeFogSettings(::std::string const& userProvidedId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isValidIdentifier(::std::string const& format);
    // NOLINTEND
};
