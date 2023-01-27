/**
 * @file  PlayerCommandOrigin.hpp
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
 * @brief MC class PlayerCommandOrigin.
 *
 */
class PlayerCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERCOMMANDORIGIN
public:
    class PlayerCommandOrigin& operator=(class PlayerCommandOrigin const &) = delete;
    PlayerCommandOrigin(class PlayerCommandOrigin const &) = delete;
    PlayerCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayerCommandOrigin();
    /**
     * @hash   861441724
     * @vftbl  1
     * @symbol  ?getRequestId\@PlayerCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @hash   443468091
     * @vftbl  2
     * @symbol  ?getName\@PlayerCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1200317448
     * @vftbl  3
     * @symbol  ?getBlockPosition\@PlayerCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @hash   -146942235
     * @vftbl  4
     * @symbol  ?getWorldPosition\@PlayerCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @hash   504509828
     * @vftbl  5
     * @symbol  ?getRotation\@PlayerCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @hash   1278481822
     * @vftbl  6
     * @symbol  ?getLevel\@PlayerCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @hash   -1224255778
     * @vftbl  7
     * @symbol  ?getDimension\@PlayerCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @hash   -140635192
     * @vftbl  8
     * @symbol  ?getEntity\@PlayerCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @hash   -564357348
     * @vftbl  9
     * @symbol  ?getPermissionsLevel\@PlayerCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @hash   710391074
     * @vftbl  10
     * @symbol  ?clone\@PlayerCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   1112349591
     * @vftbl  11
     * @symbol  ?getCursorHitBlockPos\@PlayerCommandOrigin\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    /**
     * @hash   2026775678
     * @vftbl  12
     * @symbol  ?getCursorHitPos\@PlayerCommandOrigin\@\@UEBA?AV?$optional\@VVec3\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec3> getCursorHitPos() const;
    /**
     * @hash   -2037079523
     * @vftbl  15
     * @symbol  ?canUseAbility\@PlayerCommandOrigin\@\@UEBA_NW4AbilitiesIndex\@\@\@Z
     */
    virtual bool canUseAbility(enum class AbilitiesIndex) const;
    /**
     * @hash   -996690422
     * @vftbl  18
     * @symbol  ?isSelectorExpansionAllowed\@PlayerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @hash   -1520441894
     * @vftbl  19
     * @symbol  ?getSourceId\@PlayerCommandOrigin\@\@UEBAAEBVNetworkIdentifier\@\@XZ
     */
    virtual class NetworkIdentifier const & getSourceId() const;
    /**
     * @hash   -1944359558
     * @vftbl  20
     * @symbol  ?getSourceSubId\@PlayerCommandOrigin\@\@UEBA?AW4SubClientId\@\@XZ
     */
    virtual enum class SubClientId getSourceSubId() const;
    /**
     * @hash   1246205103
     * @vftbl  22
     * @symbol  ?getIdentity\@PlayerCommandOrigin\@\@UEBA?AUCommandOriginIdentity\@\@XZ
     */
    virtual struct CommandOriginIdentity getIdentity() const;
    /**
     * @hash   466942145
     * @vftbl  23
     * @symbol  ?getOriginType\@PlayerCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @hash   -1126308024
     * @vftbl  29
     * @symbol  ?serialize\@PlayerCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @hash   2130552010
     * @vftbl  30
     * @symbol  ?isValid\@PlayerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   -1027795247
     * @symbol  ??0PlayerCommandOrigin\@\@QEAA\@AEAVPlayer\@\@\@Z
     */
    MCAPI PlayerCommandOrigin(class Player &);
    /**
     * @hash   -966215204
     * @symbol  ?load\@PlayerCommandOrigin\@\@SA?AV?$unique_ptr\@VPlayerCommandOrigin\@\@U?$default_delete\@VPlayerCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCAPI static std::unique_ptr<class PlayerCommandOrigin> load(class CompoundTag const &, class Level &);

};