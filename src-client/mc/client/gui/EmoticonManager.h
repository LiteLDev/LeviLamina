#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
// clang-format on

class EmoticonManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                            mListFilename;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mStringToEmoticonMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmoticonManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int _findEmoticon(::std::string const& emoticonName) const;

    MCAPI void _readEmoticonList(::ResourceLocation const& listLocation);

    MCAPI void emoticonifyTextInPlace(::std::string& text) const;

    MCAPI void resetEmoticonData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
