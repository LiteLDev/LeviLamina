#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources { struct BrpakIndexEntry; }
// clang-format on

namespace Bedrock::Resources {

class BrpakIndex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk35cf6e;
    ::ll::UntypedStorage<8, 32> mUnke702e9;
    // NOLINTEND

public:
    // prevent constructor by default
    BrpakIndex& operator=(BrpakIndex const&);
    BrpakIndex(BrpakIndex const&);
    BrpakIndex();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI BrpakIndex(::Bedrock::Resources::BrpakIndex&&);

    MCNAPI
    BrpakIndex(::std::map<::std::string, ::Bedrock::Resources::BrpakIndexEntry> index, ::std::string archivePath);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Bedrock::Resources::BrpakIndex&&);

    MCNAPI void*
    $ctor(::std::map<::std::string, ::Bedrock::Resources::BrpakIndexEntry> index, ::std::string archivePath);
#endif
    // NOLINTEND
};

} // namespace Bedrock::Resources
