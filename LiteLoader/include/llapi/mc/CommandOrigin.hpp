/**
 * @file  CommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class ServerPlayer;
class CommandArea;
enum class CommandOriginType : char;

#undef BEFORE_EXTRA

/**
 * @brief The command origin
 *
 */
class CommandOrigin {

#define AFTER_EXTRA
// Add Member There
public:
    mce::UUID mUUID;

/**
 * @brief Get the player as the command origin.
 * 
 * @return The player as the command origin, `nullptr` if the command origin is not a player
 */
LIAPI ServerPlayer* getPlayer() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDORIGIN
public:
    class CommandOrigin& operator=(class CommandOrigin const &) = delete;
    CommandOrigin(class CommandOrigin const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CommandOrigin();
    /**
     * @hash   -257229498
     * @vftbl  1
     * @symbol  ?getRequestId\@VirtualCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getRequestId() const = 0;
    /**
     * @hash   -1823676667
     * @vftbl  2
     * @symbol  ?getName\@VirtualCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const = 0;
    /**
     * @hash   807451906
     * @vftbl  3
     * @symbol  ?getBlockPosition\@VirtualCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const = 0;
    /**
     * @hash   -1829916017
     * @vftbl  4
     * @symbol  ?getWorldPosition\@VirtualCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const = 0;
    /**
     * @hash   -900150194
     * @vftbl  5
     * @symbol  ?getRotation\@VirtualCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const = 0;
    /**
     * @hash   -1455323976
     * @vftbl  6
     * @symbol  ?getLevel\@VirtualCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level * getLevel() const = 0;
    /**
     * @hash   -492170376
     * @vftbl  7
     * @symbol  ?getDimension\@VirtualCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension * getDimension() const = 0;
    /**
     * @hash   587159730
     * @vftbl  8
     * @symbol  ?getEntity\@VirtualCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor * getEntity() const = 0;
    /**
     * @hash   -1646859962
     * @vftbl  9
     * @symbol  ?getPermissionsLevel\@VirtualCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const = 0;
    /**
     * @hash   -297328276
     * @vftbl  10
     * @symbol  ?clone\@VirtualCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const = 0;
    /**
     * @hash   713354918
     * @vftbl  11
     * @symbol  ?getCursorHitBlockPos\@CommandOrigin\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    /**
     * @hash   730673917
     * @vftbl  12
     * @symbol  ?getCursorHitPos\@CommandOrigin\@\@UEBA?AV?$optional\@VVec3\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec3> getCursorHitPos() const;
    /**
     * @hash   -1562058616
     * @vftbl  13
     * @symbol  ?hasChatPerms\@CommandOrigin\@\@UEBA_NXZ
     */
    virtual bool hasChatPerms() const;
    /**
     * @hash   -1848811041
     * @vftbl  14
     * @symbol  ?hasTellPerms\@CommandOrigin\@\@UEBA_NXZ
     */
    virtual bool hasTellPerms() const;
    /**
     * @hash   1013313246
     * @vftbl  15
     * @symbol  ?canUseAbility\@CommandOrigin\@\@UEBA_NW4AbilitiesIndex\@\@\@Z
     */
    virtual bool canUseAbility(enum class AbilitiesIndex) const;
    /**
     * @hash   1359965514
     * @vftbl  16
     * @symbol  ?isWorldBuilder\@CommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @hash   -1048791073
     * @vftbl  17
     * @symbol  ?canUseCommandsWithoutCheatsEnabled\@CommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @hash   -1911653847
     * @vftbl  18
     * @symbol  ?isSelectorExpansionAllowed\@CommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @hash   248813801
     * @vftbl  19
     * @symbol  ?getSourceId\@CommandOrigin\@\@UEBAAEBVNetworkIdentifier\@\@XZ
     */
    virtual class NetworkIdentifier const & getSourceId() const;
    /**
     * @hash   2048701145
     * @vftbl  20
     * @symbol  ?getSourceSubId\@CommandOrigin\@\@UEBA?AW4SubClientId\@\@XZ
     */
    virtual enum class SubClientId getSourceSubId() const;
    /**
     * @hash   242091889
     * @vftbl  21
     * @symbol  ?getOutputReceiver\@CommandOrigin\@\@UEBAAEBV1\@XZ
     */
    virtual class CommandOrigin const & getOutputReceiver() const;
    /**
     * @hash   350197710
     * @vftbl  22
     * @symbol  ?getIdentity\@CommandOrigin\@\@UEBA?AUCommandOriginIdentity\@\@XZ
     */
    virtual struct CommandOriginIdentity getIdentity() const;
    /**
     * @hash   -139744133
     * @vftbl  23
     * @symbol  ?getOriginType\@VirtualCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const = 0;
    /**
     * @hash   -272179794
     * @vftbl  24
     * @symbol  ?toCommandOriginData\@CommandOrigin\@\@UEBA?AUCommandOriginData\@\@XZ
     */
    virtual struct CommandOriginData toCommandOriginData() const;
    /**
     * @hash   -1124426909
     * @vftbl  25
     * @symbol  ?getUUID\@CommandOrigin\@\@UEBAAEBVUUID\@mce\@\@XZ
     */
    virtual class mce::UUID const & getUUID() const;
    /**
     * @hash   -1794273453
     * @vftbl  26
     * @symbol  ?handleCommandOutputCallback\@CommandOrigin\@\@UEBAXH$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAVValue\@Json\@\@\@Z
     */
    virtual void handleCommandOutputCallback(int, std::string &&, class Json::Value &&) const;
    /**
     * @hash   1426707681
     * @vftbl  27
     * @symbol  ?updateValues\@CommandOrigin\@\@UEAAXXZ
     */
    virtual void updateValues();
    /**
     * @hash   -1804103762
     * @vftbl  28
     * @symbol  ?getExecutePosition\@CommandOrigin\@\@UEBA?BVVec3\@\@HAEBVCommandPositionFloat\@\@\@Z
     */
    virtual class Vec3 const getExecutePosition(int, class CommandPositionFloat const &) const;
    /**
     * @hash   401005991
     * @vftbl  29
     * @symbol  ?serialize\@CommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @hash   1259671444
     * @vftbl  30
     * @symbol  ?isValid\@VirtualCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const = 0;
    /**
     * @hash   -1642688854
     * @vftbl  31
     * @symbol  ?_setUUID\@CommandOrigin\@\@MEAAXAEBVUUID\@mce\@\@\@Z
     */
    virtual void _setUUID(class mce::UUID const &);
    /**
     * @hash   611437485
     * @symbol  ??0CommandOrigin\@\@QEAA\@XZ
     */
    MCAPI CommandOrigin();
    /**
     * @hash   279356723
     * @symbol  ?getAreaAt\@CommandOrigin\@\@QEBA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@0H_N\@Z
     */
    MCAPI std::unique_ptr<class CommandArea> getAreaAt(class BlockPos const &, class BlockPos const &, int, bool) const;
    /**
     * @hash   586056602
     * @symbol  ?getAreaAt\@CommandOrigin\@\@QEBA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI std::unique_ptr<class CommandArea> getAreaAt(class BlockPos const &, int) const;
    /**
     * @hash   -667199517
     * @symbol  ?getAreaAtWithBuffer\@CommandOrigin\@\@QEBA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@0H_N\@Z
     */
    MCAPI std::unique_ptr<class CommandArea> getAreaAtWithBuffer(class BlockPos const &, class BlockPos const &, int, bool) const;
    /**
     * @hash   2006449558
     * @symbol  ?getAreaAtWithBuffer\@CommandOrigin\@\@QEBA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI std::unique_ptr<class CommandArea> getAreaAtWithBuffer(class BlockPos const &, int) const;
    /**
     * @hash   -546505668
     * @symbol  ?isEditorWorld\@CommandOrigin\@\@QEBA_NXZ
     */
    MCAPI bool isEditorWorld() const;
    /**
     * @hash   439044205
     * @symbol  ?fromCommandOriginData\@CommandOrigin\@\@SA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@AEBUCommandOriginData\@\@AEBV?$NonOwnerPointer\@VILevel\@\@\@Bedrock\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI static std::unique_ptr<class CommandOrigin> fromCommandOriginData(struct CommandOriginData const &, class Bedrock::NonOwnerPointer<class ILevel> const &, class NetworkIdentifier const &, enum class SubClientId);

//protected:

protected:
    /**
     * @hash   -184623795
     * @symbol  ?sUnknownSource\@CommandOrigin\@\@1VNetworkIdentifier\@\@A
     */
    MCAPI static class NetworkIdentifier sUnknownSource;

};