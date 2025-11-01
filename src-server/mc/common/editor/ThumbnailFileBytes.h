#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"

namespace Editor {

class ThumbnailFileBytes : public ::EnableGetWeakRef<::Editor::ThumbnailFileBytes> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkca1e14;
    ::ll::UntypedStorage<4, 4> mUnka20bd4;
    // NOLINTEND

public:
    // prevent constructor by default
    ThumbnailFileBytes& operator=(ThumbnailFileBytes const&);
    ThumbnailFileBytes(ThumbnailFileBytes const&);
    ThumbnailFileBytes();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ThumbnailFileBytes();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& msBindName();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
