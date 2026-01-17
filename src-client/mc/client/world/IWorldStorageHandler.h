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
    enum class DuplicateWorldResult : uchar {};

    enum class ExportWorldResult : uchar {};

    enum class ExportWorldStatus : uchar {};

    enum class ReadWorldError : uchar {};

    enum class StartClearPlayerDataError : int {};

    enum class WriteWorldError : uchar {};

    struct CachedWorldData {};
};

} // namespace World
