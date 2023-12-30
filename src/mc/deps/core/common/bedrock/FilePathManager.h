#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
// clang-format on

namespace Core {

class FilePathManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    FilePathManager& operator=(FilePathManager const&);
    FilePathManager(FilePathManager const&);
    FilePathManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FilePathManager@Core@@UEAA@XZ
    virtual ~FilePathManager();

    // symbol: ??0FilePathManager@Core@@QEAA@AEBVPath@1@_N@Z
    MCAPI FilePathManager(class Core::Path const& root, bool isDedicatedServer);

    // symbol:
    // ?getResourcePacksPath@FilePathManager@Core@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@XZ
    MCAPI class Core::PathBuffer<std::string> getResourcePacksPath() const;

    // symbol:
    // ?getUserDataPath@FilePathManager@Core@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@XZ
    MCAPI class Core::PathBuffer<std::string> getUserDataPath() const;

    // symbol:
    // ?getWorldsPath@FilePathManager@Core@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@XZ
    MCAPI class Core::PathBuffer<std::string> getWorldsPath() const;

    // symbol: ?ARCHIVE_DIR@FilePathManager@Core@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@B
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const ARCHIVE_DIR;

    // symbol: ?HOME_DIR@FilePathManager@Core@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@B
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const HOME_DIR;

    // symbol: ?PERSONA_TEST_DIR@FilePathManager@Core@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@B
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const PERSONA_TEST_DIR;

    // symbol: ?REALM_WORLDS_DIR@FilePathManager@Core@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@B
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const REALM_WORLDS_DIR;

    // symbol: ?RESOURCE_PACKS_DIR@FilePathManager@Core@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@B
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const RESOURCE_PACKS_DIR;

    // symbol: ?WORLDS_DIR@FilePathManager@Core@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@B
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const WORLDS_DIR;

    // NOLINTEND
};

}; // namespace Core
