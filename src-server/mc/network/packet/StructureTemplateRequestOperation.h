#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StructureTemplateRequestOperation : uchar {
    None = 0,
    ExportFromSaveMode = 1,
    ExportFromLoadMode = 2,
    QuerySavedStructure = 3,
};
