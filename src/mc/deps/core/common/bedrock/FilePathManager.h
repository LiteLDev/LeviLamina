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
    // vIndex: 0
    virtual ~FilePathManager();

    MCAPI FilePathManager(class Core::Path const& root, bool isDedicatedServer);

    MCAPI class Core::PathBuffer<std::string> getResourcePacksPath() const;

    MCAPI class Core::PathBuffer<std::string> getUserDataPath() const;

    MCAPI class Core::PathBuffer<std::string> getWorldsPath() const;

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const ARCHIVE_DIR;

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const HOME_DIR;

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const PERSONA_TEST_DIR;

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const REALM_WORLDS_DIR;

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const RESOURCE_PACKS_DIR;

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const WORLDS_DIR;

    // NOLINTEND
};

}; // namespace Core
