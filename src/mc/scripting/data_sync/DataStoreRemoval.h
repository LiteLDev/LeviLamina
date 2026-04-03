#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI {

struct DataStoreRemoval {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkec9042;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreRemoval(DataStoreRemoval const&);
    DataStoreRemoval();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::DDUI::DataStoreRemoval& operator=(::Bedrock::DDUI::DataStoreRemoval&&);

    MCNAPI ::Bedrock::DDUI::DataStoreRemoval& operator=(::Bedrock::DDUI::DataStoreRemoval const&);

    MCNAPI ~DataStoreRemoval();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
