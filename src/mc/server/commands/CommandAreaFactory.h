#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandAreaFactory {

public:
    // prevent constructor by default
    CommandAreaFactory& operator=(CommandAreaFactory const&) = delete;
    CommandAreaFactory(CommandAreaFactory const&)            = delete;
    CommandAreaFactory()                                     = delete;

public:
    /**
     * @symbol ??0CommandAreaFactory\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI CommandAreaFactory(class Dimension&); // NOLINT
    /**
     * @symbol
     * ?findArea\@CommandAreaFactory\@\@QEBA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@0_N11\@Z
     */
    MCAPI std::unique_ptr<class CommandArea>
          findArea(class BlockPos const&, class BlockPos const&, bool, bool, bool) const; // NOLINT
    /**
     * @symbol
     * ?findAreaWithBuffer\@CommandAreaFactory\@\@QEBA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@0H_N1\@Z
     */
    MCAPI std::unique_ptr<class CommandArea>
          findAreaWithBuffer(class BlockPos const&, class BlockPos const&, int, bool, bool) const; // NOLINT
    /**
     * @symbol ?shouldAllowNonTickingPlayerAndTickingAreaChunks\@CommandAreaFactory\@\@SA_NH\@Z
     */
    MCAPI static bool shouldAllowNonTickingPlayerAndTickingAreaChunks(int); // NOLINT

    // private:
    /**
     * @symbol
     * ?_getArea\@CommandAreaFactory\@\@AEBA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBUBounds\@\@_N11\@Z
     */
    MCAPI std::unique_ptr<class CommandArea> _getArea(struct Bounds const&, bool, bool, bool) const; // NOLINT

private:
};
