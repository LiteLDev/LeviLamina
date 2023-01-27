/**
 * @file  ActorCommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"
#include "../../CommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorCommandOrigin.
 *
 */
class ActorCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORCOMMANDORIGIN
public:
    class ActorCommandOrigin& operator=(class ActorCommandOrigin const &) = delete;
    ActorCommandOrigin(class ActorCommandOrigin const &) = delete;
    ActorCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorCommandOrigin();
    /**
     * @hash   -796166192
     * @vftbl  1
     * @symbol  ?getRequestId\@ActorCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @hash   -403154321
     * @vftbl  2
     * @symbol  ?getName\@ActorCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -141757604
     * @vftbl  3
     * @symbol  ?getBlockPosition\@ActorCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @hash   1217180457
     * @vftbl  4
     * @symbol  ?getWorldPosition\@ActorCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @hash   -317638888
     * @vftbl  5
     * @symbol  ?getRotation\@ActorCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @hash   1618879794
     * @vftbl  6
     * @symbol  ?getLevel\@ActorCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @hash   1880288274
     * @vftbl  7
     * @symbol  ?getDimension\@ActorCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @hash   -731461156
     * @vftbl  8
     * @symbol  ?getEntity\@ActorCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @hash   771752960
     * @vftbl  9
     * @symbol  ?getPermissionsLevel\@ActorCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @hash   1804772214
     * @vftbl  10
     * @symbol  ?clone\@ActorCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   -1364475618
     * @vftbl  18
     * @symbol  ?isSelectorExpansionAllowed\@ActorCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @hash   -448999931
     * @vftbl  23
     * @symbol  ?getOriginType\@ActorCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @hash   1139951196
     * @vftbl  29
     * @symbol  ?serialize\@ActorCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @hash   -2023800994
     * @vftbl  30
     * @symbol  ?isValid\@ActorCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   533678903
     * @symbol  ??0ActorCommandOrigin\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI ActorCommandOrigin(class Actor &);
    /**
     * @hash   2128128414
     * @symbol  ?load\@ActorCommandOrigin\@\@SA?AV?$unique_ptr\@VActorCommandOrigin\@\@U?$default_delete\@VActorCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ActorCommandOrigin> load(class CompoundTag const &, class Level &);

};