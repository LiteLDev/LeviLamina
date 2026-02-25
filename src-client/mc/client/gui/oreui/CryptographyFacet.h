#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/EncryptDataError.h"
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"

namespace OreUI::FacetCoroutineExample {

class CryptographyFacet : public ::OreUI::FacetBase<::OreUI::FacetCoroutineExample::CryptographyFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                              mIsDirty;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>>                      mEncryptDataTask;
    ::ll::TypedStorage<4, 8, ::std::optional<::OreUI::FacetCoroutineExample::EncryptDataError>> mEncryptDataError;
    ::ll::TypedStorage<1, 1, bool>                                                              mEncryptionShouldFail;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                           mEncryptDataStartTime;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~CryptographyFacet() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::FacetCoroutineExample
