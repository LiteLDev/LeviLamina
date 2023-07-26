#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class IFileSystem; }
namespace Core { class Path; }
// clang-format on

class AllowListFile {

public:
    // prevent constructor by default
    AllowListFile& operator=(AllowListFile const&) = delete;
    AllowListFile(AllowListFile const&)            = delete;
    AllowListFile()                                = delete;

public:
    /**
     * @symbol ??0AllowListFile\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI AllowListFile(class Core::Path const&); // NOLINT
    /**
     * @symbol ?getAllowList\@AllowListFile\@\@QEBAAEAVAllowList\@\@XZ
     */
    MCAPI class AllowList& getAllowList() const; // NOLINT
    /**
     * @symbol ?reload\@AllowListFile\@\@QEAA?AW4FileReadResult\@\@XZ
     */
    MCAPI enum class FileReadResult reload(); // NOLINT
    /**
     * @symbol ?syncToDisc\@AllowListFile\@\@QEAAXXZ
     */
    MCAPI void syncToDisc(); // NOLINT
    /**
     * @symbol ??1AllowListFile\@\@QEAA\@XZ
     */
    MCAPI ~AllowListFile(); // NOLINT
    /**
     * @symbol ?loadFromDefaultLocations\@AllowListFile\@\@SA?AV1\@AEAVIFileSystem\@Core\@\@\@Z
     */
    MCAPI static class AllowListFile loadFromDefaultLocations(class Core::IFileSystem&); // NOLINT
};
