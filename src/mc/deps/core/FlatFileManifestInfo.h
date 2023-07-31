#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
namespace Core { enum class FileType; }
// clang-format on

namespace Core {

class FlatFileManifestInfo {

public:
    // prevent constructor by default
    FlatFileManifestInfo& operator=(FlatFileManifestInfo const&) = delete;
    FlatFileManifestInfo(FlatFileManifestInfo const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0FlatFileManifestInfo\@Core\@\@QEAA\@XZ
     */
    MCAPI FlatFileManifestInfo();
    /**
     * @symbol ?getFileSize\@FlatFileManifestInfo\@Core\@\@QEBA_KXZ
     */
    MCAPI uint64_t getFileSize() const;
    /**
     * @symbol ?getFileType\@FlatFileManifestInfo\@Core\@\@QEBA?AW4FileType\@2\@XZ
     */
    MCAPI enum class Core::FileType getFileType() const;
    /**
     * @symbol
     * ?getPath\@FlatFileManifestInfo\@Core\@\@QEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> const& getPath() const;
    /**
     * @symbol ?getSeekPos\@FlatFileManifestInfo\@Core\@\@QEBA_KXZ
     */
    MCAPI uint64_t getSeekPos() const;
    /**
     * @symbol ?isDeleted\@FlatFileManifestInfo\@Core\@\@QEBA_NXZ
     */
    MCAPI bool isDeleted() const;
    /**
     * @symbol ?isDirectory\@FlatFileManifestInfo\@Core\@\@QEBA_NXZ
     */
    MCAPI bool isDirectory() const;
    /**
     * @symbol ?isFile\@FlatFileManifestInfo\@Core\@\@QEBA_NXZ
     */
    MCAPI bool isFile() const;
    /**
     * @symbol
     * ?readFromStream\@FlatFileManifestInfo\@Core\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, std::error_code> readFromStream(class ReadOnlyBinaryStream&);
    /**
     * @symbol ?setDeleted\@FlatFileManifestInfo\@Core\@\@QEAAX_N\@Z
     */
    MCAPI void setDeleted(bool);
    /**
     * @symbol ??1FlatFileManifestInfo\@Core\@\@QEAA\@XZ
     */
    MCAPI ~FlatFileManifestInfo();
    // NOLINTEND
};

}; // namespace Core
