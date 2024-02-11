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
    // symbol: ??0CommandAreaFactory@@QEAA@AEAVDimension@@@Z
    MCAPI explicit CommandAreaFactory(class Dimension& dimension);

    // symbol:
    // ?findArea@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@H_N1@Z
    MCAPI std::unique_ptr<class CommandArea>
          findArea(class BlockPos const& pos, int commandVersion, bool allowUnloadedChunks, bool) const;

    // symbol:
    // ?findArea@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@0_N11@Z
    MCAPI std::unique_ptr<class CommandArea> findArea(
        class BlockPos const& min,
        class BlockPos const& max,
        bool                  allowNonPlayerTicking,
        bool                  allowUnloadedChunks,
        bool
    ) const;

    // symbol:
    // ?findArea@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@0H_N1@Z
    MCAPI std::unique_ptr<class CommandArea>
    findArea(class BlockPos const& min, class BlockPos const& max, int commandVersion, bool allowUnloadedChunks, bool)
        const;

    // symbol:
    // ?findAreaWithBuffer@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@H_N1@Z
    MCAPI std::unique_ptr<class CommandArea>
          findAreaWithBuffer(class BlockPos const& pos, int commandVersion, bool allowUnloadedChunks, bool) const;

    // symbol:
    // ?findAreaWithBuffer@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@0H_N1@Z
    MCAPI std::unique_ptr<class CommandArea> findAreaWithBuffer(
        class BlockPos const& min,
        class BlockPos const& max,
        int                   commandVersion,
        bool                  allowUnloadedChunks,
        bool
    ) const;

    // symbol: ?shouldAllowNonTickingPlayerAndTickingAreaChunks@CommandAreaFactory@@SA_NH@Z
    MCAPI static bool shouldAllowNonTickingPlayerAndTickingAreaChunks(int commandVersion);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getArea@CommandAreaFactory@@AEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBUBounds@@_N11@Z
    MCAPI std::unique_ptr<class CommandArea>
          _getArea(struct Bounds const& requiredArea, bool allowNonPlayerTicking, bool allowUnloadedChunks, bool) const;

    // NOLINTEND
};
