#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/UnzipResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

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
    // symbol: ??0UnzipFile@Core@@QEAA@V?$not_null@V?$NonOwnerPointer@VIFileAccess@@@Bedrock@@@gsl@@AEBVPath@1@@Z
    MCAPI UnzipFile(Bedrock::NotNullNonOwnerPtr<class IFileAccess> fileAccess, class Core::Path const& zipPath);

    // symbol:
    // ?appendCurrentFileContents@UnzipFile@Core@@QEAAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KV?$function@$$A6AXHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@4@@Z
    MCAPI void appendCurrentFileContents(
        std::string&                                 str,
        uint64                                       bufferSize,
        std::function<void(int, std::string const&)> onReadCallback
    );

    // symbol:
    // ?getCurrentFileName@UnzipFile@Core@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getCurrentFileName() const;

    // symbol: ?goToFirstFile@UnzipFile@Core@@QEAA?AW4UnzipResult@ZipUtils@2@XZ
    MCAPI ::Core::ZipUtils::UnzipResult goToFirstFile();

    // symbol: ?goToNextFile@UnzipFile@Core@@QEAA?AW4UnzipResult@ZipUtils@2@XZ
    MCAPI ::Core::ZipUtils::UnzipResult goToNextFile();

    // symbol: ?isGood@UnzipFile@Core@@QEBA_NXZ
    MCAPI bool isGood() const;

    // symbol: ?locateFile@UnzipFile@Core@@QEAA?AW4UnzipResult@ZipUtils@2@PEBDH@Z
    MCAPI ::Core::ZipUtils::UnzipResult locateFile(char const* fileName, int caseSensitivity);

    // symbol: ?openCurrentFileForReading@UnzipFile@Core@@QEAA?AW4UnzipResult@ZipUtils@2@XZ
    MCAPI ::Core::ZipUtils::UnzipResult openCurrentFileForReading();

    // symbol: ??1UnzipFile@Core@@QEAA@XZ
    MCAPI ~UnzipFile();

    // NOLINTEND
};

}; // namespace Core
