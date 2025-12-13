#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/servicecomponent/StoreUIComponentWithStaticBinding.h"

class DocumentComponent : public ::StoreUIComponentWithStaticBinding<void> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDocumentReference;
    ::ll::TypedStorage<8, 32, ::std::string> mDocumentId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DocumentComponent() /*override*/ = default;
    // NOLINTEND
};
