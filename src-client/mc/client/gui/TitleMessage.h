#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TitleMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mTitle;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                  mSubtitle;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredSubtitle;
    ::ll::TypedStorage<4, 4, int>                             mFadeInTime;
    ::ll::TypedStorage<4, 4, int>                             mStayTime;
    ::ll::TypedStorage<4, 4, int>                             mFadeOutTime;
    ::ll::TypedStorage<8, 32, ::std::string>                  mActionBarMessage;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredActionBarMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    TitleMessage(TitleMessage const&);
    TitleMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clearTitleMessages();

    MCAPI ::TitleMessage& copyTitleMessageWithSubtitle(::TitleMessage const& sourceTitle);

    MCAPI ::TitleMessage& operator=(::TitleMessage const&);

    MCAPI void resetTitle();

    MCAPI void setSubtitle(::std::string const& subtitle, ::std::optional<::std::string> filteredSubtitle);

    MCAPI ~TitleMessage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
