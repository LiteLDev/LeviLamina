/**
 * @file  Player.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Actor.hpp"
#include "../../Bedrock.hpp"
#include "../../Editor.hpp"
#include "../../Mob.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class ServerPlayer;
class Player;
class NetworkIdentifier;
class Certificate; 
class Container;
class CompoundTag;
class LayeredAbilities;

class Biome;
#include "UserEntityIdentifierComponent.hpp"
#include "ScorePacketInfo.hpp"
#include "DataItem.hpp"
#include "../I18nAPI.h"
#undef BEFORE_EXTRA

/**
 * @brief The player
 */
class Player : public Mob {

#define AFTER_EXTRA
    // Add new members to class
public:
    enum class PositionMode : char {
        NORMAL,
        RESPAWN,
        TELEPORT,
        HEAD_ROTATION,
    };

    enum class NbtDataType :int {
        Snbt,
        Binary,
        Json,
        Unknown,
    };
    
    LIAPI std::string getName();

    /**
     * @brief Get the real name of the player.
     * 
     * @return The real name of the player
     * 
     * @note This method gets the XBOX account name of the player.
     */
    LIAPI std::string getRealName();

    LIAPI std::string getUuid();
    LIAPI unsigned char getClientSubId();
    LIAPI string getDeviceTypeName();
    LIAPI int getAvgPing();
    LIAPI int getLastPing();
    LIAPI std::string getIP();
    LIAPI string getLanguageCode();
    LIAPI string getServerAddress();
    LIAPI NetworkIdentifier* getNetworkIdentifier();
    LIAPI Certificate* getCertificate();
    LIAPI Container* getEnderChestContainer();
    LIAPI std::pair<BlockPos, int> getRespawnPosition();
    LIAPI float getAvgPacketLoss();
    LIAPI float getLastPacketLoss();
    LIAPI string getClientId();
    LIAPI int getDeviceType();
    LIAPI bool isOperator();
    LIAPI bool isOP();

    LIAPI int getCurrentExperience();
    LIAPI bool setCurrentExperience(int exp);
    LIAPI size_t getTotalExperience();
    LIAPI bool setTotalExperience(size_t exp);
    LIAPI bool reduceExperience(size_t exp);

    LIAPI LayeredAbilities* getAbilities();
    LIAPI void setAbility(AbilitiesIndex index, bool value);
	
    // Experience required to upgrade to level from (level-1)
    LIAPI static int getXpNeededForLevel(int level);

    // Experience required to upgrade to level from level 0
    LIAPI static size_t getTotalXpNeededForLevel(int level);

    template <typename... Args>
    inline std::string trImpl(HMODULE hPlugin, const std::string& format, Args&&... args) {
        return Translation::trlImpl(hPlugin, this->getLanguageCode(), format, std::forward<Args>(args)...);
    }

    template <typename... Args>
    inline std::string tr(const std::string& format, Args&&... args) {
        return trImpl(GetCurrentModule(), format, std::forward<Args>(args)...);
    }

    LIAPI bool sendText(const std::string& text, TextType type = TextType::RAW);

    template <TextType ttype = TextType::RAW, typename... Args>
    inline bool sendText(const std::string& text, Args&&... args) {
        return sendText(this->tr(text, std::forward<Args>(args)...), ttype);
    }
    template <typename... Args>
    inline bool sendFormattedText(const std::string& text, Args&&... args) {
        if constexpr (0 == sizeof...(args)) {
            // Avoid fmt if only one argument
            return sendText(text);
        } else {
            return sendText(fmt::format(text, std::forward<Args>(args)...));
        }
    }

    LIAPI bool kick(const string& msg);
    LIAPI bool crashClient();
    LIAPI bool talkAs(const string& msg);

    /**
     * @brief Give the player items.
     * 
     * @param item The items to give
     * @return True if the player is successfully given the items; otherwise false
     */
    LIAPI bool giveItem(ItemStack* item);
    LIAPI bool giveItem(string typeName, int amount);
    LIAPI bool giveItem(ItemStack* item, int amount);

    LIAPI int clearItem(string typeName);
    LIAPI bool runcmd(const string& cmd);
    LIAPI bool transferServer(const string& address, unsigned short port);
    LIAPI bool setSidebar(const std::string& title, const std::vector<std::pair<std::string, int>>& data, ObjectiveSortOrder sortOrder);
    LIAPI bool removeSidebar();

    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);

    LIAPI static bool setPlayerNbt(mce::UUID const& uuid, CompoundTag* nbt);
    LIAPI static bool setPlayerNbtTags(mce::UUID const& uuid, CompoundTag* nbt, const vector<string>& tags);
    LIAPI static bool deletePlayerNbt(mce::UUID const& uuid);
    LIAPI static std::unique_ptr<CompoundTag> getPlayerNbt(mce::UUID const& uuid);
    LIAPI static std::vector<string> getAllUuid(bool includeSelfSignedId);

    LIAPI bool refreshAttribute(class Attribute const& attribute);
    LIAPI bool refreshAttributes(std::vector<Attribute const*> const& attributes);
    LIAPI void addBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay = 0);
    LIAPI void removeBossEvent(int64_t uid);
    LIAPI void updateBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay = 0);

    LIAPI int getScore(const string& key);
    LIAPI bool setScore(const string& key, int value);
    LIAPI bool addScore(const string& key, int value);
    LIAPI bool reduceScore(const string& key, int value);
    LIAPI bool deleteScore(const string& key);

    // Form
    LIAPI bool sendSimpleForm(const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images, std::function<void(Player*, int)> callback) const;
    LIAPI bool sendModalForm(const string& title, const string& content, const string& confirmButton, const string& cancelButton, std::function<void(Player*, bool)> callback) const;
    LIAPI bool sendCustomForm(const std::string& data, std::function<void(Player*, string)> callback) const;

    // Packet
    LIAPI bool sendTextPacket(string text, TextType Type = TextType::RAW) const;

    /**
     * @brief Display a title on the player's screen.
     * 
     * @param text The texts of the title
     * @param Type The type of the title
     * @param FadeInDuration The fade in duration
     * @param RemainDuration The lasting time
     * @param FadeOutDuration The fade out duration
     * @return True if the title is successfully shown; otherwise false
     */
    LIAPI bool sendTitlePacket(string text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration) const;

    LIAPI bool sendNotePacket(unsigned int tone);
    LIAPI bool sendSpawnParticleEffectPacket(Vec3 spawnPos, int dimid, string ParticleName, int64_t EntityUniqueID = -1) const;
    /*bad*/ LIAPI bool sendPlaySoundPacket(string SoundName, Vec3 Position, float Volume, float Pitch) const;
    LIAPI bool sendAddItemEntityPacket(unsigned long long runtimeID, class Item const& item, int stackSize, short aux, Vec3 pos, vector<std::unique_ptr<DataItem>> dataItems = {}) const;
    LIAPI bool sendAddEntityPacket(unsigned long long runtimeID, string entityType, Vec3 pos, Vec2 rotation, float headYaw, vector<std::unique_ptr<DataItem>> dataItems = {});
    LIAPI bool sendUpdateBlockPacket(BlockPos const& blockPos, unsigned int runtimeId, UpdateBlockFlags flag = UpdateBlockFlags::BlockUpdateAll, UpdateBlockLayer layer = UpdateBlockLayer::UpdateBlockDefault);
    LIAPI bool sendUpdateBlockPacket(BlockPos const& blockPos, const Block& block, UpdateBlockFlags flag = UpdateBlockFlags::BlockUpdateAll, UpdateBlockLayer layer = UpdateBlockLayer::UpdateBlockDefault);
    LIAPI bool sendTransferPacket(const string& address, short port) const;
    LIAPI bool sendSetDisplayObjectivePacket(const string& title, const string& name, char sortOrder) const;
    LIAPI bool sendSetScorePacket(char type, const vector<ScorePacketInfo>& data);
    LIAPI bool sendBossEventPacket(BossEvent type, string name, float percent, BossEventColour colour, int overlay = 0);
    LIAPI bool sendCommandRequestPacket(const string& cmd);
    LIAPI bool sendTextTalkPacket(const string& msg);
    LIAPI bool sendTextTalkPacket(const string& msg, Player* target /* = nullptr*/);

    LIAPI bool sendRawFormPacket(unsigned formId, const string& data) const;
    LIAPI bool sendToastPacket(string title, string msg);

    LIAPI static bool isValid(Player* player);

    // For compatibility
    inline string getDeviceName() {
        return getDeviceTypeName();
    }
    LIAPI bool sendSimpleFormPacket(const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images, std::function<void(int)> callback) const;
    LIAPI bool sendModalFormPacket(const string& title, const string& content, const string& button1, const string& button2, std::function<void(bool)> callback);
    LIAPI bool sendCustomFormPacket(const std::string& data, std::function<void(string)> callback);
    LIAPI std::pair<Vec3, int> getLastDeathPosition();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYER
public:
    class Player& operator=(class Player const &) = delete;
    Player(class Player const &) = delete;
    Player() = delete;
#endif

