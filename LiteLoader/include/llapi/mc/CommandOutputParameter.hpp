/**
 * @file  CommandOutputParameter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandOutputParameter.
 *
 */
class CommandOutputParameter {

#define AFTER_EXTRA
    enum class NoCountType;
    std::string str;
    int type;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDOUTPUTPARAMETER
public:
    class CommandOutputParameter& operator=(class CommandOutputParameter const &) = delete;
    CommandOutputParameter() = delete;
#endif

public:
    /**
     * @hash   112072354
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@_N\@Z
     */
    MCAPI CommandOutputParameter(bool);
    /**
     * @hash   -10316297
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@W4NoCountType\@0\@\@Z
     */
    MCAPI CommandOutputParameter(enum class CommandOutputParameter::NoCountType);
    /**
     * @hash   2135858714
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@VBlockPos\@\@\@Z
     */
    MCAPI CommandOutputParameter(class BlockPos);
    /**
     * @hash   -1728300051
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@PEBD\@Z
     */
    MCAPI CommandOutputParameter(char const *);
    /**
     * @hash   1981694048
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@M\@Z
     */
    MCAPI CommandOutputParameter(float);
    /**
     * @hash   -731672398
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@H\@Z
     */
    MCAPI CommandOutputParameter(int);
    /**
     * @hash   2098236290
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@AEBVActor\@\@\@Z
     */
    MCAPI CommandOutputParameter(class Actor const &);
    /**
     * @hash   -1075659185
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@PEBVActor\@\@\@Z
     */
    MCAPI CommandOutputParameter(class Actor const *);
    /**
     * @hash   -1131684031
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI CommandOutputParameter(std::vector<std::string> const &);
    /**
     * @hash   -1567196110
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@AEBV?$vector\@PEBVActor\@\@V?$allocator\@PEBVActor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI CommandOutputParameter(std::vector<class Actor const *> const &);
    /**
     * @hash   -1975207250
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@AEBV?$vector\@PEBVPlayer\@\@V?$allocator\@PEBVPlayer\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI CommandOutputParameter(std::vector<class Player const *> const &);
    /**
     * @hash   475083528
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI CommandOutputParameter(std::string const &);
    /**
     * @hash   1448780973
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@AEBV?$CommandSelectorResults\@VActor\@\@\@\@\@Z
     */
    MCAPI CommandOutputParameter(class CommandSelectorResults<class Actor> const &);
    /**
     * @hash   1399983185
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@AEBV?$CommandSelectorResults\@VPlayer\@\@\@\@\@Z
     */
    MCAPI CommandOutputParameter(class CommandSelectorResults<class Player> const &);
    /**
     * @hash   5022401
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandOutputParameter(class CommandOutputParameter const &);
    /**
     * @hash   -1472808253
     * @symbol  ??0CommandOutputParameter\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CommandOutputParameter(class CommandOutputParameter &&);
    /**
     * @hash   1226557382
     * @symbol  ??4CommandOutputParameter\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class CommandOutputParameter & operator=(class CommandOutputParameter &&);
    /**
     * @hash   277241719
     * @symbol  ??1CommandOutputParameter\@\@QEAA\@XZ
     */
    MCAPI ~CommandOutputParameter();

};