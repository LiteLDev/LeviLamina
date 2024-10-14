#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RuntimeLightingManager {
public:
    // RuntimeLightingManager inner types declare
    // clang-format off
    struct RuntimeLightingSubchunkList;
    // clang-format on

    // RuntimeLightingManager inner types define
    struct RuntimeLightingSubchunkList {
    public:
        // prevent constructor by default
        RuntimeLightingSubchunkList& operator=(RuntimeLightingSubchunkList const&);
        RuntimeLightingSubchunkList(RuntimeLightingSubchunkList const&);
        RuntimeLightingSubchunkList();

    public:
        // NOLINTBEGIN
        MCAPI ~RuntimeLightingSubchunkList();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RuntimeLightingManager& operator=(RuntimeLightingManager const&);
    RuntimeLightingManager(RuntimeLightingManager const&);
    RuntimeLightingManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RuntimeLightingManager() = default;

    MCAPI explicit RuntimeLightingManager(class Dimension& dimension);

    MCAPI void flushRunTimeLighting();

    MCAPI void updateBlockLight(
        class BlockPos const& blockPos,
        struct Brightness     oldBrightness,
        struct Brightness     newBrightness,
        struct Brightness     oldAbsorption,
        struct Brightness     newAbsorption,
        bool                  isSkyLight
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _checkForRelightingTask(std::chrono::nanoseconds timeLimit);

    MCAPI void _getListOfChunksWithPlayerDistance();

    MCAPI void _relightChunks(std::chrono::nanoseconds timeLimit);

    MCAPI void _removeProcessedSubchunks();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