public:
    /**
     * @hash   2033551292
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@Player\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   935678911
     * @vftbl  12
     * @symbol  ?initializeComponents\@Player\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -2038799164
     * @vftbl  14
     * @symbol  ?_serverInitItemStackIds\@Player\@\@MEAAXXZ
     */
    virtual void _serverInitItemStackIds();
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Player();
    /**
     * @hash   -168807076
     * @vftbl  17
     * @symbol  ?resetUserPos\@Player\@\@UEAAX_N\@Z
     */
    virtual void resetUserPos(bool);
    /**
     * @hash   260837066
     * @vftbl  19
     * @symbol  ?remove\@Player\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @hash   354054874
     * @vftbl  26
     * @symbol  ?getAttachPos\@Player\@\@UEBA?AVVec3\@\@W4ActorLocation\@\@M\@Z
     */
    virtual class Vec3 getAttachPos(enum class ActorLocation, float) const;
    /**
     * @hash   203807163
     * @vftbl  28
     * @symbol  ?move\@Player\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void move(class Vec3 const &);
    /**
     * @hash   -595837652
     * @vftbl  29
     * @symbol  ?move\@Player\@\@UEBAXAEAUIActorMovementProxy\@\@AEBVVec3\@\@\@Z
     */
    virtual void move(struct IActorMovementProxy &, class Vec3 const &) const;
    /**
     * @hash   996900077
     * @vftbl  36
     * @symbol  ?getInterpolatedRidingOffset\@Player\@\@UEBA?AVVec3\@\@MH\@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;
    /**
     * @hash   858350010
     * @vftbl  40
     * @symbol  ?isFireImmune\@Player\@\@UEBA_NXZ
     */
    virtual bool isFireImmune() const;
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   805528238
     * @vftbl  44
     * @symbol  ?teleportTo\@Player\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @hash   -1270220596
     * @vftbl  48
     * @symbol  ?tryCreateAddActorPacket\@Player\@\@UEAA?AV?$unique_ptr\@VAddActorBasePacket\@\@U?$default_delete\@VAddActorBasePacket\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @hash   -51874294
     * @vftbl  49
     * @symbol  ?normalTick\@Player\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   47851789
     * @vftbl  51
     * @symbol  ?passengerTick\@Player\@\@UEAAXXZ
     */
    virtual void passengerTick();
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @hash   -1243741422
     * @vftbl  66
     * @symbol  ?getFormattedNameTag\@Player\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getFormattedNameTag() const;
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @hash   1831838019
     * @vftbl  77
     * @symbol  ?setBlockMovementSlowdownMultiplier\@Player\@\@UEAAXAEBVBlockLegacy\@\@AEBVVec3\@\@\@Z
     */
    virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    /**
     * @hash   -2069981637
     * @vftbl  79
     * @symbol  ?getCameraOffset\@Player\@\@UEBAMXZ
     */
    virtual float getCameraOffset() const;
    /**
     * @hash   489110389
     * @vftbl  81
     * @symbol  ?getShadowRadius\@Player\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @hash   -1826098425
     * @vftbl  93
     * @symbol  ?isImmobile\@Player\@\@UEBA_NXZ
     */
    virtual bool isImmobile() const;
    /**
     * @hash   -151763252
     * @vftbl  95
     * @symbol  ?isSilentObserver\@Player\@\@UEBA_NXZ
     */
    virtual bool isSilentObserver() const;
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @hash   -1906906676
     * @vftbl  98
     * @symbol  ?isSleeping\@Player\@\@UEBA_NXZ
     */
    virtual bool isSleeping() const;
    /**
     * @hash   1140915625
     * @vftbl  99
     * @symbol  ?setSleeping\@Player\@\@UEAAX_N\@Z
     */
    virtual void setSleeping(bool);
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @hash   -1130626906
     * @vftbl  102
     * @symbol  ?isBlocking\@Player\@\@UEBA_NXZ
     */
    virtual bool isBlocking() const;
    /**
     * @hash   -1840244754
     * @vftbl  103
     * @symbol  ?isDamageBlocked\@Player\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @hash   -1880128506
     * @vftbl  117
     * @symbol  ?attack\@Player\@\@UEAA_NAEAVActor\@\@AEBW4ActorDamageCause\@\@\@Z
     */
    virtual bool attack(class Actor &, enum class ActorDamageCause const &);
    /**
     * @hash   -1464704065
     * @vftbl  135
     * @symbol  ?isInvulnerableTo\@Player\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @hash   899980459
     * @vftbl  140
     * @symbol  ?onBounceStarted\@Player\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /**
     * @hash   579082363
     * @vftbl  141
     * @symbol  ?feed\@Player\@\@UEAAXH\@Z
     */
    virtual void feed(int);
    /**
     * @hash   1559425205
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@Player\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @hash   -7982949
     * @vftbl  144
     * @symbol  ?getActorRendererId\@Player\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const & getActorRendererId() const;
    /**
     * @hash   -557927995
     * @vftbl  150
     * @symbol  ?awardKillScore\@Player\@\@UEAAXAEAVActor\@\@H\@Z
     */
    virtual void awardKillScore(class Actor &, int);
    /**
     * @hash   839728138
     * @vftbl  151
     * @symbol  ?setArmor\@Player\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setArmor(enum class ArmorSlot, class ItemStack const &);
    /**
     * @hash   362135219
     * @vftbl  159
     * @symbol  ?setCarriedItem\@Player\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setCarriedItem(class ItemStack const &);
    /**
     * @hash   -113332202
     * @vftbl  160
     * @symbol  ?getCarriedItem\@Player\@\@UEBAAEBVItemStack\@\@XZ
     */
    virtual class ItemStack const & getCarriedItem() const;
    /**
     * @hash   -395357500
     * @vftbl  161
     * @symbol  ?setOffhandSlot\@Player\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setOffhandSlot(class ItemStack const &);
    /**
     * @hash   1354074875
     * @vftbl  162
     * @symbol  ?getEquippedTotem\@Player\@\@UEBAAEBVItemStack\@\@XZ
     */
    virtual class ItemStack const & getEquippedTotem() const;
    /**
     * @hash   836752605
     * @vftbl  163
     * @symbol  ?consumeTotem\@Player\@\@UEAA_NXZ
     */
    virtual bool consumeTotem();
    /**
     * @hash   -525112236
     * @vftbl  168
     * @symbol  ?getEntityTypeId\@Player\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getEntityTypeId() const;
    /**
     * @hash   -303336434
     * @vftbl  172
     * @symbol  ?canFreeze\@Player\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @hash   -186698409
     * @vftbl  176
     * @symbol  ?getPortalCooldown\@Player\@\@UEBAHXZ
     */
    virtual int getPortalCooldown() const;
    /**
     * @hash   -368487042
     * @vftbl  177
     * @symbol  ?getPortalWaitTime\@Player\@\@UEBAHXZ
     */
    virtual int getPortalWaitTime() const;
    /**
     * @hash   -155497302
     * @vftbl  178
     * @symbol  ?canChangeDimensionsUsingPortal\@Player\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @hash   2040492473
     * @vftbl  188
     * @symbol  ?onSynchedDataUpdate\@Player\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @hash   -1585878027
     * @vftbl  189
     * @symbol  ?canAddPassenger\@Player\@\@UEBA_NAEAVActor\@\@\@Z
     */
    virtual bool canAddPassenger(class Actor &) const;
    /**
     * @hash   1544577164
     * @vftbl  191
     * @symbol  ?canBePulledIntoVehicle\@Player\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @hash   -180074690
     * @vftbl  195
     * @symbol  ?sendMotionPacketIfNeeded\@Player\@\@UEAAXXZ
     */
    virtual void sendMotionPacketIfNeeded();
    /**
     * @hash   1117439429
     * @vftbl  198
     * @symbol  ?startSwimming\@Player\@\@UEAAXXZ
     */
    virtual void startSwimming();
    /**
     * @hash   -701681019
     * @vftbl  199
     * @symbol  ?stopSwimming\@Player\@\@UEAAXXZ
     */
    virtual void stopSwimming();
    /**
     * @hash   872817333
     * @vftbl  201
     * @symbol  ?getCommandPermissionLevel\@Player\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getCommandPermissionLevel() const;
    /**
     * @hash   -1303246905
     * @vftbl  213
     * @symbol  ?canObstructSpawningAndBlockPlacement\@Player\@\@UEBA_NXZ
     */
    virtual bool canObstructSpawningAndBlockPlacement() const;
    /**
     * @hash   741310934
     * @vftbl  214
     * @symbol  ?getAnimationComponent\@Player\@\@UEAAAEAVAnimationComponent\@\@XZ
     */
    virtual class AnimationComponent & getAnimationComponent();
    /**
     * @hash   269894909
     * @vftbl  217
     * @symbol  ?useItem\@Player\@\@UEAAXAEAVItemStackBase\@\@W4ItemUseMethod\@\@_N\@Z
     */
    virtual void useItem(class ItemStackBase &, enum class ItemUseMethod, bool);
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @hash   1121829969
     * @vftbl  221
     * @symbol  ?getMapDecorationRotation\@Player\@\@UEBAMXZ
     */
    virtual float getMapDecorationRotation() const;
    /**
     * @hash   1775433322
     * @vftbl  223
     * @symbol  ?isWorldBuilder\@Player\@\@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @hash   478067888
     * @vftbl  224
     * @symbol  ?isCreative\@Player\@\@UEBA_NXZ
     */
    virtual bool isCreative() const;
    /**
     * @hash   -1242416099
     * @vftbl  225
     * @symbol  ?isAdventure\@Player\@\@UEBA_NXZ
     */
    virtual bool isAdventure() const;
    /**
     * @hash   -1018752801
     * @vftbl  226
     * @symbol  ?isSurvival\@Player\@\@UEBA_NXZ
     */
    virtual bool isSurvival() const;
    /**
     * @hash   1245265516
     * @vftbl  227
     * @symbol  ?isSpectator\@Player\@\@UEBA_NXZ
     */
    virtual bool isSpectator() const;
    /**
     * @hash   547210510
     * @vftbl  229
     * @symbol  ?add\@Player\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool add(class ItemStack &);
    /**
     * @hash   -1451676385
     * @vftbl  230
     * @symbol  ?drop\@Player\@\@UEAA_NAEBVItemStack\@\@_N\@Z
     */
    virtual bool drop(class ItemStack const &, bool);
    /**
     * @hash   -1892343166
     * @vftbl  238
     * @symbol  ?startSpinAttack\@Player\@\@UEAAXXZ
     */
    virtual void startSpinAttack();
    /**
     * @hash   65419074
     * @vftbl  239
     * @symbol  ?stopSpinAttack\@Player\@\@UEAAXXZ
     */
    virtual void stopSpinAttack();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @hash   -1178167996
     * @vftbl  246
     * @symbol  ?die\@Player\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @hash   182909057
     * @vftbl  247
     * @symbol  ?shouldDropDeathLoot\@Player\@\@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @hash   -1358751596
     * @vftbl  254
     * @symbol  ?getLastDeathPos\@Player\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    virtual class std::optional<class BlockPos> getLastDeathPos() const;
    /**
     * @hash   282508752
     * @vftbl  255
     * @symbol  ?getLastDeathDimension\@Player\@\@UEBA?AV?$optional\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@XZ
     */
    virtual class std::optional<class AutomaticID<class Dimension, int>> getLastDeathDimension() const;
    /**
     * @hash   -1595631468
     * @vftbl  256
     * @symbol  ?hasDiedBefore\@Player\@\@UEBA_NXZ
     */
    virtual bool hasDiedBefore() const;
    /**
     * @hash   -1709840707
     * @vftbl  258
     * @symbol  ?_shouldProvideFeedbackOnHandContainerItemSet\@Player\@\@MEBA_NW4HandSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(enum class HandSlot, class ItemStack const &) const;
    /**
     * @hash   783474333
     * @vftbl  259
     * @symbol  ?_shouldProvideFeedbackOnArmorSet\@Player\@\@MEBA_NW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool _shouldProvideFeedbackOnArmorSet(enum class ArmorSlot, class ItemStack const &) const;
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   -2084230545
     * @vftbl  263
     * @symbol  ?_hurt\@Player\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -1549350241
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@Player\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -968771170
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@Player\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -1537039404
     * @vftbl  276
     * @symbol  ?_onSizeUpdated\@Player\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @hash   -921688946
     * @vftbl  283
     * @symbol  ?getSpeed\@Player\@\@UEBAMXZ
     */
    virtual float getSpeed() const;
    /**
     * @hash   -1586819433
     * @vftbl  284
     * @symbol  ?setSpeed\@Player\@\@UEAAXM\@Z
     */
    virtual void setSpeed(float);
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   44049170
     * @vftbl  289
     * @symbol  ?travel\@Player\@\@UEAAXMMM\@Z
     */
    virtual void travel(float, float, float);
    /**
     * @hash   -471311222
     * @vftbl  291
     * @symbol  ?aiStep\@Player\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @hash   1565077996
     * @vftbl  292
     * @symbol  ?aiStep\@Player\@\@UEBAXAEAUIMobMovementProxy\@\@\@Z
     */
    virtual void aiStep(struct IMobMovementProxy &) const;
    /**
     * @hash   1302362172
     * @vftbl  299
     * @symbol  ?getItemUseDuration\@Player\@\@UEBAHXZ
     */
    virtual int getItemUseDuration() const;
    /**
     * @hash   -698699031
     * @vftbl  300
     * @symbol  ?getItemUseStartupProgress\@Player\@\@UEBAMXZ
     */
    virtual float getItemUseStartupProgress() const;
    /**
     * @hash   270649629
     * @vftbl  301
     * @symbol  ?getItemUseIntervalProgress\@Player\@\@UEBAMXZ
     */
    virtual float getItemUseIntervalProgress() const;
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @hash   870202818
     * @vftbl  324
     * @symbol  ?getAllHand\@Player\@\@UEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const *> getAllHand() const;
    /**
     * @hash   1379336843
     * @vftbl  325
     * @symbol  ?getAllEquipment\@Player\@\@UEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const *> getAllEquipment() const;
    /**
     * @hash   549907969
     * @vftbl  327
     * @symbol  ?dropEquipmentOnDeath\@Player\@\@UEAAXAEBVActorDamageSource\@\@H\@Z
     */
    virtual void dropEquipmentOnDeath(class ActorDamageSource const &, int);
    /**
     * @hash   -388998948
     * @vftbl  328
     * @symbol  ?dropEquipmentOnDeath\@Player\@\@UEAAXXZ
     */
    virtual void dropEquipmentOnDeath();
    /**
     * @hash   1084549643
     * @vftbl  329
     * @symbol  ?clearVanishEnchantedItemsOnDeath\@Player\@\@UEAAXXZ
     */
    virtual void clearVanishEnchantedItemsOnDeath();
    /**
     * @hash   -882920622
     * @vftbl  330
     * @symbol  ?sendInventory\@Player\@\@UEAAX_N\@Z
     */
    virtual void sendInventory(bool);
    /**
     * @hash   -1001281013
     * @vftbl  341
     * @symbol  ?canExistWhenDisallowMob\@Player\@\@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const;
    /**
     * @hash   -355180914
     * @vftbl  346
     * @symbol  ?initBodyControl\@Player\@\@EEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @hash   846482101
     * @vftbl  347
     * @symbol  ?jumpFromGround\@Player\@\@UEAAXXZ
     */
    virtual void jumpFromGround();
    /**
     * @hash   -1875248415
     * @vftbl  348
     * @symbol  ?jumpFromGround\@Player\@\@UEBAXAEAUIMobMovementProxy\@\@\@Z
     */
    virtual void jumpFromGround(struct IMobMovementProxy &) const;
    /**
     * @hash   726927064
     * @vftbl  353
     * @symbol  ?updateGliding\@Player\@\@MEAAXXZ
     */
    virtual void updateGliding();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
    /**
     * @hash   2115781331
     * @vftbl  356
     * @symbol  ?prepareRegion\@Player\@\@UEAAXAEAVChunkSource\@\@\@Z
     */
    virtual void prepareRegion(class ChunkSource &);
    /**
     * @hash   -1914495884
     * @vftbl  357
     * @symbol  ?destroyRegion\@Player\@\@UEAAXXZ
     */
    virtual void destroyRegion();
    /**
     * @hash   -1671517978
     * @vftbl  358
     * @symbol  ?suspendRegion\@Player\@\@UEAAXXZ
     */
    virtual void suspendRegion();
    /**
     * @hash   -1073378686
     * @vftbl  359
     * @symbol  ?resendAllChunks\@Player\@\@UEAAXXZ
     */
    virtual void resendAllChunks();
    /**
     * @hash   -563931131
     * @vftbl  360
     * @symbol  ?_fireWillChangeDimension\@Player\@\@UEAAXXZ
     */
    virtual void _fireWillChangeDimension();
    /**
     * @hash   -895659015
     * @vftbl  361
     * @symbol  ?_fireDimensionChanged\@Player\@\@UEAAXXZ
     */
    virtual void _fireDimensionChanged();
    /**
     * @hash   1371953692
     * @vftbl  362
     * @symbol  ?changeDimensionWithCredits\@Player\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /**
     * @hash   -29691674
     * @vftbl  363
     * @symbol  ?tickWorld\@Player\@\@UEAAXAEBUTick\@\@\@Z
     */
    virtual void tickWorld(struct Tick const &);
    /**
     * @vftbl  364
     * @symbol  __unk_vfn_364
     */
    virtual void __unk_vfn_364() = 0;
    /**
     * @hash   241635979
     * @vftbl  365
     * @symbol  ?getTickingOffsets\@Player\@\@UEBAAEBV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ChunkPos> const & getTickingOffsets() const;
    /**
     * @hash   -1677356916
     * @vftbl  366
     * @symbol  ?moveView\@Player\@\@UEAAXXZ
     */
    virtual void moveView();
    /**
     * @hash   -2046463165
     * @vftbl  367
     * @symbol  ?moveSpawnView\@Player\@\@UEAAXAEBVVec3\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void moveSpawnView(class Vec3 const &, class AutomaticID<class Dimension, int>);
    /**
     * @hash   -376755399
     * @vftbl  368
     * @symbol  ?setName\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setName(std::string const &);
    /**
     * @hash   2075577104
     * @vftbl  369
     * @symbol  ?getTravelledMethod\@Player\@\@UEBA?AW4TravelMethod\@\@XZ
     */
    virtual enum class TravelMethod getTravelledMethod() const;
    /**
     * @hash   -575107836
     * @vftbl  370
     * @symbol  ?checkMovementStats\@Player\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void checkMovementStats(class Vec3 const &);
    /**
     * @vftbl  371
     * @symbol  __unk_vfn_371
     */
    virtual void __unk_vfn_371();
    /**
     * @vftbl  372
     * @symbol  __unk_vfn_372
     */
    virtual void __unk_vfn_372();
    /**
     * @hash   -1520164418
     * @vftbl  373
     * @symbol  ?respawn\@Player\@\@UEAAXXZ
     */
    virtual void respawn();
    /**
     * @vftbl  374
     * @symbol  __unk_vfn_374
     */
    virtual void __unk_vfn_374();
    /**
     * @vftbl  375
     * @symbol  __unk_vfn_375
     */
    virtual void __unk_vfn_375();
    /**
     * @hash   1528115967
     * @vftbl  376
     * @symbol  ?hasResource\@Player\@\@UEAA_NH\@Z
     */
    virtual bool hasResource(int);
    /**
     * @hash   -621582380
     * @vftbl  377
     * @symbol  ?completeUsingItem\@Player\@\@UEAAXXZ
     */
    virtual void completeUsingItem();
    /**
     * @hash   1475343440
     * @vftbl  378
     * @symbol  ?startDestroying\@Player\@\@UEAAXXZ
     */
    virtual void startDestroying();
    /**
     * @hash   -864152640
     * @vftbl  379
     * @symbol  ?stopDestroying\@Player\@\@UEAAXXZ
     */
    virtual void stopDestroying();
    /**
     * @vftbl  380
     * @symbol  __unk_vfn_380
     */
    virtual void __unk_vfn_380();
    /**
     * @vftbl  381
     * @symbol  __unk_vfn_381
     */
    virtual void __unk_vfn_381();
    /**
     * @hash   1598162062
     * @vftbl  382
     * @symbol  ?openTrading\@Player\@\@UEAAXAEBUActorUniqueID\@\@_N\@Z
     */
    virtual void openTrading(struct ActorUniqueID const &, bool);
    /**
     * @hash   1422343755
     * @vftbl  383
     * @symbol  ?canOpenContainerScreen\@Player\@\@UEAA_NXZ
     */
    virtual bool canOpenContainerScreen();
    /**
     * @vftbl  384
     * @symbol  __unk_vfn_384
     */
    virtual void __unk_vfn_384();
    /**
     * @hash   1690907334
     * @vftbl  385
     * @symbol  ?openNpcInteractScreen\@Player\@\@UEAAXV?$shared_ptr\@UINpcDialogueData\@\@\@std\@\@\@Z
     */
    virtual void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData>);
    /**
     * @hash   -1342442728
     * @vftbl  386
     * @symbol  ?openInventory\@Player\@\@UEAAXXZ
     */
    virtual void openInventory();
    /**
     * @vftbl  387
     * @symbol  __unk_vfn_387
     */
    virtual void __unk_vfn_387();
    /**
     * @vftbl  388
     * @symbol  __unk_vfn_388
     */
    virtual void __unk_vfn_388();
    /**
     * @hash   655631652
     * @vftbl  389
     * @symbol  ?displayTextObjectMessage\@Player\@\@UEAAXAEBVTextObjectRoot\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void displayTextObjectMessage(class TextObjectRoot const &, std::string const &, std::string const &);
    /**
     * @hash   -1580791212
     * @vftbl  390
     * @symbol  ?displayTextObjectWhisperMessage\@Player\@\@UEAAXAEBVResolvedTextObject\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /**
     * @hash   -1550868685
     * @vftbl  391
     * @symbol  ?displayTextObjectWhisperMessage\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    virtual void displayTextObjectWhisperMessage(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -1846858195
     * @vftbl  392
     * @symbol  ?displayWhisperMessage\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    virtual void displayWhisperMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   1442040038
     * @vftbl  393
     * @symbol  ?startSleepInBed\@Player\@\@UEAA?AW4BedSleepingResult\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class BedSleepingResult startSleepInBed(class BlockPos const &);
    /**
     * @hash   -1012323755
     * @vftbl  394
     * @symbol  ?stopSleepInBed\@Player\@\@UEAAX_N0\@Z
     */
    virtual void stopSleepInBed(bool, bool);
    /**
     * @hash   -2076057969
     * @vftbl  395
     * @symbol  ?canStartSleepInBed\@Player\@\@UEAA_NXZ
     */
    virtual bool canStartSleepInBed();
    /**
     * @hash   230822878
     * @vftbl  396
     * @symbol  ?getSleepTimer\@Player\@\@UEBAHXZ
     */
    virtual int getSleepTimer() const;
    /**
     * @hash   32228610
     * @vftbl  397
     * @symbol  ?getPreviousTickSleepTimer\@Player\@\@UEBAHXZ
     */
    virtual int getPreviousTickSleepTimer() const;
    /**
     * @vftbl  398
     * @symbol  __unk_vfn_398
     */
    virtual void __unk_vfn_398();
    /**
     * @vftbl  399
     * @symbol  __unk_vfn_399
     */
    virtual void __unk_vfn_399();
    /**
     * @hash   -1235224056
     * @vftbl  400
     * @symbol  ?isHostingPlayer\@Player\@\@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const;
    /**
     * @hash   -580822423
     * @vftbl  401
     * @symbol  ?isLoading\@Player\@\@UEBA_NXZ
     */
    virtual bool isLoading() const;
    /**
     * @hash   -1115209168
     * @vftbl  402
     * @symbol  ?isPlayerInitialized\@Player\@\@UEBA_NXZ
     */
    virtual bool isPlayerInitialized() const;
    /**
     * @vftbl  403
     * @symbol  __unk_vfn_403
     */
    virtual void __unk_vfn_403();
    /**
     * @hash   1801869603
     * @vftbl  404
     * @symbol  ?registerTrackedBoss\@Player\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void registerTrackedBoss(struct ActorUniqueID);
    /**
     * @hash   -792888868
     * @vftbl  405
     * @symbol  ?unRegisterTrackedBoss\@Player\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void unRegisterTrackedBoss(struct ActorUniqueID);
    /**
     * @hash   -1128369725
     * @vftbl  406
     * @symbol  ?setPlayerGameType\@Player\@\@UEAAXW4GameType\@\@\@Z
     */
    virtual void setPlayerGameType(enum class GameType);
    /**
     * @hash   725209417
     * @vftbl  407
     * @symbol  ?initHUDContainerManager\@Player\@\@UEAAXXZ
     */
    virtual void initHUDContainerManager();
    /**
     * @hash   1705975320
     * @vftbl  408
     * @symbol  ?_crit\@Player\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void _crit(class Actor &);
    /**
     * @hash   -802534899
     * @vftbl  409
     * @symbol  ?getEventing\@Player\@\@UEBAPEAVIMinecraftEventing\@\@XZ
     */
    virtual class IMinecraftEventing * getEventing() const;
    /**
     * @vftbl  410
     * @symbol  __unk_vfn_410
     */
    virtual void __unk_vfn_410();
    /**
     * @hash   1185690297
     * @vftbl  411
     * @symbol  ?sendEventPacket\@Player\@\@UEBAXAEAVEventPacket\@\@\@Z
     */
    virtual void sendEventPacket(class EventPacket &) const;
    /**
     * @hash   1303618798
     * @vftbl  412
     * @symbol  ?addExperience\@Player\@\@UEAAXH\@Z
     */
    virtual void addExperience(int);
    /**
     * @hash   195969513
     * @vftbl  413
     * @symbol  ?addLevels\@Player\@\@UEAAXH\@Z
     */
    virtual void addLevels(int);
    /**
     * @hash   -1215784189
     * @vftbl  414
     * @symbol  ?setContainerData\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@HH\@Z
     */
    virtual void setContainerData(class IContainerManager &, int, int) = 0;
    /**
     * @hash   1463600696
     * @vftbl  415
     * @symbol  ?slotChanged\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@AEAVContainer\@\@HAEBVItemStack\@\@2_N\@Z
     */
    virtual void slotChanged(class IContainerManager &, class Container &, int, class ItemStack const &, class ItemStack const &, bool) = 0;
    /**
     * @hash   -1481914150
     * @vftbl  416
     * @symbol  ?inventoryChanged\@Player\@\@UEAAXAEAVContainer\@\@HAEBVItemStack\@\@1_N\@Z
     */
    virtual void inventoryChanged(class Container &, int, class ItemStack const &, class ItemStack const &, bool);
    /**
     * @hash   -491326394
     * @vftbl  417
     * @symbol  ?refreshContainer\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@\@Z
     */
    virtual void refreshContainer(class IContainerManager &) = 0;
    /**
     * @hash   -1313808275
     * @vftbl  418
     * @symbol  ?deleteContainerManager\@Player\@\@UEAAXXZ
     */
    virtual void deleteContainerManager();
    /**
     * @hash   333189140
     * @vftbl  419
     * @symbol  ?isActorRelevant\@Player\@\@UEAA_NAEBVActor\@\@\@Z
     */
    virtual bool isActorRelevant(class Actor const &);
    /**
     * @hash   -1354516694
     * @vftbl  420
     * @symbol  ?isTeacher\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isTeacher() const = 0;
    /**
     * @hash   760276994
     * @vftbl  421
     * @symbol  ?onSuspension\@Player\@\@UEAAXXZ
     */
    virtual void onSuspension();
    /**
     * @hash   -1048305027
     * @vftbl  422
     * @symbol  ?onLinkedSlotsChanged\@Player\@\@UEAAXXZ
     */
    virtual void onLinkedSlotsChanged();
    /**
     * @hash   -303482587
     * @vftbl  423
     * @symbol  ?startCooldown\@Player\@\@UEAAXPEBVItem\@\@_N\@Z
     */
    virtual void startCooldown(class Item const *, bool);
    /**
     * @hash   1041648524
     * @vftbl  424
     * @symbol  ?getItemCooldownLeft\@Player\@\@UEBAHAEBVHashedString\@\@\@Z
     */
    virtual int getItemCooldownLeft(class HashedString const &) const;
    /**
     * @hash   2021936861
     * @vftbl  425
     * @symbol  ?getItemCooldownLeft\@Player\@\@UEBAH_K\@Z
     */
    virtual int getItemCooldownLeft(unsigned __int64) const;
    /**
     * @hash   99833165
     * @vftbl  426
     * @symbol  ?getMaxItemCooldownLeft\@Player\@\@UEBAHXZ
     */
    virtual int getMaxItemCooldownLeft() const;
    /**
     * @hash   -13991229
     * @vftbl  427
     * @symbol  ?isItemOnCooldown\@Player\@\@UEBA_NAEBVHashedString\@\@\@Z
     */
    virtual bool isItemOnCooldown(class HashedString const &) const;
    /**
     * @hash   1770538201
     * @vftbl  428
     * @symbol  ?sendInventoryTransaction\@ServerPlayer\@\@UEBAXAEBVInventoryTransaction\@\@\@Z
     */
    virtual void sendInventoryTransaction(class InventoryTransaction const &) const = 0;
    /**
     * @hash   -377077727
     * @vftbl  429
     * @symbol  ?sendComplexInventoryTransaction\@ServerPlayer\@\@UEBAXV?$unique_ptr\@VComplexInventoryTransaction\@\@U?$default_delete\@VComplexInventoryTransaction\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const = 0;
    /**
     * @hash   296919991
     * @vftbl  430
     * @symbol  ?sendNetworkPacket\@Player\@\@UEBAXAEAVPacket\@\@\@Z
     */
    virtual void sendNetworkPacket(class Packet &) const;
    /**
     * @hash   -1130499567
     * @vftbl  431
     * @symbol  ?getPlayerEventCoordinator\@ServerPlayer\@\@UEAAAEAVPlayerEventCoordinator\@\@XZ
     */
    virtual class PlayerEventCoordinator & getPlayerEventCoordinator() = 0;
    /**
     * @hash   819128593
     * @vftbl  432
     * @symbol  ?tryGetMoveInputHandler\@ServerPlayer\@\@UEBAPEAVMoveInputHandler\@\@XZ
     */
    virtual class MoveInputHandler * tryGetMoveInputHandler() const = 0;
    /**
     * @hash   1036289354
     * @vftbl  433
     * @symbol  ?getInputMode\@ServerPlayer\@\@UEBA?AW4InputMode\@\@XZ
     */
    virtual enum class InputMode getInputMode() const = 0;
    /**
     * @hash   820122805
     * @vftbl  434
     * @symbol  ?getPlayMode\@ServerPlayer\@\@UEBA?AW4ClientPlayMode\@\@XZ
     */
    virtual enum class ClientPlayMode getPlayMode() const = 0;
    /**
     * @hash   1518000937
     * @vftbl  435
     * @symbol  ?reportMovementTelemetry\@Player\@\@UEAAXW4MovementEventType\@\@\@Z
     */
    virtual void reportMovementTelemetry(enum class MovementEventType);
    /**
     * @vftbl  436
     * @symbol  __unk_vfn_436
     */
    virtual void __unk_vfn_436();
    /**
     * @hash   509018695
     * @vftbl  437
     * @symbol  ?getXuid\@Player\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getXuid() const;
    /**
     * @hash   -2012303682
     * @vftbl  438
     * @symbol  ?getMovementSettings\@Player\@\@UEBAAEBUPlayerMovementSettings\@\@XZ
     */
    virtual struct PlayerMovementSettings const & getMovementSettings() const;
    /**
     * @vftbl  439
     * @symbol  __unk_vfn_439
     */
    virtual void __unk_vfn_439();
    /**
     * @hash   -1829369022
     * @vftbl  440
     * @symbol  ?onMovePlayerPacketNormal\@Player\@\@MEAAXAEBVVec3\@\@AEBVVec2\@\@M\@Z
     */
    virtual void onMovePlayerPacketNormal(class Vec3 const &, class Vec2 const &, float);
    /**
     * @hash   975692917
     * @vftbl  441
     * @symbol  ?_createChunkSource\@Player\@\@MEAA?AV?$shared_ptr\@VChunkViewSource\@\@\@std\@\@AEAVChunkSource\@\@\@Z
     */
    virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource &);
    /**
     * @hash   -1207638467
     * @vftbl  442
     * @symbol  ?setAbilities\@Player\@\@UEAAXAEBVLayeredAbilities\@\@\@Z
     */
    virtual void setAbilities(class LayeredAbilities const &);
    /**
     * @hash   -557158002
     * @vftbl  443
     * @symbol  ?getEditorPlayer\@ServerPlayer\@\@UEBA?AV?$NonOwnerPointer\@VIEditorPlayer\@Editor\@\@\@Bedrock\@\@XZ
     */
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const = 0;
    /**
     * @hash   -513485751
     * @vftbl  444
     * @symbol  ?destroyEditorPlayer\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void destroyEditorPlayer() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYER
    /**
     * @hash   -399907747
     * @symbol  ?addSavedChunk\@Player\@\@UEAAXAEBVChunkPos\@\@\@Z
     */
    MCVAPI void addSavedChunk(class ChunkPos const &);
    /**
     * @hash   798789155
     * @symbol  ?canInteractWithOtherEntitiesInGame\@Player\@\@UEBA_NXZ
     */
    MCVAPI bool canInteractWithOtherEntitiesInGame() const;
    /**
     * @hash   -575001645
     * @symbol  ?displayChatMessage\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void displayChatMessage(std::string const &, std::string const &);
    /**
     * @hash   626659596
     * @symbol  ?displayClientMessage\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void displayClientMessage(std::string const &);
    /**
     * @hash   -1995704364
     * @symbol  ?getAlwaysShowNameTag\@Player\@\@UEBA_NXZ
     */
    MCVAPI bool getAlwaysShowNameTag() const;
    /**
     * @hash   -1437441096
     * @symbol  ?getCurrentStructureFeature\@Player\@\@UEBA?AW4StructureFeatureType\@\@XZ
     */
    MCVAPI enum class StructureFeatureType getCurrentStructureFeature() const;
    /**
     * @hash   -829611839
     * @symbol  ?getUserId\@Player\@\@UEBAIXZ
     */
    MCVAPI unsigned int getUserId() const;
    /**
     * @hash   748622305
     * @symbol  ?isAutoJumpEnabled\@Player\@\@UEBA_NXZ
     */
    MCVAPI bool isAutoJumpEnabled() const;
    /**
     * @hash   332313780
     * @symbol  ?isCreativeModeAllowed\@Player\@\@UEAA_NXZ
     */
    MCVAPI bool isCreativeModeAllowed();
    /**
     * @hash   -81098462
     * @symbol  ?isInTrialMode\@Player\@\@UEAA_NXZ
     */
    MCVAPI bool isInTrialMode();
    /**
     * @hash   1609341106
     * @symbol  ?isPlayer\@Player\@\@UEBA_NXZ
     */
    MCVAPI bool isPlayer() const;
    /**
     * @hash   -1528987401
     * @symbol  ?isShootable\@Player\@\@UEAA_NXZ
     */
    MCVAPI bool isShootable();
    /**
     * @hash   -947442707
     * @symbol  ?isSimulated\@Player\@\@UEBA_NXZ
     */
    MCVAPI bool isSimulated() const;
    /**
     * @hash   228300671
     * @symbol  ?openBook\@Player\@\@UEAAXH_NHPEAVBlockActor\@\@\@Z
     */
    MCVAPI void openBook(int, bool, int, class BlockActor *);
    /**
     * @hash   831719430
     * @symbol  ?openChalkboard\@Player\@\@UEAAXAEAVChalkboardBlockActor\@\@_N\@Z
     */
    MCVAPI void openChalkboard(class ChalkboardBlockActor &, bool);
    /**
     * @hash   -1211398524
     * @symbol  ?openPortfolio\@Player\@\@UEAAXXZ
     */
    MCVAPI void openPortfolio();
    /**
     * @hash   1315222205
     * @symbol  ?openSign\@Player\@\@UEAAXAEBVBlockPos\@\@\@Z
     */
    MCVAPI void openSign(class BlockPos const &);
    /**
     * @symbol  ?playEmote\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void playEmote(std::string const &, bool);
    /**
     * @hash   -1877418386
     * @symbol  ?resetRot\@Player\@\@UEAAXXZ
     */
    MCVAPI void resetRot();
    /**
     * @hash   1993588928
     * @symbol  ?stopLoading\@Player\@\@UEAAXXZ
     */
    MCVAPI void stopLoading();
