#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class Path; }
namespace Core::ZipUtils { enum class UnzipResult; }
// clang-format on

namespace Core {

class UnzipFile {

public:
    // prevent constructor by default
    UnzipFile& operator=(UnzipFile const&) = delete;
    UnzipFile(UnzipFile const&)            = delete;
    UnzipFile()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0UnzipFile\@Core\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VIFileAccess\@\@\@Bedrock\@\@\@gsl\@\@AEBVPath\@1\@\@Z
     */
    MCAPI UnzipFile(class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>>, class Core::Path const&);
    /**
     * @symbol
     * ?appendCurrentFileContents\@UnzipFile\@Core\@\@QEAAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KV?$function\@$$A6AXHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@4\@\@Z
     */
    MCAPI void appendCurrentFileContents(std::string&, uint64_t, std::function<void(int, std::string const&)>);
    /**
     * @symbol
     * ?getCurrentFileName\@UnzipFile\@Core\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCurrentFileName() const;
    /**
     * @symbol ?goToFirstFile\@UnzipFile\@Core\@\@QEAA?AW4UnzipResult\@ZipUtils\@2\@XZ
     */
    MCAPI enum class Core::ZipUtils::UnzipResult goToFirstFile();
    /**
     * @symbol ?goToNextFile\@UnzipFile\@Core\@\@QEAA?AW4UnzipResult\@ZipUtils\@2\@XZ
     */
    MCAPI enum class Core::ZipUtils::UnzipResult goToNextFile();
    /**
     * @symbol ?isGood\@UnzipFile\@Core\@\@QEBA_NXZ
     */
    MCAPI bool isGood() const;
    /**
     * @symbol ?locateFile\@UnzipFile\@Core\@\@QEAA?AW4UnzipResult\@ZipUtils\@2\@PEBDH\@Z
     */
    MCAPI enum class Core::ZipUtils::UnzipResult locateFile(char const*, int);
    /**
     * @symbol ?openCurrentFileForReading\@UnzipFile\@Core\@\@QEAA?AW4UnzipResult\@ZipUtils\@2\@XZ
     */
    MCAPI enum class Core::ZipUtils::UnzipResult openCurrentFileForReading();
    /**
     * @symbol ??1UnzipFile\@Core\@\@QEAA\@XZ
     */
    MCAPI ~UnzipFile();
    // NOLINTEND
};

}; // namespace Core
