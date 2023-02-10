/**
 * @file  ServerCommandOrigin.hpp
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
 * @brief MC class ServerCommandOrigin.
 *
 */
class ServerCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCOMMANDORIGIN
public:
    class ServerCommandOrigin& operator=(class ServerCommandOrigin const &) = delete;
    ServerCommandOrigin(class ServerCommandOrigin const &) = delete;
    ServerCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerCommandOrigin();
    /**
     * @hash   -575660546
     * @vftbl  1
     * @symbol  ?getRequestId\@ServerCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @hash   2076051789
     * @vftbl  2
     * @symbol  ?getName\@ServerCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1456280630
     * @vftbl  3
     * @symbol  ?getBlockPosition\@ServerCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @hash   -106736009
     * @vftbl  4
     * @symbol  ?getWorldPosition\@ServerCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @hash   585318822
     * @vftbl  5
     * @symbol  ?getRotation\@ServerCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @hash   -1389203728
     * @vftbl  6
     * @symbol  ?getLevel\@ServerCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @hash   -438717632
     * @vftbl  7
     * @symbol  ?getDimension\@ServerCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @hash   -1855948278
     * @vftbl  8
     * @symbol  ?getEntity\@ServerCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @hash   -264521266
     * @vftbl  9
     * @symbol  ?getPermissionsLevel\@ServerCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @hash   248395252
     * @vftbl  10
     * @symbol  ?clone\@ServerCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   1513231826
     * @vftbl  17
     * @symbol  ?canUseCommandsWithoutCheatsEnabled\@ServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @hash   2136948268
     * @vftbl  18
     * @symbol  ?isSelectorExpansionAllowed\@ServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @hash   1187200211
     * @vftbl  23
     * @symbol  ?getOriginType\@ServerCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @hash   465313658
     * @vftbl  29
     * @symbol  ?serialize\@ServerCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @hash   968546860
     * @vftbl  30
     * @symbol  ?isValid\@ServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   -1117104316
     * @symbol  ??0ServerCommandOrigin\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVServerLevel\@\@W4CommandPermissionLevel\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI ServerCommandOrigin(std::string const &, class ServerLevel &, enum class CommandPermissionLevel, class AutomaticID<class Dimension, int>);
    /**
     * @hash   -1599301186
     * @symbol  ?load\@ServerCommandOrigin\@\@SA?AV?$unique_ptr\@VServerCommandOrigin\@\@U?$default_delete\@VServerCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVServerLevel\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ServerCommandOrigin> load(class CompoundTag const &, class ServerLevel &);

};