#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
namespace Core { class Path; }
// clang-format on

class ResourceSignature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk143e26;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceSignature& operator=(ResourceSignature const&);
    ResourceSignature(ResourceSignature const&);
    ResourceSignature();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _areKnownFilesValid(::PackAccessStrategy const& accessStrategy, bool requiresSignaturesFile);

    MCAPI bool _checkSignedFiles(::PackAccessStrategy const& accessStrategy) const;

    MCAPI void _loadSignaturesFile(::Core::Path const& filePath, ::PackAccessStrategy const& accessStrategy);

    MCAPI ~ResourceSignature();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::std::string> const& SIGNATURE_FILENAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
