#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class EmoticonManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                            mListFilename;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mStringToEmoticonMap;
    // NOLINTEND

public:
    // prevent constructor by default
    EmoticonManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmoticonManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EmoticonManager(::std::string const& listFilename);

    MCNAPI ::std::string emoticonifyText(::std::string const& text) const;

    MCNAPI void emoticonifyTextInPlace(::std::string& text) const;

    MCNAPI void resetEmoticonData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& listFilename);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
