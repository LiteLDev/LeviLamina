#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PackCommand { struct PackCommandHandle; }
// clang-format on

namespace PackCommand {

class PackCommandPipelineSync {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1c4e2b;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCommandPipelineSync& operator=(PackCommandPipelineSync const&);
    PackCommandPipelineSync(PackCommandPipelineSync const&);
    PackCommandPipelineSync();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _immediateAwait(::gsl::span<::PackCommand::PackCommandHandle> const& toAwait);

    MCNAPI ~PackCommandPipelineSync();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PackCommand
