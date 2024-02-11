#pragma once

#include "mc/_HeaderOutputPredefine.h"

class glTFExporter {
public:
    // prevent constructor by default
    glTFExporter& operator=(glTFExporter const&);
    glTFExporter(glTFExporter const&);
    glTFExporter();

public:
    // NOLINTBEGIN
    // symbol: ?BINARY_EXTENSION@glTFExporter@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const BINARY_EXTENSION;

    // symbol: ?GLB_BUFFER_URI@glTFExporter@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const GLB_BUFFER_URI;

    // symbol: ?GLB_EXTENSION@glTFExporter@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const GLB_EXTENSION;

    // symbol: ?GLTF_EXTENSION@glTFExporter@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const GLTF_EXTENSION;

    // NOLINTEND
};
