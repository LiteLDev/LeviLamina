#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

class IngestManager {
public:
    // IngestManager inner types declare
    // clang-format off
    struct BatchModelInitData;
    struct PieceDownloadData;
    // clang-format on

    // IngestManager inner types define
    enum class ProcessType : schar {};

    struct BatchModelInitData {};

    struct PieceDownloadData {};
};

} // namespace persona
