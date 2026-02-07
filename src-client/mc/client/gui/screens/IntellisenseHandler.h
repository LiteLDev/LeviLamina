#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class CommandOrigin;
class CommandRegistry;
struct AutoCompleteInformation;
struct CommandSyntaxInformation;
// clang-format on

class IntellisenseHandler {
public:
    // IntellisenseHandler inner types declare
    // clang-format off
    struct AutoCompleteMessage;
    // clang-format on

    // IntellisenseHandler inner types define
    struct AutoCompleteMessage {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mIntellisenseMessages;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsDevConsole;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mLastTabCompleteMessage;
    ::ll::TypedStorage<4, 4, int>                                                        mLastTabCompleteIndex;
    ::ll::TypedStorage<1, 1, bool>                                                       mInitTabComplete;
    ::ll::TypedStorage<1, 1, bool>                                                       mNeedsLayoutUpdate;
    ::ll::TypedStorage<4, 4, int>                                                        mAutoCompleteGridSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::IntellisenseHandler::AutoCompleteMessage>> mAutoCompleteMessages;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::AutoCompleteInformation> _getAutoCompleteOptions(
        ::CommandOrigin const& origin,
        ::std::string const&   _cmdLine,
        uint                   cursorPositionUnsafe,
        ::CommandRegistry&     registry,
        bool                   isPlayerMention
    ) const;

    MCAPI ::std::unique_ptr<::CommandOrigin>
    _getCommandOrigin(::std::weak_ptr<::ClientInstanceScreenModel> minecraftScreenModel) const;

    MCAPI void _handleCommandIntellisense(
        ::ClientInstanceScreenModel& screenModel,
        ::CommandOrigin const&       origin,
        ::std::string const&         currentMessage,
        uint                         cursorPositionUnsafe
    );

    MCAPI bool _isPlayerMention(::std::string const& in) const;

    MCAPI void _updateAutoCompleteMessages(
        ::AutoCompleteInformation const& autocompleteInfo,
        ::CommandOrigin const&           origin,
        ::CommandRegistry const&         registry,
        bool                             isCheatsEnabled,
        bool                             isCommand
    );

    MCAPI void _updateIntellisenseMessages(::CommandSyntaxInformation const& intellisenseInfo);

    MCAPI ::std::string getAutoCompleteText(int index);

    MCAPI void handleClickComplete(
        ::std::weak_ptr<::ClientInstanceScreenModel> minecraftScreenModel,
        ::std::string&                               currentMessage,
        int                                          clickedIndex
    );

    MCAPI void handleTabComplete(
        ::std::weak_ptr<::ClientInstanceScreenModel> minecraftScreenModel,
        ::std::string&                               currentMessage,
        int                                          index
    );

    MCAPI void handleTabComplete(
        ::std::weak_ptr<::ClientInstanceScreenModel> minecraftScreenModel,
        ::CommandOrigin const&                       origin,
        ::std::string&                               currentMessage,
        int                                          index,
        bool                                         isSlashRequired
    );

    MCAPI void updateIntellisense(
        ::std::weak_ptr<::ClientInstanceScreenModel> minecraftScreenModel,
        ::std::string const&                         currentMessage
    );

    MCAPI ~IntellisenseHandler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
