#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ResourceSignature {

public:
    // prevent constructor by default
    ResourceSignature& operator=(ResourceSignature const&) = delete;
    ResourceSignature(ResourceSignature const&)            = delete;
    ResourceSignature()                                    = delete;

public:
    /**
     * @symbol ??1ResourceSignature\@\@QEAA\@XZ
     */
    MCAPI ~ResourceSignature(); // NOLINT
    /**
     * @symbol
     * ?SIGNATURE_FILENAME\@ResourceSignature\@\@2V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@B
     */
    MCAPI static class Core::PathBuffer<std::string> const SIGNATURE_FILENAME; // NOLINT

    // private:
    /**
     * @symbol ?_areKnownFilesValid\@ResourceSignature\@\@AEAA_NAEBVPackAccessStrategy\@\@_N\@Z
     */
    MCAPI bool _areKnownFilesValid(class PackAccessStrategy const&, bool); // NOLINT
    /**
     * @symbol ?_checkSignedFiles\@ResourceSignature\@\@AEBA_NAEBVPackAccessStrategy\@\@\@Z
     */
    MCAPI bool _checkSignedFiles(class PackAccessStrategy const&) const; // NOLINT
    /**
     * @symbol ?_loadSignaturesFile\@ResourceSignature\@\@AEAAXAEBVPath\@Core\@\@AEBVPackAccessStrategy\@\@\@Z
     */
    MCAPI void _loadSignaturesFile(class Core::Path const&, class PackAccessStrategy const&); // NOLINT

private:
};
