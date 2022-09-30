/**
 * @file  CommandOutputParameter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   826964098
     * @symbol ??0CommandOutputParameter@@QEAA@_N@Z
     */
    MCAPI CommandOutputParameter(bool);
    /**
     * @hash   704575447
     * @symbol ??0CommandOutputParameter@@QEAA@W4NoCountType@0@@Z
     */
    MCAPI CommandOutputParameter(enum class CommandOutputParameter::NoCountType);
    /**
     * @hash   -1444216838
     * @symbol ??0CommandOutputParameter@@QEAA@VBlockPos@@@Z
     */
    MCAPI CommandOutputParameter(class BlockPos);
    /**
     * @hash   -1013423683
     * @symbol ??0CommandOutputParameter@@QEAA@PEBD@Z
     */
    MCAPI CommandOutputParameter(char const *);
    /**
     * @hash   -1598396880
     * @symbol ??0CommandOutputParameter@@QEAA@M@Z
     */
    MCAPI CommandOutputParameter(float);
    /**
     * @hash   -16796030
     * @symbol ??0CommandOutputParameter@@QEAA@H@Z
     */
    MCAPI CommandOutputParameter(int);
    /**
     * @hash   -1481854638
     * @symbol ??0CommandOutputParameter@@QEAA@AEBVActor@@@Z
     */
    MCAPI CommandOutputParameter(class Actor const &);
    /**
     * @hash   -360782817
     * @symbol ??0CommandOutputParameter@@QEAA@PEBVActor@@@Z
     */
    MCAPI CommandOutputParameter(class Actor const *);
    /**
     * @hash   -416823039
     * @symbol ??0CommandOutputParameter@@QEAA@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI CommandOutputParameter(std::vector<std::string> const &);
    /**
     * @hash   -852335118
     * @symbol ??0CommandOutputParameter@@QEAA@AEBV?$vector@PEBVActor@@V?$allocator@PEBVActor@@@std@@@std@@@Z
     */
    MCAPI CommandOutputParameter(std::vector<class Actor const *> const &);
    /**
     * @hash   -1260346258
     * @symbol ??0CommandOutputParameter@@QEAA@AEBV?$vector@PEBVPlayer@@V?$allocator@PEBVPlayer@@@std@@@std@@@Z
     */
    MCAPI CommandOutputParameter(std::vector<class Player const *> const &);
    /**
     * @hash   1189944520
     * @symbol ??0CommandOutputParameter@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI CommandOutputParameter(std::string const &);
    /**
     * @hash   -2131325331
     * @symbol ??0CommandOutputParameter@@QEAA@AEBV?$CommandSelectorResults@VActor@@@@@Z
     */
    MCAPI CommandOutputParameter(class CommandSelectorResults<class Actor> const &);
    /**
     * @hash   2114844177
     * @symbol ??0CommandOutputParameter@@QEAA@AEBV?$CommandSelectorResults@VPlayer@@@@@Z
     */
    MCAPI CommandOutputParameter(class CommandSelectorResults<class Player> const &);
    /**
     * @hash   719883393
     * @symbol ??0CommandOutputParameter@@QEAA@AEBV0@@Z
     */
    MCAPI CommandOutputParameter(class CommandOutputParameter const &);
    /**
     * @hash   -757947261
     * @symbol ??0CommandOutputParameter@@QEAA@$$QEAV0@@Z
     */
    MCAPI CommandOutputParameter(class CommandOutputParameter &&);
    /**
     * @symbol ??4CommandOutputParameter@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class CommandOutputParameter & operator=(class CommandOutputParameter &&);
    /**
     * @hash   185739143
     * @symbol ??1CommandOutputParameter@@QEAA@XZ
     */
    MCAPI ~CommandOutputParameter();

};