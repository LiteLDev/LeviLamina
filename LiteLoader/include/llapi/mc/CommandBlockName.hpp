/**
 * @file  CommandBlockName.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandBlockName.
 *
 */
class CommandBlockName {

#define AFTER_EXTRA
#define DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKNAME
public:
    unsigned __int64 id;

    CommandBlockName(){};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKNAME
public:
    class CommandBlockName& operator=(class CommandBlockName const &) = delete;
    CommandBlockName(class CommandBlockName const &) = delete;
    CommandBlockName() = delete;
#endif

public:
    /**
     * @hash   -281059107
     * @symbol  ??0CommandBlockName\@\@QEAA\@_K\@Z
     */
    MCAPI CommandBlockName(unsigned __int64);
    /**
     * @hash   -410485548
     * @symbol  ?getDescriptionId\@CommandBlockName\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @hash   1546183721
     * @symbol  ??BCommandBlockName\@\@QEBA_KXZ
     */
    MCAPI operator unsigned __int64() const;
    /**
     * @hash   88028868
     * @symbol  ?resolveBlock\@CommandBlockName\@\@QEBA?AVCommandBlockNameResult\@\@AEBV?$vector\@VBlockStateCommandParam\@\@V?$allocator\@VBlockStateCommandParam\@\@\@std\@\@\@std\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI class CommandBlockNameResult resolveBlock(std::vector<class BlockStateCommandParam> const &, class CommandOutput &) const;
    /**
     * @hash   -439380775
     * @symbol  ?resolveBlock\@CommandBlockName\@\@QEBA?AVCommandBlockNameResult\@\@AEBV?$vector\@VBlockStateCommandParam\@\@V?$allocator\@VBlockStateCommandParam\@\@\@std\@\@\@std\@\@HAEAVCommandOutput\@\@\@Z
     */
    MCAPI class CommandBlockNameResult resolveBlock(std::vector<class BlockStateCommandParam> const &, int, class CommandOutput &) const;
    /**
     * @hash   -980153635
     * @symbol  ?resolveBlock\@CommandBlockName\@\@QEBA?AVCommandBlockNameResult\@\@H\@Z
     */
    MCAPI class CommandBlockNameResult resolveBlock(int) const;

};