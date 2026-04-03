#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI {

struct DataStoreUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb92e53;
    ::ll::UntypedStorage<8, 32> mUnk68343c;
    ::ll::UntypedStorage<4, 4>  mUnkfd4430;
    ::ll::UntypedStorage<4, 4>  mUnkb71650;
    ::ll::UntypedStorage<8, 32> mUnk33050a;
    ::ll::UntypedStorage<8, 40> mUnk93c84c;
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
