#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

struct SchemaInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALHELPERS_SCHEMAINFO
public:
    SchemaInfo& operator=(SchemaInfo const&) = delete;
    SchemaInfo(SchemaInfo const&)            = delete;
    SchemaInfo()                             = delete;
#endif

public:
    /**
     * @symbol ??1SchemaInfo\@CerealHelpers\@\@QEAA\@XZ
     */
    MCAPI ~SchemaInfo();
};

}; // namespace CerealHelpers
