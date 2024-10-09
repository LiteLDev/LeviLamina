#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandAreaFactory {
public:
    // prevent constructor by default
    CommandAreaFactory& operator=(CommandAreaFactory const&);
    CommandAreaFactory(CommandAreaFactory const&);
    CommandAreaFactory();

public:
    // NOLINTBEGIN
    MCAPI explicit CommandAreaFactory(class Dimension& dimension);

    MCAPI std::unique_ptr<class CommandArea> findArea(
        class BlockPos const& min,
        class BlockPos const& max,
        bool                  allowNonTickingPlayerAndTickingAreaChunks,
        bool                  allowUnloadedChunks,
        bool                  allowPlayerChunks
    ) const;

    MCAPI std::unique_ptr<class CommandArea> findAreaWithBuffer(
        class BlockPos const& min,
        class BlockPos const& max,
        int                   commandVersion,
        bool                  allowUnloadedChunks,
        bool                  allowPlayerChunks
    ) const;

    MCAPI static bool shouldAllowNonTickingPlayerAndTickingAreaChunks(int commandVersion);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::unique_ptr<class CommandArea> _getArea(
        struct Bounds const& requiredArea,
        bool                 allowNonTickingPlayerAndTickingAreaChunks,
        bool                 allowUnloadedChunks,
        bool                 allowPlayerChunks
    ) const;

    // NOLINTEND
};
