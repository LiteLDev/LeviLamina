#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/managers/IProfileEntryPromptData.h"

class MockProfileEntryPromptData : public ::IProfileEntryPromptData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mId;
    ::ll::TypedStorage<1, 1, bool>           mCanOpen;
    ::ll::TypedStorage<1, 1, bool>           mIsOpen;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MockProfileEntryPromptData() /*override*/ = default;

    virtual bool allowedToOpenCheck() const /*override*/;

    virtual void callOnOpen() /*override*/;

    virtual void callOnClose() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
