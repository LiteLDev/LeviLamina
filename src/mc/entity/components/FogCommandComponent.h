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

    MCAPI ::std::vector<::std::string> getUserProvidedIds() const;

    MCAPI ::std::optional<::std::string> popFogSetting(::std::optional<::std::string> const& userProvidedId);

    MCAPI ::std::optional<uchar>
    pushFogSetting(::std::string const& fogId, ::std::optional<::std::string> const& userProvidedId);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool removeFogSettings(::std::optional<::std::string> const& userProvidedId);

    MCAPI bool setFogSettingsStack(
        ::std::vector<::std::string> const&   fogIds,
        ::std::optional<::std::string> const& userProvidedId
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isValidIdentifier(::std::string const& format);
    // NOLINTEND
};
