#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

struct DataTransferServiceRequestDataOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnka0f6ff;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceRequestDataOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataTransferServiceRequestDataOptions(::Editor::Network::DataTransferServiceRequestDataOptions const&);

    MCNAPI ::Editor::Network::DataTransferServiceRequestDataOptions&
    operator=(::Editor::Network::DataTransferServiceRequestDataOptions&&);

    MCNAPI ::Editor::Network::DataTransferServiceRequestDataOptions&
    operator=(::Editor::Network::DataTransferServiceRequestDataOptions const&);

    MCNAPI ~DataTransferServiceRequestDataOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::DataTransferServiceRequestDataOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Network
