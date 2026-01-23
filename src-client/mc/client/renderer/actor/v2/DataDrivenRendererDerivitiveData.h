#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DataDrivenRendererDerivitiveData {
public:
    // DataDrivenRendererDerivitiveData inner types declare
    // clang-format off
    struct RenderControllerEntry;
    // clang-format on

    // DataDrivenRendererDerivitiveData inner types define
    struct RenderControllerEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk5f3296;
        ::ll::UntypedStorage<4, 4> mUnk902a24;
        ::ll::UntypedStorage<4, 4> mUnk1c912e;
        // NOLINTEND

    public:
        // prevent constructor by default
        RenderControllerEntry& operator=(RenderControllerEntry const&);
        RenderControllerEntry(RenderControllerEntry const&);
        RenderControllerEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk37ab35;
    ::ll::UntypedStorage<8, 24> mUnk94f627;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererDerivitiveData& operator=(DataDrivenRendererDerivitiveData const&);
    DataDrivenRendererDerivitiveData(DataDrivenRendererDerivitiveData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataDrivenRendererDerivitiveData();

    MCNAPI ~DataDrivenRendererDerivitiveData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