#endif
    /**
     * @hash   1363344984
     * @symbol  ??0Player\@\@QEAA\@AEAVLevel\@\@AEAVPacketSender\@\@W4GameType\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@6V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@9\@AEAVEntityContext\@\@66\@Z
     */
    MCAPI Player(class Level &, class PacketSender &, enum class GameType, class NetworkIdentifier const &, enum class SubClientId, class mce::UUID, std::string const &, std::string const &, std::unique_ptr<class Certificate>, class EntityContext &, std::string const &, std::string const &);
    /**
     * @hash   503184260
     * @symbol  ?applyExhaustion\@Player\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void applyExhaustion(class Vec3 const &);
    /**
     * @hash   -1746704385
     * @symbol  ?broadcastPlayerSpawnedMobEvent\@Player\@\@QEAAXW4ActorType\@\@W4MobSpawnMethod\@\@\@Z
     */
    MCAPI void broadcastPlayerSpawnedMobEvent(enum class ActorType, enum class MobSpawnMethod);
    /**
     * @hash   -1918782566
     * @symbol  ?canBeSeenOnMap\@Player\@\@QEBA_NXZ
     */
    MCAPI bool canBeSeenOnMap() const;
    /**
     * @hash   -841655335
     * @symbol  ?canDestroy\@Player\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool canDestroy(class Block const &) const;
    /**
     * @hash   1417200746
     * @symbol  ?canSleep\@Player\@\@QEBA_NXZ
     */
    MCAPI bool canSleep() const;
    /**
     * @hash   1598346169
     * @symbol  ?canStackInOffhand\@Player\@\@QEBA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool canStackInOffhand(class ItemStack const &) const;
    /**
     * @hash   -620288933
     * @symbol  ?canUseAbility\@Player\@\@QEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCAPI bool canUseAbility(enum class AbilitiesIndex) const;
    /**
     * @hash   675858638
     * @symbol  ?canUseOperatorBlocks\@Player\@\@QEBA_NXZ
     */
    MCAPI bool canUseOperatorBlocks() const;
    /**
     * @hash   -844949786
     * @symbol  ?causeFoodExhaustion\@Player\@\@QEAAXM\@Z
     */
    MCAPI void causeFoodExhaustion(float);
    /**
     * @hash   1496104757
     * @symbol  ?clearRespawnPosition\@Player\@\@QEAAXXZ
     */
    MCAPI void clearRespawnPosition();
    /**
     * @hash   -977827768
     * @symbol  ?eat\@Player\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void eat(class ItemStack const &);
    /**
     * @hash   -1443581751
     * @symbol  ?eat\@Player\@\@QEAAXHM\@Z
     */
    MCAPI void eat(int, float);
    /**
     * @hash   186593589
     * @symbol  ?equippedArmorItemCanBeMoved\@Player\@\@QEBA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool equippedArmorItemCanBeMoved(class ItemStack const &) const;
    /**
     * @hash   2092639314
     * @symbol  ?fireDimensionChangedEvent\@Player\@\@QEAAXV?$AutomaticID\@VDimension\@\@H\@\@0\@Z
     */
    MCAPI void fireDimensionChangedEvent(class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    /**
     * @hash   1803510284
     * @symbol  ?forceAllowEating\@Player\@\@QEBA_NXZ
     */
    MCAPI bool forceAllowEating() const;
    /**
     * @symbol  ?getAbilities\@Player\@\@QEAAAEAVLayeredAbilities\@\@XZ
     */
    MCAPI class LayeredAbilities & getAbilities();
    /**
     * @symbol  ?getAbilities\@Player\@\@QEBAAEBVLayeredAbilities\@\@XZ
     */
    MCAPI class LayeredAbilities const & getAbilities() const;
    /**
     * @hash   -943975911
     * @symbol  ?getAgent\@Player\@\@QEBAPEAVAgent\@\@XZ
     */
    MCAPI class Agent * getAgent() const;
    /**
     * @hash   -181794174
     * @symbol  ?getAgentID\@Player\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getAgentID() const;
    /**
     * @hash   396748693
     * @symbol  ?getAgentIfAllowed\@Player\@\@QEBAPEAVAgent\@\@_NUActorUniqueID\@\@\@Z
     */
    MCAPI class Agent * getAgentIfAllowed(bool, struct ActorUniqueID) const;
    /**
     * @hash   530071986
     * @symbol  ?getBedPosition\@Player\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getBedPosition() const;
    /**
     * @hash   935034795
     * @symbol  ?getBlockedUsingDamagedShieldTimeStamp\@Player\@\@QEBA_JXZ
     */
    MCAPI __int64 getBlockedUsingDamagedShieldTimeStamp() const;
    /**
     * @hash   -1368134965
     * @symbol  ?getBlockedUsingShieldTimeStamp\@Player\@\@QEBA_JXZ
     */
    MCAPI __int64 getBlockedUsingShieldTimeStamp() const;
    /**
     * @hash   373331709
     * @symbol  ?getBlockingStartTimeStamp\@Player\@\@QEBA_JXZ
     */
    MCAPI __int64 getBlockingStartTimeStamp() const;
    /**
     * @hash   -1401992891
     * @symbol  ?getCapePos\@Player\@\@QEAA?AVVec3\@\@M\@Z
     */
    MCAPI class Vec3 getCapePos(float);
    /**
     * @hash   -1167644206
     * @symbol  ?getChunkRadius\@Player\@\@QEBAIXZ
     */
    MCAPI unsigned int getChunkRadius() const;
    /**
     * @hash   -2028561429
     * @symbol  ?getContainerManager\@Player\@\@QEAA?AV?$weak_ptr\@VIContainerManager\@\@\@std\@\@XZ
     */
    MCAPI class std::weak_ptr<class IContainerManager> getContainerManager();
    /**
     * @hash   1816515128
     * @symbol  ?getCurrentActiveShield\@Player\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getCurrentActiveShield() const;
    /**
     * @hash   -1024565805
     * @symbol  ?getDestroyProgress\@Player\@\@QEBAMAEBVBlock\@\@\@Z
     */
    MCAPI float getDestroyProgress(class Block const &) const;
    /**
     * @hash   39916357
     * @symbol  ?getDestroySpeed\@Player\@\@QEBAMAEBVBlock\@\@\@Z
     */
    MCAPI float getDestroySpeed(class Block const &) const;
    /**
     * @hash   -260613272
     * @symbol  ?getDirection\@Player\@\@QEBAHXZ
     */
    MCAPI int getDirection() const;
    /**
     * @hash   -591022680
     * @symbol  ?getEnchantmentSeed\@Player\@\@QEBAHXZ
     */
    MCAPI int getEnchantmentSeed() const;
    /**
     * @hash   2108200244
     * @symbol  ?getExpectedSpawnDimensionId\@Player\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getExpectedSpawnDimensionId() const;
    /**
     * @hash   2007782214
     * @symbol  ?getExpectedSpawnPosition\@Player\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getExpectedSpawnPosition() const;
    /**
     * @hash   -272676274
     * @symbol  ?getInteractText\@Player\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getInteractText() const;
    /**
     * @hash   -508304890
     * @symbol  ?getInventory\@Player\@\@QEAAAEAVContainer\@\@XZ
     */
    MCAPI class Container & getInventory();
    /**
     * @hash   743423832
     * @symbol  ?getItemInUse\@Player\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getItemInUse() const;
    /**
     * @hash   951064917
     * @symbol  ?getItemInteractText\@Player\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItem\@\@\@Z
     */
    MCAPI std::string getItemInteractText(class Item const &) const;
    /**
     * @hash   -1544546237
     * @symbol  ?getItemStackNetManager\@Player\@\@QEBAPEBVItemStackNetManagerBase\@\@XZ
     */
    MCAPI class ItemStackNetManagerBase const * getItemStackNetManager() const;
    /**
     * @hash   -1363603063
     * @symbol  ?getItemStackNetManager\@Player\@\@QEAAPEAVItemStackNetManagerBase\@\@XZ
     */
    MCAPI class ItemStackNetManagerBase * getItemStackNetManager();
    /**
     * @hash   -1443027402
     * @symbol  ?getLuck\@Player\@\@QEAAMXZ
     */
    MCAPI float getLuck();
    /**
     * @hash   -219636664
     * @symbol  ?getMapIndex\@Player\@\@QEAAHXZ
     */
    MCAPI int getMapIndex();
    /**
     * @hash   -1623594957
     * @symbol  ?getMoveInputHandler\@Player\@\@QEBAPEAVMoveInputHandler\@\@XZ
     */
    MCAPI class MoveInputHandler * getMoveInputHandler() const;
    /**
     * @hash   -1470438724
     * @symbol  ?getName\@Player\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   -2122949549
     * @symbol  ?getNewEnchantmentSeed\@Player\@\@QEAAXXZ
     */
    MCAPI void getNewEnchantmentSeed();
    /**
     * @hash   -893557938
     * @symbol  ?getPickupArea\@Player\@\@QEBA?AVAABB\@\@XZ
     */
    MCAPI class AABB getPickupArea() const;
    /**
     * @hash   1712182934
     * @symbol  ?getPlatform\@Player\@\@QEBA?AW4BuildPlatform\@\@XZ
     */
    MCAPI enum class BuildPlatform getPlatform() const;
    /**
     * @hash   889696172
     * @symbol  ?getPlatformOnlineId\@Player\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getPlatformOnlineId() const;
    /**
     * @hash   -197036572
     * @symbol  ?getPlayerGameType\@Player\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getPlayerGameType() const;
    /**
     * @hash   -788153672
     * @symbol  ?getPlayerIndex\@Player\@\@QEBAHXZ
     */
    MCAPI int getPlayerIndex() const;
    /**
     * @hash   -752155624
     * @symbol  ?getPlayerLevel\@Player\@\@QEBAHXZ
     */
    MCAPI int getPlayerLevel() const;
    /**
     * @hash   1258662242
     * @symbol  ?getPlayerPermissionLevel\@Player\@\@QEBA?AW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissionLevel() const;
    /**
     * @hash   -1583003554
     * @symbol  ?getPlayerSessionId\@Player\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getPlayerSessionId() const;
    /**
     * @hash   1302714759
     * @symbol  ?getPlayerUIItem\@Player\@\@QEAAAEBVItemStack\@\@W4PlayerUISlot\@\@\@Z
     */
    MCAPI class ItemStack const & getPlayerUIItem(enum class PlayerUISlot);
    /**
     * @hash   1533231594
     * @symbol  ?getRespawnAnchorPosition\@Player\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getRespawnAnchorPosition() const;
    /**
     * @hash   -104119482
     * @symbol  ?getSelectedItem\@Player\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const & getSelectedItem() const;
    /**
     * @hash   769672454
     * @symbol  ?getSelectedItemSlot\@Player\@\@QEBAHXZ
     */
    MCAPI int getSelectedItemSlot() const;
    /**
     * @hash   1768922144
     * @symbol  ?getSkin\@Player\@\@QEAAAEAVSerializedSkin\@\@XZ
     */
    MCAPI class SerializedSkin & getSkin();
    /**
     * @hash   1021902302
     * @symbol  ?getSkin\@Player\@\@QEBAAEBVSerializedSkin\@\@XZ
     */
    MCAPI class SerializedSkin const & getSkin() const;
    /**
     * @hash   -1601653178
     * @symbol  ?getSleepRotation\@Player\@\@QEBAMXZ
     */
    MCAPI float getSleepRotation() const;
    /**
     * @hash   -584856690
     * @symbol  ?getSpawnDimension\@Player\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getSpawnDimension() const;
    /**
     * @hash   2065869926
     * @symbol  ?getSpawnPosition\@Player\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getSpawnPosition() const;
    /**
     * @hash   1871309904
     * @symbol  ?getSupplies\@Player\@\@QEAAAEAVPlayerInventory\@\@XZ
     */
    MCAPI class PlayerInventory & getSupplies();
    /**
     * @hash   421669066
     * @symbol  ?getSupplies\@Player\@\@QEBAAEBVPlayerInventory\@\@XZ
     */
    MCAPI class PlayerInventory const & getSupplies() const;
    /**
     * @hash   -1057507482
     * @symbol  ?getTrackedBosses\@Player\@\@QEAAAEBV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ActorUniqueID> const & getTrackedBosses();
    /**
     * @hash   -1977262340
     * @symbol  ?getUnmappedPlayerGameType\@Player\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getUnmappedPlayerGameType() const;
    /**
     * @hash   -2035162326
     * @symbol  ?getUsedPotion\@Player\@\@QEAA_NXZ
     */
    MCAPI bool getUsedPotion();
    /**
     * @symbol  ?getXpEarnedAtCurrentLevel\@Player\@\@QEBAHXZ
     */
    MCAPI int getXpEarnedAtCurrentLevel() const;
    /**
     * @symbol  ?getXpNeededForLevelRange\@Player\@\@QEBAIHH\@Z
     */
    MCAPI unsigned int getXpNeededForLevelRange(int, int) const;
    /**
     * @hash   -331780330
     * @symbol  ?getXpNeededForNextLevel\@Player\@\@QEBAHXZ
     */
    MCAPI int getXpNeededForNextLevel() const;
    /**
     * @hash   -2100388916
     * @symbol  ?hasBedPosition\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasBedPosition() const;
    /**
     * @hash   1223956230
     * @symbol  ?hasOpenContainer\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasOpenContainer() const;
    /**
     * @hash   -119100569
     * @symbol  ?hasOpenContainerOfContainerType\@Player\@\@QEBA_NW4ContainerType\@\@\@Z
     */
    MCAPI bool hasOpenContainerOfContainerType(enum class ContainerType) const;
    /**
     * @hash   -1451641928
     * @symbol  ?hasOwnedChunkSource\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasOwnedChunkSource() const;
    /**
     * @hash   569057741
     * @symbol  ?hasResource\@Player\@\@QEAA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI bool hasResource(class ItemDescriptor const &);
    /**
     * @hash   -1476513340
     * @symbol  ?hasRespawnAnchorPosition\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasRespawnAnchorPosition() const;
    /**
     * @hash   -1981134742
     * @symbol  ?hasRespawnPosition\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasRespawnPosition() const;
    /**
     * @hash   291384142
     * @symbol  ?interact\@Player\@\@QEAA_NAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool interact(class Actor &, class Vec3 const &);
    /**
     * @hash   597008176
     * @symbol  ?is2DPositionRelevant\@Player\@\@QEAA_NV?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const &);
    /**
     * @hash   -1456421794
     * @symbol  ?isFlying\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isFlying() const;
    /**
     * @hash   -1362217736
     * @symbol  ?isForcedRespawn\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isForcedRespawn() const;
    /**
     * @hash   -2134098225
     * @symbol  ?isHiddenFrom\@Player\@\@QEBA_NAEAVMob\@\@\@Z
     */
    MCAPI bool isHiddenFrom(class Mob &) const;
    /**
     * @hash   -1227120934
     * @symbol  ?isHungry\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isHungry() const;
    /**
     * @hash   709492302
     * @symbol  ?isHurt\@Player\@\@QEAA_NXZ
     */
    MCAPI bool isHurt();
    /**
     * @hash   2016602670
     * @symbol  ?isInCreativeMode\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isInCreativeMode() const;
    /**
     * @hash   -511246658
     * @symbol  ?isInRaid\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isInRaid() const;
    /**
     * @hash   1999533580
     * @symbol  ?isRespawningFromTheEnd\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isRespawningFromTheEnd() const;
    /**
     * @hash   -868388834
     * @symbol  ?isSleepingLongEnough\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isSleepingLongEnough() const;
    /**
     * @hash   257098958
     * @symbol  ?isSpawned\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isSpawned() const;
    /**
     * @hash   -1223348232
     * @symbol  ?isUsingItem\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isUsingItem() const;
    /**
     * @hash   -584959596
     * @symbol  ?loadLastDeathLocation\@Player\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadLastDeathLocation(class CompoundTag const &);
    /**
     * @hash   1967280275
     * @symbol  ?passengerCheckMovementStats\@Player\@\@QEAAXXZ
     */
    MCAPI void passengerCheckMovementStats();
    /**
     * @hash   -1255637339
     * @symbol  ?recheckSpawnPosition\@Player\@\@QEAAXXZ
     */
    MCAPI void recheckSpawnPosition();
    /**
     * @hash   -1461248571
     * @symbol  ?releaseUsingItem\@Player\@\@QEAAXXZ
     */
    MCAPI void releaseUsingItem();
    /**
     * @hash   -1825299323
     * @symbol  ?resetPlayerLevel\@Player\@\@QEAAXXZ
     */
    MCAPI void resetPlayerLevel();
    /**
     * @symbol  ?resetPublisherInitialSpawn\@Player\@\@QEAAXXZ
     */
    MCAPI void resetPublisherInitialSpawn();
    /**
     * @hash   -1335793867
     * @symbol  ?resetToDefaultGameMode\@Player\@\@QEAAXXZ
     */
    MCAPI void resetToDefaultGameMode();
    /**
     * @symbol  ?sendSpawnExperienceOrbPacketToServer\@Player\@\@QEAAXAEBVVec3\@\@H\@Z
     */
    MCAPI void sendSpawnExperienceOrbPacketToServer(class Vec3 const &, int);
    /**
     * @hash   520098599
     * @symbol  ?setAgent\@Player\@\@QEAAXPEAVAgent\@\@\@Z
     */
    MCAPI void setAgent(class Agent *);
    /**
     * @hash   818816312
     * @symbol  ?setBedRespawnPosition\@Player\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setBedRespawnPosition(class BlockPos const &);
    /**
     * @hash   -1994624024
     * @symbol  ?setBlockRespawnUntilClientMessage\@Player\@\@QEAAX_N\@Z
     */
    MCAPI void setBlockRespawnUntilClientMessage(bool);
    /**
     * @hash   -1162888912
     * @symbol  ?setChunkRadius\@Player\@\@QEAAXI\@Z
     */
    MCAPI void setChunkRadius(unsigned int);
    /**
     * @hash   1229351527
     * @symbol  ?setContainerManager\@Player\@\@QEAAXV?$shared_ptr\@VIContainerManager\@\@\@std\@\@\@Z
     */
    MCAPI void setContainerManager(class std::shared_ptr<class IContainerManager>);
    /**
     * @hash   -58673128
     * @symbol  ?setCursorSelectedItem\@Player\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setCursorSelectedItem(class ItemStack const &);
    /**
     * @hash   1851451960
     * @symbol  ?setCursorSelectedItemGroup\@Player\@\@QEAAXAEBVItemGroup\@\@\@Z
     */
    MCAPI void setCursorSelectedItemGroup(class ItemGroup const &);
    /**
     * @hash   1078255798
     * @symbol  ?setEnchantmentSeed\@Player\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantmentSeed(int);
    /**
     * @hash   -2089040120
     * @symbol  ?setHasDied\@Player\@\@QEAAX_N\@Z
     */
    MCAPI void setHasDied(bool);
    /**
     * @hash   -483261488
     * @symbol  ?setHasSeenCredits\@Player\@\@QEAAX_N\@Z
     */
    MCAPI void setHasSeenCredits(bool);
    /**
     * @symbol  ?setLastHurtBy\@Player\@\@QEAAXW4ActorType\@\@\@Z
     */
    MCAPI void setLastHurtBy(enum class ActorType);
    /**
     * @hash   -1263504040
     * @symbol  ?setMapIndex\@Player\@\@QEAAXH\@Z
     */
    MCAPI void setMapIndex(int);
    /**
     * @hash   78768674
     * @symbol  ?setPermissions\@Player\@\@QEAAXW4CommandPermissionLevel\@\@\@Z
     */
    MCAPI void setPermissions(enum class CommandPermissionLevel);
    /**
     * @hash   -877856786
     * @symbol  ?setPlatformOnlineId\@Player\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setPlatformOnlineId(std::string const &);
    /**
     * @hash   -423005386
     * @symbol  ?setPlayerIndex\@Player\@\@QEAAXH\@Z
     */
    MCAPI void setPlayerIndex(int);
    /**
     * @hash   -1424949931
     * @symbol  ?setPlayerUIItem\@Player\@\@QEAAXW4PlayerUISlot\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void setPlayerUIItem(enum class PlayerUISlot, class ItemStack const &);
    /**
     * @hash   -1658085199
     * @symbol  ?setRespawnPosition\@Player\@\@QEAAXAEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setRespawnPosition(class BlockPos const &, class AutomaticID<class Dimension, int>);
    /**
     * @hash   2127395059
     * @symbol  ?setRespawnPositionCandidate\@Player\@\@QEAAXXZ
     */
    MCAPI void setRespawnPositionCandidate();
    /**
     * @hash   -595620910
     * @symbol  ?setRespawnReady\@Player\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setRespawnReady(class Vec3 const &);
    /**
     * @hash   -1470575656
     * @symbol  ?setSelectedItem\@Player\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setSelectedItem(class ItemStack const &);
    /**
     * @hash   778418227
     * @symbol  ?setSelectedSlot\@Player\@\@QEAAAEBVItemStack\@\@H\@Z
     */
    MCAPI class ItemStack const & setSelectedSlot(int);
    /**
     * @hash   -630596479
     * @symbol  ?setSpawnBlockRespawnPosition\@Player\@\@QEAAXAEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const &, class AutomaticID<class Dimension, int>);
    /**
     * @hash   921661994
     * @symbol  ?setUsedPotion\@Player\@\@QEAAX_N\@Z
     */
    MCAPI void setUsedPotion(bool);
    /**
     * @hash   -40494654
     * @symbol  ?shouldShowCredits\@Player\@\@QEBA_NXZ
     */
    MCAPI bool shouldShowCredits() const;
    /**
     * @hash   1322279680
     * @symbol  ?startCooldown\@Player\@\@QEAAXAEBVHashedString\@\@H_N\@Z
     */
    MCAPI void startCooldown(class HashedString const &, int, bool);
    /**
     * @hash   -2099019643
     * @symbol  ?startGliding\@Player\@\@QEAAXXZ
     */
    MCAPI void startGliding();
    /**
     * @hash   894087757
     * @symbol  ?startUsingItem\@Player\@\@QEAAXAEBVItemStack\@\@H\@Z
     */
    MCAPI void startUsingItem(class ItemStack const &, int);
    /**
     * @hash   1494082371
     * @symbol  ?stopGliding\@Player\@\@QEAAXXZ
     */
    MCAPI void stopGliding();
    /**
     * @hash   924617651
     * @symbol  ?stopUsingItem\@Player\@\@QEAAXXZ
     */
    MCAPI void stopUsingItem();
    /**
     * @hash   1459976373
     * @symbol  ?take\@Player\@\@QEAA_NAEAVActor\@\@HH\@Z
     */
    MCAPI bool take(class Actor &, int, int);
    /**
     * @hash   1926007651
     * @symbol  ?trySendPlayerTeleported\@Player\@\@QEAAXXZ
     */
    MCAPI void trySendPlayerTeleported();
    /**
     * @hash   108784451
     * @symbol  ?updateBlockSourceTick\@Player\@\@QEAAXXZ
     */
    MCAPI void updateBlockSourceTick();
    /**
     * @hash   357986611
     * @symbol  ?updateInventoryTransactions\@Player\@\@QEAAXXZ
     */
    MCAPI void updateInventoryTransactions();
    /**
     * @hash   958666389
     * @symbol  ?updateSkin\@Player\@\@QEAAXAEBVSerializedSkin\@\@H\@Z
     */
    MCAPI void updateSkin(class SerializedSkin const &, int);
    /**
     * @hash   -1944131659
     * @symbol  ?updateSpawnChunkView\@Player\@\@QEAAXXZ
     */
    MCAPI void updateSpawnChunkView();
    /**
     * @hash   985898195
     * @symbol  ?updateTrackedBosses\@Player\@\@QEAAXXZ
     */
    MCAPI void updateTrackedBosses();
    /**
     * @hash   1606480501
     * @symbol  ?useSelectedItem\@Player\@\@QEAAXW4ItemUseMethod\@\@_N\@Z
     */
    MCAPI void useSelectedItem(enum class ItemUseMethod, bool);
    /**
     * @hash   -415434241
     * @symbol  ?DEFAULT_BB_HEIGHT\@Player\@\@2MB
     */
    MCAPI static float const DEFAULT_BB_HEIGHT;
    /**
     * @hash   1560123325
     * @symbol  ?DEFAULT_BB_WIDTH\@Player\@\@2MB
     */
    MCAPI static float const DEFAULT_BB_WIDTH;
    /**
     * @hash   -1858975785
     * @symbol  ?DEFAULT_FLY_SPEED\@Player\@\@2MB
     */
    MCAPI static float const DEFAULT_FLY_SPEED;
    /**
     * @hash   1230334929
     * @symbol  ?DEFAULT_PLAYER_HEIGHT_OFFSET\@Player\@\@2MB
     */
    MCAPI static float const DEFAULT_PLAYER_HEIGHT_OFFSET;
    /**
     * @hash   -207771403
     * @symbol  ?DEFAULT_WALK_SPEED\@Player\@\@2MB
     */
    MCAPI static float const DEFAULT_WALK_SPEED;
    /**
     * @hash   -162427161
     * @symbol  ?DISTANCE_TO_TRANSFORM_EVENT\@Player\@\@2MB
     */
    MCAPI static float const DISTANCE_TO_TRANSFORM_EVENT;
    /**
     * @hash   -1291151997
     * @symbol  ?DISTANCE_TO_TRAVELLED_EVENT\@Player\@\@2MB
     */
    MCAPI static float const DISTANCE_TO_TRAVELLED_EVENT;
    /**
     * @hash   -729965101
     * @symbol  ?EXHAUSTION\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const EXHAUSTION;
    /**
     * @hash   -673278501
     * @symbol  ?EXPERIENCE\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const EXPERIENCE;
    /**
     * @hash   -1192247115
     * @symbol  ?GLIDE_STOP_DELAY\@Player\@\@2HB
     */
    MCAPI static int const GLIDE_STOP_DELAY;
    /**
     * @hash   -2086107251
     * @symbol  ?HUNGER\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const HUNGER;
    /**
     * @hash   92786603
     * @symbol  ?ITEM_USE_INTERVAL_COUNT\@Player\@\@2HB
     */
    MCAPI static int const ITEM_USE_INTERVAL_COUNT;
    /**
     * @hash   504141289
     * @symbol  ?ITEM_USE_INTERVAL_DURATION\@Player\@\@2HB
     */
    MCAPI static int const ITEM_USE_INTERVAL_DURATION;
    /**
     * @hash   921972793
     * @symbol  ?LEVEL\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const LEVEL;
    /**
     * @hash   -2027362845
     * @symbol  ?MAX_ITEM_USE_DURATION\@Player\@\@2HB
     */
    MCAPI static int const MAX_ITEM_USE_DURATION;
    /**
     * @hash   -1456265929
     * @symbol  ?PLAYER_ALIVE_HEIGHT\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_ALIVE_HEIGHT;
    /**
     * @hash   1249483453
     * @symbol  ?PLAYER_ALIVE_WIDTH\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_ALIVE_WIDTH;
    /**
     * @hash   -1954287231
     * @symbol  ?PLAYER_DEAD_HEIGHT\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_DEAD_HEIGHT;
    /**
     * @hash   -1676068285
     * @symbol  ?PLAYER_DEAD_WIDTH\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_DEAD_WIDTH;
    /**
     * @hash   1713463927
     * @symbol  ?PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS\@Player\@\@2HB
     */
    MCAPI static int const PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS;
    /**
     * @hash   -1235152087
     * @symbol  ?PLAYER_DOWN_SWIM_SPEED\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_DOWN_SWIM_SPEED;
    /**
     * @hash   1430130357
     * @symbol  ?PLAYER_GLIDING_CAMERA_OFFSET\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_GLIDING_CAMERA_OFFSET;
    /**
     * @hash   -235257683
     * @symbol  ?PLAYER_ITEM_USE_DEFAULT_SPEED_MODIFIER\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_ITEM_USE_DEFAULT_SPEED_MODIFIER;
    /**
     * @hash   1089027387
     * @symbol  ?PLAYER_SLEEPING_CAMERA_OFFSET\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SLEEPING_CAMERA_OFFSET;
    /**
     * @hash   1239280425
     * @symbol  ?PLAYER_SLEEPING_HEIGHT\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SLEEPING_HEIGHT;
    /**
     * @hash   -1018853205
     * @symbol  ?PLAYER_SLEEPING_WIDTH\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SLEEPING_WIDTH;
    /**
     * @hash   606986399
     * @symbol  ?PLAYER_SNEAK_OFFSET\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SNEAK_OFFSET;
    /**
     * @hash   931288695
     * @symbol  ?PLAYER_SWIMMING_CAMERA_OFFSET\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SWIMMING_CAMERA_OFFSET;
    /**
     * @hash   -836505387
     * @symbol  ?PLAYER_SWIM_BREACH_ANGLE\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SWIM_BREACH_ANGLE;
    /**
     * @hash   -222106473
     * @symbol  ?PLAYER_SWIM_ENTER_THRESHOLD\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SWIM_ENTER_THRESHOLD;
    /**
     * @hash   660025327
     * @symbol  ?PLAYER_SWIM_FLY_MULTI\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SWIM_FLY_MULTI;
    /**
     * @hash   621349957
     * @symbol  ?PLAYER_UP_SWIM_SPEED\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_UP_SWIM_SPEED;
    /**
     * @hash   -1719191549
     * @symbol  ?SATURATION\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const SATURATION;
    /**
     * @hash   -1291509623
     * @symbol  ?SPAWN_CHUNK_LARGE_JUMP\@Player\@\@2IB
     */
    MCAPI static unsigned int const SPAWN_CHUNK_LARGE_JUMP;
    /**
     * @hash   -312557051
     * @symbol  ?SPAWN_CHUNK_RADIUS\@Player\@\@2IB
     */
    MCAPI static unsigned int const SPAWN_CHUNK_RADIUS;
    /**
     * @hash   -505971404
     * @symbol  ?_aiStep\@Player\@\@SAXAEAUIPlayerMovementProxy\@\@\@Z
     */
    MCAPI static void _aiStep(struct IPlayerMovementProxy &);
    /**
     * @hash   1865941837
     * @symbol  ?_travel\@Player\@\@SAXAEAUIPlayerMovementProxy\@\@MMM\@Z
     */
    MCAPI static void _travel(struct IPlayerMovementProxy &, float, float, float);
    /**
     * @hash   -1320833779
     * @symbol  ?canJump\@Player\@\@SA_NAEAUIPlayerMovementProxy\@\@\@Z
     */
    MCAPI static bool canJump(struct IPlayerMovementProxy &);
    /**
     * @hash   1162237129
     * @symbol  ?checkAndFixSpawnPosition\@Player\@\@SA_NAEAVVec3\@\@V?$vector\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@\@std\@\@\@std\@\@VAABB\@\@_N33333F\@Z
     */
    MCAPI static bool checkAndFixSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, class AABB, bool, bool, bool, bool, bool, bool, short);
    /**
     * @hash   -512739384
     * @symbol  ?checkNeedAutoJump\@Player\@\@SA_NPEAUIPlayerMovementProxy\@\@MM\@Z
     */
    MCAPI static bool checkNeedAutoJump(struct IPlayerMovementProxy *, float, float);
    /**
     * @hash   1596382696
     * @symbol  ?goDownInWater\@Player\@\@SAXAEAUIActorMovementProxy\@\@\@Z
     */
    MCAPI static void goDownInWater(struct IActorMovementProxy &);
    /**
     * @hash   1141511842
     * @symbol  ?handleJumpEffects\@Player\@\@SAXAEAUIPlayerMovementProxy\@\@\@Z
     */
    MCAPI static void handleJumpEffects(struct IPlayerMovementProxy &);
    /**
     * @hash   -209499
     * @symbol  ?isDangerousVolume\@Player\@\@SA_NAEAVBlockSource\@\@AEBVAABB\@\@_N\@Z
     */
    MCAPI static bool isDangerousVolume(class BlockSource &, class AABB const &, bool);
    /**
     * @hash   -110938229
     * @symbol  ?tryGetFromComponent\@Player\@\@SAPEAV1\@AEBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@AEAVActorOwnerComponent\@\@_N\@Z
     */
    MCAPI static class Player * tryGetFromComponent(class FlagComponent<struct PlayerComponentFlag> const &, class ActorOwnerComponent &, bool);
    /**
     * @hash   -1487537008
     * @symbol  ?tryGetFromEntity\@Player\@\@SAPEAV1\@V?$StackRefResultT\@UEntityRefTraits\@\@\@\@_N\@Z
     */
    MCAPI static class Player * tryGetFromEntity(class StackRefResultT<struct EntityRefTraits>, bool);
    /**
     * @hash   5913995
     * @symbol  ?tryGetFromEntity\@Player\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class Player * tryGetFromEntity(class EntityContext &, bool);

//protected:
    /**
     * @hash   -651463034
     * @symbol  ?_checkAndFixSpawnPosition\@Player\@\@IEBA_NAEAVVec3\@\@V?$vector\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@\@std\@\@\@std\@\@_N2222\@Z
     */
    MCAPI bool _checkAndFixSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, bool, bool, bool, bool, bool) const;
    /**
     * @hash   -622324684
     * @symbol  ?_chooseSpawnArea\@Player\@\@IEAAXXZ
     */
    MCAPI void _chooseSpawnArea();
    /**
     * @hash   1540242466
     * @symbol  ?_chooseSpawnPositionWithinArea\@Player\@\@IEAA_NXZ
     */
    MCAPI bool _chooseSpawnPositionWithinArea();
    /**
     * @hash   1624630332
     * @symbol  ?_registerPlayerAttributes\@Player\@\@IEAAXXZ
     */
    MCAPI void _registerPlayerAttributes();
    /**
     * @hash   531091679
     * @symbol  ?_setPreDimensionTransferSpawnPosition\@Player\@\@IEAAXVVec3\@\@\@Z
     */
    MCAPI void _setPreDimensionTransferSpawnPosition(class Vec3);
    /**
     * @hash   -32021060
     * @symbol  ?_updateInteraction\@Player\@\@IEAAXXZ
     */
    MCAPI void _updateInteraction();
    /**
     * @hash   2055427022
     * @symbol  ?_validateSpawnPositionAvailability\@Player\@\@IEBA_NAEBVVec3\@\@PEAVBlockSource\@\@QEBV2\@\@Z
     */
    MCAPI bool _validateSpawnPositionAvailability(class Vec3 const &, class BlockSource *, class Vec3 const *const) const;
    /**
     * @hash   1955063616
     * @symbol  ?checkBed\@Player\@\@IEAA_NPEAVBlockSource\@\@QEBVVec3\@\@\@Z
     */
    MCAPI bool checkBed(class BlockSource *, class Vec3 const *const);
    /**
     * @hash   235366618
     * @symbol  ?checkSpawnBlock\@Player\@\@IEBA_NAEBVBlockSource\@\@\@Z
     */
    MCAPI bool checkSpawnBlock(class BlockSource const &) const;
    /**
     * @hash   2086407908
     * @symbol  ?_isDangerousBlock\@Player\@\@KA_NAEBVBlock\@\@_N\@Z
     */
    MCAPI static bool _isDangerousBlock(class Block const &, bool);

