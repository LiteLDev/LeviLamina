#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/UnzipResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class Path; }
// clang-format on

namespace Core {

class UnzipFile {
public:
    // prevent constructor by default
    UnzipFile& operator=(UnzipFile const&);
    UnzipFile(UnzipFile const&);
    UnzipFile();

public:
    // NOLINTBEGIN
    MCAPI UnzipFile(Bedrock::NotNullNonOwnerPtr<class IFileAccess> fileAccess, class Core::Path const& zipPath);

    MCAPI void appendCurrentFileContents(
        std::string&                                 str,
        uint64                                       bufferSize,
        std::function<void(int, std::string const&)> onReadCallback
    );

    MCAPI std::string getCurrentFileName() const;

    MCAPI ::Core::ZipUtils::UnzipResult goToFirstFile();

    MCAPI ::Core::ZipUtils::UnzipResult goToNextFile();

    MCAPI bool isGood() const;

    MCAPI ::Core::ZipUtils::UnzipResult locateFile(char const* fileName, int caseSensitivity);

    MCAPI ::Core::ZipUtils::UnzipResult openCurrentFileForReading();

    MCAPI ~UnzipFile();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Core
