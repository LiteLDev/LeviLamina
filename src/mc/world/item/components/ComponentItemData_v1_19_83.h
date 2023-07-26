#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemData_v1_19_83 {

public:
    // prevent constructor by default
    ComponentItemData_v1_19_83& operator=(ComponentItemData_v1_19_83 const&) = delete;
    ComponentItemData_v1_19_83(ComponentItemData_v1_19_83 const&)            = delete;
    ComponentItemData_v1_19_83()                                             = delete;

public:
    /**
     * @symbol ??0ComponentItemData_v1_19_83\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ComponentItemData_v1_19_83(struct ComponentItemData_v1_19_83&&); // NOLINT
    /**
     * @symbol ??1ComponentItemData_v1_19_83\@\@QEAA\@XZ
     */
    MCAPI ~ComponentItemData_v1_19_83(); // NOLINT
    /**
     * @symbol ?VERSION\@ComponentItemData_v1_19_83\@\@2VSemVersion\@\@B
     */
    MCAPI static class SemVersion const VERSION; // NOLINT
};
