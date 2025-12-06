#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

struct IWorldStorageHandler {
public:
    // IWorldStorageHandler inner types declare
    // clang-format off
    struct CachedWorldData;
    // clang-format on

    // IWorldStorageHandler inner types define
    enum class DuplicateWorldResult : uint {};

    enum class ExportWorldResult : uint {};

    enum class ExportWorldStatus : uint {};

    enum class ReadWorldError : uint {};

    enum class StartClearPlayerDataError : uint {};

    enum class WriteWorldError : uint {};

    struct CachedWorldData {};
};

} // namespace World
