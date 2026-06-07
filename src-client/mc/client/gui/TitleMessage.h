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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TitleMessage();

    MCAPI void clearTitleMessages();

    MCAPI ::TitleMessage& copyTitleMessageWithSubtitle(::TitleMessage const& sourceTitle);

    MCFOLD ::std::string const& getActionBarMessage() const;

    MCFOLD int getFadeInTime() const;

    MCFOLD int getFadeOutTime() const;

    MCFOLD ::std::optional<::std::string> const& getFilteredActionBarMessage() const;

    MCFOLD ::std::optional<::std::string> const& getFilteredSubtitle() const;

    MCFOLD ::std::optional<::std::string> const& getFilteredTitle() const;

    MCFOLD int getStayTime() const;

    MCFOLD ::std::string const& getSubtitle() const;

    MCFOLD ::std::string const& getTitle() const;

    MCFOLD bool hasSubtitle() const;

    MCFOLD bool hasTitle() const;

    MCAPI ::TitleMessage& operator=(::TitleMessage const&);

    MCAPI void resetTitle();

    MCAPI void setActionBarMessage(::std::string const& message, ::std::optional<::std::string> filteredMessage);

    MCAPI void setSubtitle(::std::string const& subtitle, ::std::optional<::std::string> filteredSubtitle);

    MCAPI void setTitle(::std::string const& title, ::std::optional<::std::string> filteredTitle);

    MCAPI void setTitleAnimationTimes(int fadeInTime, int stayTime, int fadeOutTime);

    MCAPI ~TitleMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
