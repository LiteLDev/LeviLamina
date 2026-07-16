#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class CommandOrigin;
// clang-format on

class IntellisenseHandler {
public:
    // IntellisenseHandler inner types declare
    // clang-format off
    struct AutoCompleteMessage;
    // clang-format on

    // IntellisenseHandler inner types define
    struct AutoCompleteMessage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>   text;
        ::ll::TypedStorage<8, 128, ::ItemInstance> itemInstance;
        // NOLINTEND
    };

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
    MCAPI int getAutoCompleteItemId(int index);

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
