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

    MCNAPI ::std::vector<::std::string> getUserProvidedIds() const;

    MCNAPI ::std::optional<::std::string> popFogSetting(::std::optional<::std::string> const& userProvidedId);

    MCNAPI ::std::optional<uchar>
    pushFogSetting(::std::string const& fogId, ::std::optional<::std::string> const& userProvidedId);

    MCNAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool removeFogSettings(::std::optional<::std::string> const& userProvidedId);

    MCNAPI bool setFogSettingsStack(
        ::std::vector<::std::string> const&   fogIds,
        ::std::optional<::std::string> const& userProvidedId
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isValidIdentifier(::std::string const& format);
    // NOLINTEND
};
