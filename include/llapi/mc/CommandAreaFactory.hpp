/**
 * @file  CommandAreaFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandAreaFactory.
 *
 */
class CommandAreaFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDAREAFACTORY
public:
    class CommandAreaFactory& operator=(class CommandAreaFactory const &) = delete;
    CommandAreaFactory(class CommandAreaFactory const &) = delete;
    CommandAreaFactory() = delete;
#endif

public:
    /**
     * @symbol  ??0CommandAreaFactory\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI CommandAreaFactory(class Dimension &);
    /**
     * @symbol  ?findArea\@CommandAreaFactory\@\@QEBA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@0H_N1\@Z
     */
    MCAPI std::unique_ptr<class CommandArea> findArea(class BlockPos const &, class BlockPos const &, int, bool, bool) const;
    /**
     * @symbol  ?findArea\@CommandAreaFactory\@\@QEBA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@0_N11\@Z
     */
    MCAPI std::unique_ptr<class CommandArea> findArea(class BlockPos const &, class BlockPos const &, bool, bool, bool) const;
    /**
     * @symbol  ?findArea\@CommandAreaFactory\@\@QEBA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@H_N1\@Z
     */
    MCAPI std::unique_ptr<class CommandArea> findArea(class BlockPos const &, int, bool, bool) const;
    /**
     * @symbol  ?findAreaWithBuffer\@CommandAreaFactory\@\@QEBA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@0H_N1\@Z
     */
    MCAPI std::unique_ptr<class CommandArea> findAreaWithBuffer(class BlockPos const &, class BlockPos const &, int, bool, bool) const;
    /**
     * @symbol  ?findAreaWithBuffer\@CommandAreaFactory\@\@QEBA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@H_N1\@Z
     */
    MCAPI std::unique_ptr<class CommandArea> findAreaWithBuffer(class BlockPos const &, int, bool, bool) const;
    /**
     * @symbol  ?shouldAllowNonTickingPlayerAndTickingAreaChunks\@CommandAreaFactory\@\@SA_NH\@Z
     */
    MCAPI static bool shouldAllowNonTickingPlayerAndTickingAreaChunks(int);

//private:
    /**
     * @symbol  ?_getArea\@CommandAreaFactory\@\@AEBA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBUBounds\@\@_N11\@Z
     */
    MCAPI std::unique_ptr<class CommandArea> _getArea(struct Bounds const &, bool, bool, bool) const;

private:

};