//private:
    /**
     * @hash   -46467981
     * @symbol  ?_addLevels\@Player\@\@AEAAXH\@Z
     */
    MCAPI void _addLevels(int);
    /**
     * @hash   -1185555172
     * @symbol  ?_blockUsingShield\@Player\@\@AEAA_NAEBVActorDamageSource\@\@M\@Z
     */
    MCAPI bool _blockUsingShield(class ActorDamageSource const &, float);
    /**
     * @hash   -1069517688
     * @symbol  ?_ensureSafeSpawnPosition\@Player\@\@AEAAXAEAVVec3\@\@\@Z
     */
    MCAPI void _ensureSafeSpawnPosition(class Vec3 &);
    /**
     * @hash   -1139874521
     * @symbol  ?_findFallbackSpawnPosition\@Player\@\@AEAA_NAEAVVec3\@\@V?$vector\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@\@std\@\@\@std\@\@I\@Z
     */
    MCAPI bool _findFallbackSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, unsigned int);
    /**
     * @hash   -2132816924
     * @symbol  ?_handleCarriedItemInteractText\@Player\@\@AEAAXXZ
     */
    MCAPI void _handleCarriedItemInteractText();
    /**
     * @hash   1148676303
     * @symbol  ?_isChunkSourceLoaded\@Player\@\@AEBA_NAEBVVec3\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI bool _isChunkSourceLoaded(class Vec3 const &, class BlockSource const &) const;
    /**
     * @hash   -1812849949
     * @symbol  ?_registerElytraLoopSound\@Player\@\@AEAAXXZ
     */
    MCAPI void _registerElytraLoopSound();
    /**
     * @hash   -690377246
     * @symbol  ?_sendShieldUpdatePacket\@Player\@\@AEAAXAEBVShieldItem\@\@AEBVItemStack\@\@1W4ContainerID\@\@H\@Z
     */
    MCAPI void _sendShieldUpdatePacket(class ShieldItem const &, class ItemStack const &, class ItemStack const &, enum class ContainerID, int);
    /**
     * @symbol  ?_updateFroglightCountAndTestForAchievement\@Player\@\@AEAA_NAEBVItemStack\@\@0\@Z
     */
    MCAPI bool _updateFroglightCountAndTestForAchievement(class ItemStack const &, class ItemStack const &);

protected:

private:

};