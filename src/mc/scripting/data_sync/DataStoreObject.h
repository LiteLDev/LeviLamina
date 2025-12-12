#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI {

struct DataStoreObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkba50cf;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreObject& operator=(DataStoreObject const&);
    DataStoreObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataStoreObject(::Bedrock::DDUI::DataStoreObject&&);

    MCNAPI DataStoreObject(::Bedrock::DDUI::DataStoreObject const&);

    MCNAPI ~DataStoreObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::DDUI::DataStoreObject&&);

    MCNAPI void* $ctor(::Bedrock::DDUI::DataStoreObject const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
