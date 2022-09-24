/**
 * @file  CommandOriginLoader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandOriginLoader.
 *
 */
class CommandOriginLoader {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDORIGINLOADER
public:
    class CommandOriginLoader& operator=(class CommandOriginLoader const &) = delete;
    CommandOriginLoader(class CommandOriginLoader const &) = delete;
    CommandOriginLoader() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CommandOriginLoader();
    /**
     * @hash   528490146
     * @vftbl  1
     * @symbol ?load@CommandOriginLoader@@UEAA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@AEBVCompoundTag@@@Z
     */
    virtual std::unique_ptr<class CommandOrigin> load(class CompoundTag const &);
    /**
     * @hash   -1213063673
     * @symbol ??0CommandOriginLoader@@QEAA@AEAVServerLevel@@@Z
     */
    MCAPI CommandOriginLoader(class ServerLevel &);
    /**
     * @hash   473221734
     * @symbol ?load@CommandOriginLoader@@SA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVServerLevel@@@Z
     */
    MCAPI static std::unique_ptr<class CommandOrigin> load(class CompoundTag const &, class ServerLevel &);

};