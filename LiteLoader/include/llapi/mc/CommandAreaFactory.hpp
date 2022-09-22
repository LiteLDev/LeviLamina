/**
 * @file  CommandAreaFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1073544129
     * @symbol ??0CommandAreaFactory@@QEAA@AEAVDimension@@@Z
     */
    MCAPI CommandAreaFactory(class Dimension &);
    /**
     * @hash   -328662163
     * @symbol ?findArea@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@0H_N@Z
     */
    MCAPI std::unique_ptr<class CommandArea> findArea(class BlockPos const &, class BlockPos const &, int, bool) const;
    /**
     * @hash   -787009731
     * @symbol ?findArea@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@0_N1@Z
     */
    MCAPI std::unique_ptr<class CommandArea> findArea(class BlockPos const &, class BlockPos const &, bool, bool) const;
    /**
     * @hash   1428002347
     * @symbol ?findArea@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@H_N@Z
     */
    MCAPI std::unique_ptr<class CommandArea> findArea(class BlockPos const &, int, bool) const;
    /**
     * @hash   1624867465
     * @symbol ?findAreaWithBuffer@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@0H_N@Z
     */
    MCAPI std::unique_ptr<class CommandArea> findAreaWithBuffer(class BlockPos const &, class BlockPos const &, int, bool) const;
    /**
     * @hash   660647087
     * @symbol ?findAreaWithBuffer@CommandAreaFactory@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@H_N@Z
     */
    MCAPI std::unique_ptr<class CommandArea> findAreaWithBuffer(class BlockPos const &, int, bool) const;
    /**
     * @hash   -1375577703
     * @symbol ?shouldAllowNonTickingPlayerAndTickingAreaChunks@CommandAreaFactory@@SA_NH@Z
     */
    MCAPI static bool shouldAllowNonTickingPlayerAndTickingAreaChunks(int);

//private:
    /**
     * @hash   -1417624983
     * @symbol ?_getArea@CommandAreaFactory@@AEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBUBounds@@_N1@Z
     */
    MCAPI std::unique_ptr<class CommandArea> _getArea(struct Bounds const &, bool, bool) const;

private:

};