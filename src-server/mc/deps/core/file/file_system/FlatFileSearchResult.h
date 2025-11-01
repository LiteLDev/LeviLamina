#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FlatFileManifest; }
// clang-format on

namespace Core {

class FlatFileSearchResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk52cace;
    ::ll::UntypedStorage<8, 8> mUnkf09954;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatFileSearchResult& operator=(FlatFileSearchResult const&);
    FlatFileSearchResult(FlatFileSearchResult const&);
    FlatFileSearchResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::Core::FlatFileManifest const> getManifest() const;

    MCNAPI ~FlatFileSearchResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
