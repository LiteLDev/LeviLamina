/**
 * @file  BlockCommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockCommandOrigin.
 *
 */
class BlockCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMMANDORIGIN
public:
    class BlockCommandOrigin& operator=(class BlockCommandOrigin const &) = delete;
    BlockCommandOrigin(class BlockCommandOrigin const &) = delete;
    BlockCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockCommandOrigin();
    /**
     * @hash   -338677912
     * @vftbl  1
     * @symbol  ?getRequestId\@BlockCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @hash   -316804409
     * @vftbl  2
     * @symbol  ?getName\@BlockCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   971381556
     * @vftbl  3
     * @symbol  ?getBlockPosition\@BlockCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @hash   -148415743
     * @vftbl  4
     * @symbol  ?getWorldPosition\@BlockCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @hash   619473600
     * @vftbl  5
     * @symbol  ?getRotation\@BlockCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @hash   -1117001222
     * @vftbl  6
     * @symbol  ?getLevel\@BlockCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @hash   -2129439766
     * @vftbl  7
     * @symbol  ?getDimension\@BlockCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @hash   1780182100
     * @vftbl  8
     * @symbol  ?getEntity\@BlockCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @hash   1424901224
     * @vftbl  9
     * @symbol  ?getPermissionsLevel\@BlockCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @hash   1870694222
     * @vftbl  10
     * @symbol  ?clone\@BlockCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   187479388
     * @vftbl  17
     * @symbol  ?canUseCommandsWithoutCheatsEnabled\@BlockCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @hash   -1070035146
     * @vftbl  18
     * @symbol  ?isSelectorExpansionAllowed\@BlockCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @hash   -1347948515
     * @vftbl  23
     * @symbol  ?getOriginType\@BlockCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @hash   -1828301436
     * @vftbl  29
     * @symbol  ?serialize\@BlockCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @hash   -1730037066
     * @vftbl  30
     * @symbol  ?isValid\@BlockCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   -1960858374
     * @vftbl  32
     * @symbol  ?_getBaseCommandBlock\@BlockCommandOrigin\@\@MEBAPEAVBaseCommandBlock\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class BaseCommandBlock * _getBaseCommandBlock(class BlockSource &) const;
    /**
     * @hash   -1205052893
     * @vftbl  33
     * @symbol  ?_getBlockEntity\@BlockCommandOrigin\@\@MEBAPEAVCommandBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class CommandBlockActor * _getBlockEntity(class BlockSource &) const;
    /**
     * @hash   1149549326
     * @symbol  ??0BlockCommandOrigin\@\@QEAA\@AEAVLevel\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BlockCommandOrigin(class Level &, class AutomaticID<class Dimension, int>, std::string const &, class BlockPos const &);
    /**
     * @hash   -1825022104
     * @symbol  ??0BlockCommandOrigin\@\@QEAA\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BlockCommandOrigin(class BlockSource &, class BlockPos const &);
    /**
     * @hash   1644936414
     * @symbol  ?load\@BlockCommandOrigin\@\@SA?AV?$unique_ptr\@VBlockCommandOrigin\@\@U?$default_delete\@VBlockCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCAPI static std::unique_ptr<class BlockCommandOrigin> load(class CompoundTag const &, class Level &);

//protected:
    /**
     * @hash   217200150
     * @symbol  ?_getName\@BlockCommandOrigin\@\@IEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI std::string _getName(class BlockSource &) const;

protected:

};