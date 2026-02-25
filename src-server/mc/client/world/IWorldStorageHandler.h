#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

class IWorldStorageHandler {
public:
    // IWorldStorageHandler inner types declare
    // clang-format off
    struct CachedWorldData;
    // clang-format on

    // IWorldStorageHandler inner types define
    enum class ReadWorldError : uchar {};

    enum class WriteWorldError : uchar {};

    enum class DuplicateWorldResult : uchar {};

    enum class ExportWorldResult : uchar {};

    enum class StartClearPlayerDataError : int {};

    enum class ExportWorldStatus : uchar {};

    struct CachedWorldData {};
};

} // namespace World
