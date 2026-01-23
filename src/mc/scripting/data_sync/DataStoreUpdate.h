#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI {

struct DataStoreUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb52e5b;
    ::ll::UntypedStorage<8, 32> mUnkddf472;
    ::ll::UntypedStorage<4, 4>  mUnk3624eb;
    ::ll::UntypedStorage<8, 32> mUnk4d4802;
    ::ll::UntypedStorage<8, 40> mUnkf23dc6;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreUpdate(DataStoreUpdate const&);
    DataStoreUpdate();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataStoreUpdate(::Bedrock::DDUI::DataStoreUpdate&&);

    MCNAPI ::Bedrock::DDUI::DataStoreUpdate& operator=(::Bedrock::DDUI::DataStoreUpdate&&);

    MCNAPI ::Bedrock::DDUI::DataStoreUpdate& operator=(::Bedrock::DDUI::DataStoreUpdate const&);

    MCNAPI bool operator==(::Bedrock::DDUI::DataStoreUpdate const& rhs) const;

    MCNAPI ~DataStoreUpdate();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::DDUI::DataStoreUpdate&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
