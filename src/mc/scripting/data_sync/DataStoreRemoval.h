#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI {

struct DataStoreRemoval {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDataStoreName;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreRemoval(DataStoreRemoval const&);
    DataStoreRemoval();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Bedrock::DDUI::DataStoreRemoval& operator=(::Bedrock::DDUI::DataStoreRemoval&&);

    MCFOLD ::Bedrock::DDUI::DataStoreRemoval& operator=(::Bedrock::DDUI::DataStoreRemoval const&);

    MCAPI ~DataStoreRemoval();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
