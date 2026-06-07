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
#ifdef LL_PLAT_C
        MCNAPI ~Entry();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk83539b;
    ::ll::UntypedStorage<8, 24> mUnke68a94;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ItemTransferRequest& operator=(ItemTransferRequest const&);
    ItemTransferRequest(ItemTransferRequest const&);
    ItemTransferRequest();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ItemTransferRequest& operator=(ItemTransferRequest const&);
    ItemTransferRequest(ItemTransferRequest const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ItemTransferRequest();

    MCNAPI void _addOutputsAsDestinations(::std::vector<::AutoPlaceResult>& destinations) const;

    MCNAPI int getInputAmount() const;

    MCNAPI int getOutputAmount() const;

    MCNAPI void reset();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND
};
