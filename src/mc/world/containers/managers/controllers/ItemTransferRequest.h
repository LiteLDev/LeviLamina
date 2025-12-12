#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AutoPlaceResult;
// clang-format on

struct ItemTransferRequest {
public:
    // ItemTransferRequest inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // ItemTransferRequest inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnkd2b85b;
        ::ll::UntypedStorage<4, 4>  mUnk53d560;
        ::ll::UntypedStorage<4, 4>  mUnk120630;
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
        Entry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~Entry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk284be0;
    ::ll::UntypedStorage<8, 24> mUnk6f44c0;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemTransferRequest& operator=(ItemTransferRequest const&);
    ItemTransferRequest(ItemTransferRequest const&);
    ItemTransferRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _addOutputsAsDestinations(::std::vector<::AutoPlaceResult>& destinations) const;

    MCNAPI_C ~ItemTransferRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
