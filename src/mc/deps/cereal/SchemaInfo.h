#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

struct SchemaInfo {

public:
    // prevent constructor by default
    SchemaInfo& operator=(SchemaInfo const&) = delete;
    SchemaInfo(SchemaInfo const&)            = delete;
    SchemaInfo()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1SchemaInfo\@CerealHelpers\@\@QEAA\@XZ
     */
    MCAPI ~SchemaInfo();
    // NOLINTEND
};

}; // namespace CerealHelpers
