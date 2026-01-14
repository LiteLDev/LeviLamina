#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

struct IWorldStorageHandler {
public:
    // IWorldStorageHandler inner types declare
    // clang-format off
    struct CachedWorldData;
    struct DuplicateWorldResultOreUI;
    struct ExportWorldStatusOreUI;
    // clang-format on

    // IWorldStorageHandler inner types define
    enum class DuplicateWorldResult : uchar {};

    enum class DuplicateWorldResultstruct : uint {};

    enum class ExportWorldResult : uchar {};

    enum class ExportWorldStatus : uchar {};

    enum class ExportWorldStatusclass : uint {};

    enum class ReadWorldError : uchar {};

    enum class StartClearPlayerDataError : int {};

    enum class WriteWorldError : uchar {};

    struct CachedWorldData {};

    struct DuplicateWorldResultOreUI {
    public:
        // DuplicateWorldResultOreUI inner types declare
        // clang-format off
        struct WorldStartupFacet;
        // clang-format on

        // DuplicateWorldResultOreUI inner types define
        struct WorldStartupFacet {
        public:
            // WorldStartupFacet inner types define
            enum class BackupThenStartLocalWorldResult : uint {};
        };
    };

    struct ExportWorldStatusOreUI {
    public:
        // ExportWorldStatusOreUI inner types define
        enum class WorldStorageManagerFacet : uint {};
    };
};

} // namespace World
