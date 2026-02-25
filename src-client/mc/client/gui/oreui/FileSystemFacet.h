#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"

namespace OreUI::FacetCoroutineExample {

class FileSystemFacet : public ::OreUI::FacetBase<::OreUI::FacetCoroutineExample::FileSystemFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>> mWriteToDiskTask;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>      mWriteToDiskStartTime;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~FileSystemFacet() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::FacetCoroutineExample
