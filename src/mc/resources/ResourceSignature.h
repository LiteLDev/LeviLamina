#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ResourceSignature {
public:
    // prevent constructor by default
    ResourceSignature& operator=(ResourceSignature const&);
    ResourceSignature(ResourceSignature const&);
    ResourceSignature();

public:
    // NOLINTBEGIN
    MCAPI bool areKnownFilesValid(class PackAccessStrategy const& accessStrategy);

    MCAPI ~ResourceSignature();

    MCAPI static class Core::PathBuffer<std::string> const SIGNATURE_FILENAME;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _areKnownFilesValid(class PackAccessStrategy const& accessStrategy, bool requiresSignaturesFile);

    MCAPI bool _checkSignedFiles(class PackAccessStrategy const& accessStrategy) const;

    MCAPI void _loadSignaturesFile(class Core::Path const& filePath, class PackAccessStrategy const& accessStrategy);

    // NOLINTEND
};
