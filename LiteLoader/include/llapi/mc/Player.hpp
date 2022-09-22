/**
 * @file  Player.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class ServerPlayer;
class Player;
class NetworkIdentifier;
class Certificate;
class Container;
class CompoundTag;
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

    LIAPI int clearItem(string typeName);
    LIAPI bool runcmd(const string& cmd);
    LIAPI bool transferServer(const string& address, unsigned short port);
    LIAPI bool setSidebar(const std::string& title, const std::vector<std::pair<std::string, int>>& data, ObjectiveSortOrder sortOrder);
    LIAPI bool removeSidebar();
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
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

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYER
public:
    class Player& operator=(class Player const &) = delete;
    Player(class Player const &) = delete;
    Player() = delete;
#endif

public:
    /**
     * @hash   -1586025204
     * @vftbl  8
     * @symbol ?reloadHardcoded@Player@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   1613898895
     * @vftbl  10
     * @symbol ?initializeComponents@Player@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -2130686140
     * @vftbl  12
     * @symbol ?_serverInitItemStackIds@Player@@MEAAXXZ
     */
    virtual void _serverInitItemStackIds();
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Player();
    /**
     * @hash   506629852
     * @vftbl  15
     * @symbol ?resetUserPos@Player@@UEAAX_N@Z
     */
    virtual void resetUserPos(bool);
    /**
     * @hash   936227866
     * @vftbl  17
     * @symbol ?remove@Player@@UEAAXXZ
     */
    virtual void remove();
    /**
     * @hash   1033059034
     * @vftbl  24
     * @symbol ?getAttachPos@Player@@UEBA?AVVec3@@W4ActorLocation@@M@Z
     */
    virtual class Vec3 getAttachPos(enum ActorLocation, float) const;
    /**
     * @hash   881073835
     * @vftbl  27
     * @symbol ?move@Player@@UEAAXAEBVVec3@@@Z
     */
    virtual void move(class Vec3 const &);
    /**
     * @hash   81382892
     * @vftbl  28
     * @symbol ?move@Player@@UEBAXAEAUIActorMovementProxy@@AEBVVec3@@@Z
     */
    virtual void move(struct IActorMovementProxy &, class Vec3 const &) const;
    /**
     * @vftbl  35
     * @symbol ?getInterpolatedRidingOffset@Player@@UEBA?AVVec3@@M@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /**
     * @hash   1536262474
     * @vftbl  39
     * @symbol ?isFireImmune@Player@@UEBA_NXZ
     */
    virtual bool isFireImmune() const;
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   1481964606
     * @vftbl  43
     * @symbol ?teleportTo@Player@@UEAAXAEBVVec3@@_NHH1@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /**
     * @hash   -593922612
     * @vftbl  47
     * @symbol ?tryCreateAddActorPacket@Player@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @hash   624761962
     * @vftbl  48
     * @symbol ?normalTick@Player@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   723765373
     * @vftbl  50
     * @symbol ?passengerTick@Player@@UEAAXXZ
     */
    virtual void passengerTick();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @hash   -564829518
     * @vftbl  64
     * @symbol ?getFormattedNameTag@Player@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getFormattedNameTag() const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   -1787354077
     * @vftbl  75
     * @symbol ?setBlockMovementSlowdownMultiplier@Player@@UEAAXAEBVBlockLegacy@@AEBVVec3@@@Z
     */
    virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    /**
     * @hash   -1390992853
     * @vftbl  77
     * @symbol ?getCameraOffset@Player@@UEBAMXZ
     */
    virtual float getCameraOffset() const;
    /**
     * @hash   1167684021
     * @vftbl  79
     * @symbol ?getShadowRadius@Player@@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @hash   -1148216713
     * @vftbl  91
     * @symbol ?isImmobile@Player@@UEBA_NXZ
     */
    virtual bool isImmobile() const;
    /**
     * @hash   525826316
     * @vftbl  93
     * @symbol ?isSilentObserver@Player@@UEBA_NXZ
     */
    virtual bool isSilentObserver() const;
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @hash   -1229332484
     * @vftbl  96
     * @symbol ?isSleeping@Player@@UEBA_NXZ
     */
    virtual bool isSleeping() const;
    /**
     * @hash   1816383305
     * @vftbl  97
     * @symbol ?setSleeping@Player@@UEAAX_N@Z
     */
    virtual void setSleeping(bool);
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @hash   -452637562
     * @vftbl  100
     * @symbol ?isBlocking@Player@@UEBA_NXZ
     */
    virtual bool isBlocking() const;
    /**
     * @hash   -1162301538
     * @vftbl  101
     * @symbol ?isDamageBlocked@Player@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @hash   -1199309978
     * @vftbl  115
     * @symbol ?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z
     */
    virtual bool attack(class Actor &, enum ActorDamageCause const &);
    /**
     * @hash   -732482319
     * @vftbl  128
     * @symbol ?isJumping@Player@@UEBA_NXZ
     */
    virtual bool isJumping() const;
    /**
     * @hash   -786883857
     * @vftbl  134
     * @symbol ?isInvulnerableTo@Player@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @hash   1576109307
     * @vftbl  139
     * @symbol ?onBounceStarted@Player@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /**
     * @hash   1258394043
     * @vftbl  140
     * @symbol ?feed@Player@@UEAAXH@Z
     */
    virtual void feed(int);
    /**
     * @hash   -2057445115
     * @vftbl  141
     * @symbol ?handleEntityEvent@Player@@UEAAXW4ActorEvent@@H@Z
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @hash   671082715
     * @vftbl  143
     * @symbol ?getActorRendererId@Player@@UEBAAEBVHashedString@@XZ
     */
    virtual class HashedString const & getActorRendererId() const;
    /**
     * @hash   122767525
     * @vftbl  151
     * @symbol ?awardKillScore@Player@@UEAAXAEAVActor@@H@Z
     */
    virtual void awardKillScore(class Actor &, int);
    /**
     * @hash   1515549466
     * @vftbl  152
     * @symbol ?setArmor@Player@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
     */
    virtual void setArmor(enum ArmorSlot, class ItemStack const &);
    /**
     * @hash   1037910419
     * @vftbl  160
     * @symbol ?setCarriedItem@Player@@UEAAXAEBVItemStack@@@Z
     */
    virtual void setCarriedItem(class ItemStack const &);
    /**
     * @hash   565641206
     * @vftbl  161
     * @symbol ?getCarriedItem@Player@@UEBAAEBVItemStack@@XZ
     */
    virtual class ItemStack const & getCarriedItem() const;
    /**
     * @hash   280140932
     * @vftbl  162
     * @symbol ?setOffhandSlot@Player@@UEAAXAEBVItemStack@@@Z
     */
    virtual void setOffhandSlot(class ItemStack const &);
    /**
     * @hash   2033048283
     * @vftbl  163
     * @symbol ?getEquippedTotem@Player@@UEBAAEBVItemStack@@XZ
     */
    virtual class ItemStack const & getEquippedTotem() const;
    /**
     * @hash   1516402557
     * @vftbl  164
     * @symbol ?consumeTotem@Player@@UEAA_NXZ
     */
    virtual bool consumeTotem();
    /**
     * @hash   161072516
     * @vftbl  169
     * @symbol ?getEntityTypeId@Player@@UEBA?AW4ActorType@@XZ
     */
    virtual enum ActorType getEntityTypeId() const;
    /**
     * @hash   377236078
     * @vftbl  173
     * @symbol ?canFreeze@Player@@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @hash   729419047
     * @vftbl  177
     * @symbol ?getPortalCooldown@Player@@UEBAHXZ
     */
    virtual int getPortalCooldown() const;
    /**
     * @hash   310148094
     * @vftbl  178
     * @symbol ?getPortalWaitTime@Player@@UEBAHXZ
     */
    virtual int getPortalWaitTime() const;
    /**
     * @hash   536607210
     * @vftbl  180
     * @symbol ?canChangeDimensionsUsingPortal@Player@@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   -1578361351
     * @vftbl  190
     * @symbol ?onSynchedDataUpdate@Player@@UEAAXH@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @hash   -905197883
     * @vftbl  191
     * @symbol ?canAddPassenger@Player@@UEBA_NAEAVActor@@@Z
     */
    virtual bool canAddPassenger(class Actor &) const;
    /**
     * @hash   1443956620
     * @vftbl  193
     * @symbol ?canBePulledIntoVehicle@Player@@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @hash   -271961666
     * @vftbl  197
     * @symbol ?sendMotionPacketIfNeeded@Player@@UEAAXXZ
     */
    virtual void sendMotionPacketIfNeeded();
    /**
     * @hash   1793045493
     * @vftbl  200
     * @symbol ?startSwimming@Player@@UEAAXXZ
     */
    virtual void startSwimming();
    /**
     * @hash   -26290219
     * @vftbl  201
     * @symbol ?stopSwimming@Player@@UEAAXXZ
     */
    virtual void stopSwimming();
    /**
     * @hash   1551790741
     * @vftbl  203
     * @symbol ?getCommandPermissionLevel@Player@@UEBA?AW4CommandPermissionLevel@@XZ
     */
    virtual enum CommandPermissionLevel getCommandPermissionLevel() const;
    /**
     * @hash   -855482409
     * @vftbl  216
     * @symbol ?canObstructSpawningAndBlockPlacement@Player@@UEBA_NXZ
     */
    virtual bool canObstructSpawningAndBlockPlacement() const;
    /**
     * @hash   1420315094
     * @vftbl  217
     * @symbol ?getAnimationComponent@Player@@UEAAAEAVAnimationComponent@@XZ
     */
    virtual class AnimationComponent & getAnimationComponent();
    /**
     * @hash   945869997
     * @vftbl  220
     * @symbol ?useItem@Player@@UEAAXAEAVItemStackBase@@W4ItemUseMethod@@_N@Z
     */
    virtual void useItem(class ItemStackBase &, enum ItemUseMethod, bool);
    /**
     * @vftbl  221
     * @symbol __unk_vfn_221
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @hash   1800664993
     * @vftbl  224
     * @symbol ?getMapDecorationRotation@Player@@UEBAMXZ
     */
    virtual float getMapDecorationRotation() const;
    /**
     * @hash   -1842021286
     * @vftbl  230
     * @symbol ?isWorldBuilder@Player@@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @hash   1156026480
     * @vftbl  231
     * @symbol ?isCreative@Player@@UEBA_NXZ
     */
    virtual bool isCreative() const;
    /**
     * @hash   -564396003
     * @vftbl  232
     * @symbol ?isAdventure@Player@@UEBA_NXZ
     */
    virtual bool isAdventure() const;
    /**
     * @hash   -341224737
     * @vftbl  233
     * @symbol ?isSurvival@Player@@UEBA_NXZ
     */
    virtual bool isSurvival() const;
    /**
     * @hash   1922808956
     * @vftbl  234
     * @symbol ?isSpectator@Player@@UEBA_NXZ
     */
    virtual bool isSpectator() const;
    /**
     * @hash   1228152046
     * @vftbl  236
     * @symbol ?add@Player@@UEAA_NAEAVItemStack@@@Z
     */
    virtual bool add(class ItemStack &);
    /**
     * @hash   -772164817
     * @vftbl  237
     * @symbol ?drop@Player@@UEAA_NAEBVItemStack@@_N@Z
     */
    virtual bool drop(class ItemStack const &, bool);
    /**
     * @hash   1605744969
     * @vftbl  241
     * @symbol ?setSize@Player@@UEAAXMM@Z
     */
    virtual void setSize(float, float);
    /**
     * @hash   -1216737102
     * @vftbl  245
     * @symbol ?startSpinAttack@Player@@UEAAXXZ
     */
    virtual void startSpinAttack();
    /**
     * @hash   740809874
     * @vftbl  246
     * @symbol ?stopSpinAttack@Player@@UEAAXXZ
     */
    virtual void stopSpinAttack();
    /**
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @hash   -498564172
     * @vftbl  253
     * @symbol ?die@Player@@UEAAXAEBVActorDamageSource@@@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @hash   858330609
     * @vftbl  254
     * @symbol ?shouldDropDeathLoot@Player@@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @hash   -679901196
     * @vftbl  262
     * @symbol ?getLastDeathPos@Player@@UEBA?AV?$optional@VBlockPos@@@std@@XZ
     */
    virtual class std::optional<class BlockPos> getLastDeathPos() const;
    /**
     * @hash   961359152
     * @vftbl  263
     * @symbol ?getLastDeathDimension@Player@@UEBA?AV?$optional@V?$AutomaticID@VDimension@@H@@@std@@XZ
     */
    virtual class std::optional<class AutomaticID<class Dimension, int>> getLastDeathDimension() const;
    /**
     * @hash   -917595996
     * @vftbl  264
     * @symbol ?hasDiedBefore@Player@@UEBA_NXZ
     */
    virtual bool hasDiedBefore() const;
    /**
     * @hash   -1810461251
     * @vftbl  266
     * @symbol ?_shouldProvideFeedbackOnHandContainerItemSet@Player@@MEBA_NW4HandSlot@@AEBVItemStack@@@Z
     */
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(enum HandSlot, class ItemStack const &) const;
    /**
     * @hash   1464738765
     * @vftbl  267
     * @symbol ?_shouldProvideFeedbackOnArmorSet@Player@@MEBA_NW4ArmorSlot@@AEBVItemStack@@@Z
     */
    virtual bool _shouldProvideFeedbackOnArmorSet(enum ArmorSlot, class ItemStack const &) const;
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   -1402520209
     * @vftbl  271
     * @symbol ?_hurt@Player@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -873436657
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@Player@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -287829634
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@Player@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   -855528956
     * @vftbl  284
     * @symbol ?_onSizeUpdated@Player@@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -243192194
     * @vftbl  292
     * @symbol ?getSpeed@Player@@UEBAMXZ
     */
    virtual float getSpeed() const;
    /**
     * @hash   -911397881
     * @vftbl  293
     * @symbol ?setSpeed@Player@@UEAAXM@Z
     */
    virtual void setSpeed(float);
    /**
     * @hash   720316402
     * @vftbl  297
     * @symbol ?travel@Player@@UEAAXMMM@Z
     */
    virtual void travel(float, float, float);
    /**
     * @hash   -255692070
     * @vftbl  298
     * @symbol ?travel@Player@@UEBAXAEAUIMobMovementProxy@@MMM@Z
     */
    virtual void travel(struct IMobMovementProxy &, float, float, float) const;
    /**
     * @hash   209599562
     * @vftbl  300
     * @symbol ?aiStep@Player@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @hash   -2049024644
     * @vftbl  301
     * @symbol ?aiStep@Player@@UEBAXAEAUIMobMovementProxy@@@Z
     */
    virtual void aiStep(struct IMobMovementProxy &) const;
    /**
     * @hash   1981212572
     * @vftbl  308
     * @symbol ?getItemUseDuration@Player@@UEBAHXZ
     */
    virtual int getItemUseDuration() const;
    /**
     * @hash   -19848631
     * @vftbl  309
     * @symbol ?getItemUseStartupProgress@Player@@UEBAMXZ
     */
    virtual float getItemUseStartupProgress() const;
    /**
     * @hash   949500029
     * @vftbl  310
     * @symbol ?getItemUseIntervalProgress@Player@@UEBAMXZ
     */
    virtual float getItemUseIntervalProgress() const;
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @hash   1549222354
     * @vftbl  333
     * @symbol ?getAllHand@Player@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack const *> getAllHand() const;
    /**
     * @hash   2058387131
     * @vftbl  334
     * @symbol ?getAllEquipment@Player@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack const *> getAllEquipment() const;
    /**
     * @hash   1229358033
     * @vftbl  336
     * @symbol ?dropEquipmentOnDeath@Player@@UEAAXAEBVActorDamageSource@@H@Z
     */
    virtual void dropEquipmentOnDeath(class ActorDamageSource const &, int);
    /**
     * @hash   290404988
     * @vftbl  337
     * @symbol ?dropEquipmentOnDeath@Player@@UEAAXXZ
     */
    virtual void dropEquipmentOnDeath();
    /**
     * @hash   992662667
     * @vftbl  338
     * @symbol ?clearVanishEnchantedItemsOnDeath@Player@@UEAAXXZ
     */
    virtual void clearVanishEnchantedItemsOnDeath();
    /**
     * @hash   -974807598
     * @vftbl  339
     * @symbol ?sendInventory@Player@@UEAAX_N@Z
     */
    virtual void sendInventory(bool);
    /**
     * @hash   -1101178885
     * @vftbl  350
     * @symbol ?canExistWhenDisallowMob@Player@@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const;
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @hash   323054446
     * @vftbl  356
     * @symbol ?initBodyControl@Player@@EEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @hash   1523964037
     * @vftbl  357
     * @symbol ?jumpFromGround@Player@@UEAAXXZ
     */
    virtual void jumpFromGround();
    /**
     * @hash   -1197812607
     * @vftbl  358
     * @symbol ?jumpFromGround@Player@@UEBAXAEAUIMobMovementProxy@@@Z
     */
    virtual void jumpFromGround(struct IMobMovementProxy &) const;
    /**
     * @hash   -1691229600
     * @vftbl  359
     * @symbol ?updateAi@Player@@MEAAXXZ
     */
    virtual void updateAi();
    /**
     * @hash   1403178920
     * @vftbl  364
     * @symbol ?updateGliding@Player@@MEAAXXZ
     */
    virtual void updateGliding();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @hash   -1503333885
     * @vftbl  367
     * @symbol ?prepareRegion@Player@@UEAAXAEAVChunkSource@@@Z
     */
    virtual void prepareRegion(class ChunkSource &);
    /**
     * @hash   -1234876684
     * @vftbl  368
     * @symbol ?destroyRegion@Player@@UEAAXXZ
     */
    virtual void destroyRegion();
    /**
     * @hash   -996204058
     * @vftbl  369
     * @symbol ?suspendRegion@Player@@UEAAXXZ
     */
    virtual void suspendRegion();
    /**
     * @hash   -398003262
     * @vftbl  370
     * @symbol ?resendAllChunks@Player@@UEAAXXZ
     */
    virtual void resendAllChunks();
    /**
     * @hash   117656197
     * @vftbl  371
     * @symbol ?_fireWillChangeDimension@Player@@UEAAXXZ
     */
    virtual void _fireWillChangeDimension();
    /**
     * @hash   -214056311
     * @vftbl  372
     * @symbol ?_fireDimensionChanged@Player@@UEAAXXZ
     */
    virtual void _fireDimensionChanged();
    /**
     * @hash   1280066716
     * @vftbl  373
     * @symbol ?changeDimensionWithCredits@Player@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
     */
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /**
     * @hash   646683190
     * @vftbl  374
     * @symbol ?tickWorld@Player@@UEAAXAEBUTick@@@Z
     */
    virtual void tickWorld(struct Tick const &);
    /**
     * @vftbl  375
     * @symbol __unk_vfn_375
     */
    virtual void __unk_vfn_375() = 0;
    /**
     * @hash   920132731
     * @vftbl  376
     * @symbol ?getTickingOffsets@Player@@UEBAAEBV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@XZ
     */
    virtual std::vector<class ChunkPos> const & getTickingOffsets() const;
    /**
     * @hash   -1000720660
     * @vftbl  377
     * @symbol ?moveView@Player@@UEAAXXZ
     */
    virtual void moveView();
    /**
     * @hash   -1369257997
     * @vftbl  378
     * @symbol ?moveSpawnView@Player@@UEAAXAEBVVec3@@V?$AutomaticID@VDimension@@H@@@Z
     */
    virtual void moveSpawnView(class Vec3 const &, class AutomaticID<class Dimension, int>);
    /**
     * @hash   298896793
     * @vftbl  379
     * @symbol ?setName@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void setName(std::string const &);
    /**
     * @hash   -1540908816
     * @vftbl  380
     * @symbol ?getTravelledMethod@Player@@UEBA?AW4TravelMethod@@XZ
     */
    virtual enum TravelMethod getTravelledMethod() const;
    /**
     * @hash   -666994812
     * @vftbl  381
     * @symbol ?checkMovementStats@Player@@UEAAXAEBVVec3@@@Z
     */
    virtual void checkMovementStats(class Vec3 const &);
    /**
     * @vftbl  382
     * @symbol __unk_vfn_382
     */
    virtual void __unk_vfn_382();
    /**
     * @vftbl  383
     * @symbol __unk_vfn_383
     */
    virtual void __unk_vfn_383();
    /**
     * @hash   -844819746
     * @vftbl  384
     * @symbol ?respawn@Player@@UEAAXXZ
     */
    virtual void respawn();
    /**
     * @vftbl  385
     * @symbol __unk_vfn_385
     */
    virtual void __unk_vfn_385();
    /**
     * @vftbl  386
     * @symbol __unk_vfn_386
     */
    virtual void __unk_vfn_386();
    /**
     * @hash   -2088861985
     * @vftbl  387
     * @symbol ?hasResource@Player@@UEAA_NH@Z
     */
    virtual bool hasResource(int);
    /**
     * @hash   58159828
     * @vftbl  388
     * @symbol ?completeUsingItem@Player@@UEAAXXZ
     */
    virtual void completeUsingItem();
    /**
     * @hash   -2137898144
     * @vftbl  389
     * @symbol ?startDestroying@Player@@UEAAXXZ
     */
    virtual void startDestroying();
    /**
     * @hash   -182426928
     * @vftbl  390
     * @symbol ?stopDestroying@Player@@UEAAXXZ
     */
    virtual void stopDestroying();
    /**
     * @vftbl  391
     * @symbol __unk_vfn_391
     */
    virtual void __unk_vfn_391();
    /**
     * @vftbl  392
     * @symbol __unk_vfn_392
     */
    virtual void __unk_vfn_392();
    /**
     * @hash   1506275086
     * @vftbl  393
     * @symbol ?openTrading@Player@@UEAAXAEBUActorUniqueID@@_N@Z
     */
    virtual void openTrading(struct ActorUniqueID const &, bool);
    /**
     * @hash   2102808635
     * @vftbl  394
     * @symbol ?canOpenContainerScreen@Player@@UEAA_NXZ
     */
    virtual bool canOpenContainerScreen();
    /**
     * @vftbl  395
     * @symbol __unk_vfn_395
     */
    virtual void __unk_vfn_395();
    /**
     * @hash   -1918982282
     * @vftbl  396
     * @symbol ?openNpcInteractScreen@Player@@UEAAXV?$shared_ptr@UINpcDialogueData@@@std@@@Z
     */
    virtual void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData>);
    /**
     * @hash   -1434329704
     * @vftbl  397
     * @symbol ?openInventory@Player@@UEAAXXZ
     */
    virtual void openInventory();
    /**
     * @vftbl  398
     * @symbol __unk_vfn_398
     */
    virtual void __unk_vfn_398();
    /**
     * @vftbl  399
     * @symbol __unk_vfn_399
     */
    virtual void __unk_vfn_399();
    /**
     * @hash   563744676
     * @vftbl  400
     * @symbol ?displayTextObjectMessage@Player@@UEAAXAEBVTextObjectRoot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     */
    virtual void displayTextObjectMessage(class TextObjectRoot const &, std::string const &, std::string const &);
    /**
     * @hash   -1672678188
     * @vftbl  401
     * @symbol ?displayTextObjectWhisperMessage@Player@@UEAAXAEBVResolvedTextObject@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     */
    virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /**
     * @hash   -1642755661
     * @vftbl  402
     * @symbol ?displayTextObjectWhisperMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     */
    virtual void displayTextObjectWhisperMessage(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -1938745171
     * @vftbl  403
     * @symbol ?displayWhisperMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     */
    virtual void displayWhisperMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @hash   2117769110
     * @vftbl  404
     * @symbol ?startSleepInBed@Player@@UEAA?AW4BedSleepingResult@@AEBVBlockPos@@@Z
     */
    virtual enum BedSleepingResult startSleepInBed(class BlockPos const &);
    /**
     * @hash   -336809947
     * @vftbl  405
     * @symbol ?stopSleepInBed@Player@@UEAAX_N0@Z
     */
    virtual void stopSleepInBed(bool, bool);
    /**
     * @hash   -1395593089
     * @vftbl  406
     * @symbol ?canStartSleepInBed@Player@@UEAA_NXZ
     */
    virtual bool canStartSleepInBed();
    /**
     * @hash   909335006
     * @vftbl  407
     * @symbol ?getSleepTimer@Player@@UEBAHXZ
     */
    virtual int getSleepTimer() const;
    /**
     * @hash   710817618
     * @vftbl  408
     * @symbol ?getPreviousTickSleepTimer@Player@@UEBAHXZ
     */
    virtual int getPreviousTickSleepTimer() const;
    /**
     * @vftbl  409
     * @symbol __unk_vfn_409
     */
    virtual void __unk_vfn_409();
    /**
     * @vftbl  410
     * @symbol __unk_vfn_410
     */
    virtual void __unk_vfn_410();
    /**
     * @hash   -1335844600
     * @vftbl  411
     * @symbol ?isHostingPlayer@Player@@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const;
    /**
     * @hash   -681442967
     * @vftbl  412
     * @symbol ?isLoading@Player@@UEBA_NXZ
     */
    virtual bool isLoading() const;
    /**
     * @hash   -1215107040
     * @vftbl  413
     * @symbol ?isPlayerInitialized@Player@@UEBA_NXZ
     */
    virtual bool isPlayerInitialized() const;
    /**
     * @vftbl  414
     * @symbol __unk_vfn_414
     */
    virtual void __unk_vfn_414();
    /**
     * @hash   -1817660765
     * @vftbl  415
     * @symbol ?registerTrackedBoss@Player@@UEAAXUActorUniqueID@@@Z
     */
    virtual void registerTrackedBoss(struct ActorUniqueID);
    /**
     * @hash   -116575508
     * @vftbl  416
     * @symbol ?unRegisterTrackedBoss@Player@@UEAAXUActorUniqueID@@@Z
     */
    virtual void unRegisterTrackedBoss(struct ActorUniqueID);
    /**
     * @hash   -452886669
     * @vftbl  417
     * @symbol ?setPlayerGameType@Player@@UEAAXW4GameType@@@Z
     */
    virtual void setPlayerGameType(enum GameType);
    /**
     * @hash   1403444777
     * @vftbl  418
     * @symbol ?initHUDContainerManager@Player@@UEAAXXZ
     */
    virtual void initHUDContainerManager();
    /**
     * @hash   -1907373896
     * @vftbl  419
     * @symbol ?_crit@Player@@UEAAXAEAVActor@@@Z
     */
    virtual void _crit(class Actor &);
    /**
     * @hash   -123561491
     * @vftbl  420
     * @symbol ?getEventing@Player@@UEBAPEAVIMinecraftEventing@@XZ
     */
    virtual class IMinecraftEventing * getEventing() const;
    /**
     * @vftbl  421
     * @symbol __unk_vfn_421
     */
    virtual void __unk_vfn_421();
    /**
     * @hash   1861480873
     * @vftbl  422
     * @symbol ?sendEventPacket@Player@@UEBAXAEAVEventPacket@@@Z
     */
    virtual void sendEventPacket(class EventPacket &) const;
    /**
     * @hash   1984606462
     * @vftbl  423
     * @symbol ?addExperience@Player@@UEAAXH@Z
     */
    virtual void addExperience(int);
    /**
     * @hash   876911049
     * @vftbl  424
     * @symbol ?addLevels@Player@@UEAAXH@Z
     */
    virtual void addLevels(int);
    /**
     * @hash   -1215784189
     * @vftbl  425
     * @symbol ?setContainerData@ServerPlayer@@UEAAXAEAVIContainerManager@@HH@Z
     */
    virtual void setContainerData(class IContainerManager &, int, int) = 0;
    /**
     * @hash   1463600696
     * @vftbl  426
     * @symbol ?slotChanged@ServerPlayer@@UEAAXAEAVIContainerManager@@AEAVContainer@@HAEBVItemStack@@2_N@Z
     */
    virtual void slotChanged(class IContainerManager &, class Container &, int, class ItemStack const &, class ItemStack const &, bool) = 0;
    /**
     * @hash   -803755670
     * @vftbl  427
     * @symbol ?inventoryChanged@Player@@UEAAXAEAVContainer@@HAEBVItemStack@@1_N@Z
     */
    virtual void inventoryChanged(class Container &, int, class ItemStack const &, class ItemStack const &, bool);
    /**
     * @hash   -491326394
     * @vftbl  428
     * @symbol ?refreshContainer@ServerPlayer@@UEAAXAEAVIContainerManager@@@Z
     */
    virtual void refreshContainer(class IContainerManager &) = 0;
    /**
     * @hash   -634158323
     * @vftbl  429
     * @symbol ?deleteContainerManager@Player@@UEAAXXZ
     */
    virtual void deleteContainerManager();
    /**
     * @hash   207667665
     * @vftbl  430
     * @symbol ?setFieldOfViewModifier@Player@@UEAAXM@Z
     */
    virtual void setFieldOfViewModifier(float);
    /**
     * @hash   232568596
     * @vftbl  431
     * @symbol ?isActorRelevant@Player@@UEAA_NAEBVActor@@@Z
     */
    virtual bool isActorRelevant(class Actor const &);
    /**
     * @hash   -1354516694
     * @vftbl  432
     * @symbol ?isTeacher@ServerPlayer@@UEBA_NXZ
     */
    virtual bool isTeacher() const = 0;
    /**
     * @hash   668390018
     * @vftbl  433
     * @symbol ?onSuspension@Player@@UEAAXXZ
     */
    virtual void onSuspension();
    /**
     * @hash   -1140192003
     * @vftbl  434
     * @symbol ?onLinkedSlotsChanged@Player@@UEAAXXZ
     */
    virtual void onLinkedSlotsChanged();
    /**
     * @hash   372292613
     * @vftbl  435
     * @symbol ?startCooldown@Player@@UEAAXPEBVItem@@_N@Z
     */
    virtual void startCooldown(class Item const *, bool);
    /**
     * @hash   1720468172
     * @vftbl  436
     * @symbol ?getItemCooldownLeft@Player@@UEBAHAEBVHashedString@@@Z
     */
    virtual int getItemCooldownLeft(class HashedString const &) const;
    /**
     * @hash   -1594210787
     * @vftbl  437
     * @symbol ?getItemCooldownLeft@Player@@UEBAH_K@Z
     */
    virtual int getItemCooldownLeft(unsigned __int64) const;
    /**
     * @hash   778652813
     * @vftbl  438
     * @symbol ?getMaxItemCooldownLeft@Player@@UEBAHXZ
     */
    virtual int getMaxItemCooldownLeft() const;
    /**
     * @hash   663721347
     * @vftbl  439
     * @symbol ?isItemOnCooldown@Player@@UEBA_NAEBVHashedString@@@Z
     */
    virtual bool isItemOnCooldown(class HashedString const &) const;
    /**
     * @hash   1770538201
     * @vftbl  440
     * @symbol ?sendInventoryTransaction@ServerPlayer@@UEBAXAEBVInventoryTransaction@@@Z
     */
    virtual void sendInventoryTransaction(class InventoryTransaction const &) const = 0;
    /**
     * @hash   -377077727
     * @vftbl  441
     * @symbol ?sendComplexInventoryTransaction@ServerPlayer@@UEBAXV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@@Z
     */
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const = 0;
    /**
     * @hash   205033015
     * @vftbl  442
     * @symbol ?sendNetworkPacket@Player@@UEBAXAEAVPacket@@@Z
     */
    virtual void sendNetworkPacket(class Packet &) const;
    /**
     * @hash   -1130499567
     * @vftbl  443
     * @symbol ?getPlayerEventCoordinator@ServerPlayer@@UEAAAEAVPlayerEventCoordinator@@XZ
     */
    virtual class PlayerEventCoordinator & getPlayerEventCoordinator() = 0;
    /**
     * @hash   819128593
     * @vftbl  444
     * @symbol ?tryGetMoveInputHandler@ServerPlayer@@UEBAPEAVMoveInputHandler@@XZ
     */
    virtual class MoveInputHandler * tryGetMoveInputHandler() const = 0;
    /**
     * @hash   1036289354
     * @vftbl  445
     * @symbol ?getInputMode@ServerPlayer@@UEBA?AW4InputMode@@XZ
     */
    virtual enum InputMode getInputMode() const = 0;
    /**
     * @hash   820122805
     * @vftbl  446
     * @symbol ?getPlayMode@ServerPlayer@@UEBA?AW4ClientPlayMode@@XZ
     */
    virtual enum ClientPlayMode getPlayMode() const = 0;
    /**
     * @hash   1426113961
     * @vftbl  447
     * @symbol ?reportMovementTelemetry@Player@@UEAAXW4MovementEventType@@@Z
     */
    virtual void reportMovementTelemetry(enum MovementEventType);
    /**
     * @vftbl  448
     * @symbol __unk_vfn_448
     */
    virtual void __unk_vfn_448();
    /**
     * @hash   1187407815
     * @vftbl  449
     * @symbol ?getXuid@Player@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getXuid() const;
    /**
     * @hash   -1333514786
     * @vftbl  450
     * @symbol ?getMovementSettings@Player@@UEBAAEBUPlayerMovementSettings@@XZ
     */
    virtual struct PlayerMovementSettings const & getMovementSettings() const;
    /**
     * @hash   -491794723
     * @vftbl  451
     * @symbol ?addSavedChunk@Player@@UEAAXAEBVChunkPos@@@Z
     */
    virtual void addSavedChunk(class ChunkPos const &);
    /**
     * @hash   -1153240174
     * @vftbl  452
     * @symbol ?onMovePlayerPacketNormal@Player@@MEAAXAEBVVec3@@AEBVVec2@@M@Z
     */
    virtual void onMovePlayerPacketNormal(class Vec3 const &, class Vec2 const &, float);
    /**
     * @hash   1657310997
     * @vftbl  453
     * @symbol ?_createChunkSource@Player@@MEAA?AV?$shared_ptr@VChunkViewSource@@@std@@AEAVChunkSource@@@Z
     */
    virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYER
    /**
     * @hash   1490893667
     * @symbol ?canInteractWithOtherEntitiesInGame@Player@@UEBA_NXZ
     */
    MCVAPI bool canInteractWithOtherEntitiesInGame() const;
    /**
     * @hash   -666888621
     * @symbol ?displayChatMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCVAPI void displayChatMessage(std::string const &, std::string const &);
    /**
     * @hash   534772620
     * @symbol ?displayClientMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void displayClientMessage(std::string const &);
    /**
     * @hash   -2095602236
     * @symbol ?getAlwaysShowNameTag@Player@@UEBA_NXZ
     */
    MCVAPI bool getAlwaysShowNameTag() const;
    /**
     * @hash   -1538061640
     * @symbol ?getCurrentStructureFeature@Player@@UEBA?AW4StructureFeatureType@@XZ
     */
    MCVAPI enum StructureFeatureType getCurrentStructureFeature() const;
    /**
     * @hash   -926234623
     * @symbol ?getUserId@Player@@UEBAIXZ
     */
    MCVAPI unsigned int getUserId() const;
    /**
     * @hash   648724433
     * @symbol ?isAutoJumpEnabled@Player@@UEBA_NXZ
     */
    MCVAPI bool isAutoJumpEnabled() const;
    /**
     * @hash   232415908
     * @symbol ?isCreativeModeAllowed@Player@@UEAA_NXZ
     */
    MCVAPI bool isCreativeModeAllowed();
    /**
     * @hash   -181719006
     * @symbol ?isInTrialMode@Player@@UEAA_NXZ
     */
    MCVAPI bool isInTrialMode();
    /**
     * @hash   1509443234
     * @symbol ?isPlayer@Player@@UEBA_NXZ
     */
    MCVAPI bool isPlayer() const;
    /**
     * @hash   -1628885273
     * @symbol ?isShootable@Player@@UEAA_NXZ
     */
    MCVAPI bool isShootable();
    /**
     * @hash   -1048063251
     * @symbol ?isSimulated@Player@@UEBA_NXZ
     */
    MCVAPI bool isSimulated() const;
    /**
     * @hash   136413695
     * @symbol ?openBook@Player@@UEAAXH_NHPEAVBlockActor@@@Z
     */
    MCVAPI void openBook(int, bool, int, class BlockActor *);
    /**
     * @hash   739832454
     * @symbol ?openChalkboard@Player@@UEAAXAEAVChalkboardBlockActor@@_N@Z
     */
    MCVAPI void openChalkboard(class ChalkboardBlockActor &, bool);
    /**
     * @hash   -1303285500
     * @symbol ?openPortfolio@Player@@UEAAXXZ
     */
    MCVAPI void openPortfolio();
    /**
     * @hash   1223335229
     * @symbol ?openSign@Player@@UEAAXAEBVBlockPos@@@Z
     */
    MCVAPI void openSign(class BlockPos const &);
    /**
     * @hash   1063958978
     * @symbol ?playEmote@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void playEmote(std::string const &);
    /**
     * @hash   -1969305362
     * @symbol ?resetRot@Player@@UEAAXXZ
     */
    MCVAPI void resetRot();
    /**
     * @hash   1901701952
     * @symbol ?stopLoading@Player@@UEAAXXZ
     */
    MCVAPI void stopLoading();
    /**
     * @hash   -1361585096
     * @symbol ?useNewAi@Player@@UEBA_NXZ
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @hash   2045624232
     * @symbol ??0Player@@QEAA@AEAVLevel@@AEAVPacketSender@@W4GameType@@AEBVNetworkIdentifier@@W4SubClientId@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@6V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@9@AEAVEntityContext@@66@Z
     */
    MCAPI Player(class Level &, class PacketSender &, enum GameType, class NetworkIdentifier const &, enum SubClientId, class mce::UUID, std::string const &, std::string const &, std::unique_ptr<class Certificate>, class EntityContext &, std::string const &, std::string const &);
    /**
     * @hash   1184048916
     * @symbol ?applyExhaustion@Player@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void applyExhaustion(class Vec3 const &);
    /**
     * @hash   -1066008865
     * @symbol ?broadcastPlayerSpawnedMobEvent@Player@@QEAAXW4ActorType@@W4MobSpawnMethod@@@Z
     */
    MCAPI void broadcastPlayerSpawnedMobEvent(enum ActorType, enum MobSpawnMethod);
    /**
     * @hash   -1238133174
     * @symbol ?canBeSeenOnMap@Player@@QEBA_NXZ
     */
    MCAPI bool canBeSeenOnMap() const;
    /**
     * @hash   -161082823
     * @symbol ?canDestroy@Player@@QEBA_NAEBVBlock@@@Z
     */
    MCAPI bool canDestroy(class Block const &) const;
    /**
     * @hash   2109305258
     * @symbol ?canSleep@Player@@QEBA_NXZ
     */
    MCAPI bool canSleep() const;
    /**
     * @hash   -2016156247
     * @symbol ?canStackInOffhand@Player@@QEBA_NAEBVItemStack@@@Z
     */
    MCAPI bool canStackInOffhand(class ItemStack const &) const;
    /**
     * @hash   60145195
     * @symbol ?canUseAbility@Player@@QEBA_NW4AbilitiesIndex@@@Z
     */
    MCAPI bool canUseAbility(enum AbilitiesIndex) const;
    /**
     * @hash   1356292766
     * @symbol ?canUseOperatorBlocks@Player@@QEBA_NXZ
     */
    MCAPI bool canUseOperatorBlocks() const;
    /**
     * @hash   -164515658
     * @symbol ?causeFoodExhaustion@Player@@QEAAXM@Z
     */
    MCAPI void causeFoodExhaustion(float);
    /**
     * @hash   -2119120331
     * @symbol ?clearRespawnPosition@Player@@QEAAXXZ
     */
    MCAPI void clearRespawnPosition();
    /**
     * @hash   -298454584
     * @symbol ?eat@Player@@QEAAXAEBVItemStack@@@Z
     */
    MCAPI void eat(class ItemStack const &);
    /**
     * @hash   -764254695
     * @symbol ?eat@Player@@QEAAXHM@Z
     */
    MCAPI void eat(int, float);
    /**
     * @hash   865905269
     * @symbol ?equippedArmorItemCanBeMoved@Player@@QEBA_NAEBVItemStack@@@Z
     */
    MCAPI bool equippedArmorItemCanBeMoved(class ItemStack const &) const;
    /**
     * @hash   781023186
     * @symbol ?fireDimensionChangedEvent@Player@@QEAAXV?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI void fireDimensionChangedEvent(class AutomaticID<class Dimension, int>);
    /**
     * @hash   -1812375972
     * @symbol ?forceAllowEating@Player@@QEBA_NXZ
     */
    MCAPI bool forceAllowEating() const;
    /**
     * @hash   -264925623
     * @symbol ?getAgent@Player@@QEBAPEAVAgent@@XZ
     */
    MCAPI class Agent * getAgent() const;
    /**
     * @hash   497256114
     * @symbol ?getAgentID@Player@@QEBA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getAgentID() const;
    /**
     * @hash   1075798981
     * @symbol ?getAgentIfAllowed@Player@@QEBAPEAVAgent@@_NUActorUniqueID@@@Z
     */
    MCAPI class Agent * getAgentIfAllowed(bool, struct ActorUniqueID) const;
    /**
     * @hash   1209076146
     * @symbol ?getBedPosition@Player@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getBedPosition() const;
    /**
     * @hash   1614023579
     * @symbol ?getBlockedUsingDamagedShieldTimeStamp@Player@@QEBA_JXZ
     */
    MCAPI __int64 getBlockedUsingDamagedShieldTimeStamp() const;
    /**
     * @hash   -689146181
     * @symbol ?getBlockedUsingShieldTimeStamp@Player@@QEBA_JXZ
     */
    MCAPI __int64 getBlockedUsingShieldTimeStamp() const;
    /**
     * @hash   1052320493
     * @symbol ?getBlockingStartTimeStamp@Player@@QEBA_JXZ
     */
    MCAPI __int64 getBlockingStartTimeStamp() const;
    /**
     * @hash   -723019483
     * @symbol ?getCapePos@Player@@QEAA?AVVec3@@M@Z
     */
    MCAPI class Vec3 getCapePos(float);
    /**
     * @hash   -488670798
     * @symbol ?getChunkRadius@Player@@QEBAIXZ
     */
    MCAPI unsigned int getChunkRadius() const;
    /**
     * @hash   -1349588021
     * @symbol ?getContainerManager@Player@@QEAA?AV?$weak_ptr@VIContainerManager@@@std@@XZ
     */
    MCAPI class std::weak_ptr<class IContainerManager> getContainerManager();
    /**
     * @hash   -1799478760
     * @symbol ?getCurrentActiveShield@Player@@QEBAAEBVItemStack@@XZ
     */
    MCAPI class ItemStack const & getCurrentActiveShield() const;
    /**
     * @hash   -345607773
     * @symbol ?getDestroyProgress@Player@@QEBAMAEBVBlock@@@Z
     */
    MCAPI float getDestroyProgress(class Block const &) const;
    /**
     * @hash   718874389
     * @symbol ?getDestroySpeed@Player@@QEBAMAEBVBlock@@@Z
     */
    MCAPI float getDestroySpeed(class Block const &) const;
    /**
     * @hash   418344760
     * @symbol ?getDirection@Player@@QEBAHXZ
     */
    MCAPI int getDirection() const;
    /**
     * @hash   87935352
     * @symbol ?getEnchantmentSeed@Player@@QEBAHXZ
     */
    MCAPI int getEnchantmentSeed() const;
    /**
     * @hash   -1507793644
     * @symbol ?getExpectedSpawnDimensionId@Player@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getExpectedSpawnDimensionId() const;
    /**
     * @hash   -1608257802
     * @symbol ?getExpectedSpawnPosition@Player@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getExpectedSpawnPosition() const;
    /**
     * @hash   406220254
     * @symbol ?getInteractText@Player@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getInteractText() const;
    /**
     * @hash   170514758
     * @symbol ?getInventory@Player@@QEAAAEAVContainer@@XZ
     */
    MCAPI class Container & getInventory();
    /**
     * @hash   1422243480
     * @symbol ?getItemInUse@Player@@QEBAAEBVItemStack@@XZ
     */
    MCAPI class ItemStack const & getItemInUse() const;
    /**
     * @hash   1629884565
     * @symbol ?getItemInteractText@Player@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItem@@@Z
     */
    MCAPI std::string getItemInteractText(class Item const &) const;
    /**
     * @hash   -677418311
     * @symbol ?getItemStackNetManager@Player@@QEAAPEAVItemStackNetManagerBase@@XZ
     */
    MCAPI class ItemStackNetManagerBase * getItemStackNetManager();
    /**
     * @hash   -858361485
     * @symbol ?getItemStackNetManager@Player@@QEBAPEBVItemStackNetManagerBase@@XZ
     */
    MCAPI class ItemStackNetManagerBase const * getItemStackNetManager() const;
    /**
     * @hash   -764177002
     * @symbol ?getLuck@Player@@QEAAMXZ
     */
    MCAPI float getLuck();
    /**
     * @hash   459198360
     * @symbol ?getMapIndex@Player@@QEAAHXZ
     */
    MCAPI int getMapIndex();
    /**
     * @hash   -944790685
     * @symbol ?getMoveInputHandler@Player@@QEBAPEAVMoveInputHandler@@XZ
     */
    MCAPI class MoveInputHandler * getMoveInputHandler() const;
    /**
     * @hash   -1444191405
     * @symbol ?getNewEnchantmentSeed@Player@@QEAAXXZ
     */
    MCAPI void getNewEnchantmentSeed();
    /**
     * @hash   -214799794
     * @symbol ?getPickupArea@Player@@QEBA?AVAABB@@XZ
     */
    MCAPI class AABB getPickupArea() const;
    /**
     * @hash   -1904026218
     * @symbol ?getPlatform@Player@@QEBA?AW4BuildPlatform@@XZ
     */
    MCAPI enum BuildPlatform getPlatform() const;
    /**
     * @hash   1568454316
     * @symbol ?getPlatformOnlineId@Player@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getPlatformOnlineId() const;
    /**
     * @hash   481706196
     * @symbol ?getPlayerGameType@Player@@QEBA?AW4GameType@@XZ
     */
    MCAPI enum GameType getPlayerGameType() const;
    /**
     * @hash   -109426280
     * @symbol ?getPlayerIndex@Player@@QEBAHXZ
     */
    MCAPI int getPlayerIndex() const;
    /**
     * @hash   -73428232
     * @symbol ?getPlayerLevel@Player@@QEBAHXZ
     */
    MCAPI int getPlayerLevel() const;
    /**
     * @hash   1937328130
     * @symbol ?getPlayerPermissionLevel@Player@@QEBA?AW4PlayerPermissionLevel@@XZ
     */
    MCAPI enum PlayerPermissionLevel getPlayerPermissionLevel() const;
    /**
     * @hash   -904337666
     * @symbol ?getPlayerSessionId@Player@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getPlayerSessionId() const;
    /**
     * @hash   1981365271
     * @symbol ?getPlayerUIItem@Player@@QEAAAEBVItemStack@@W4PlayerUISlot@@@Z
     */
    MCAPI class ItemStack const & getPlayerUIItem(enum PlayerUISlot);
    /**
     * @hash   -2082731542
     * @symbol ?getRespawnAnchorPosition@Player@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getRespawnAnchorPosition() const;
    /**
     * @hash   574853926
     * @symbol ?getSelectedItem@Player@@QEBAAEBVItemStack@@XZ
     */
    MCAPI class ItemStack const & getSelectedItem() const;
    /**
     * @hash   1448246086
     * @symbol ?getSelectedItemSlot@Player@@QEBAHXZ
     */
    MCAPI int getSelectedItemSlot() const;
    /**
     * @hash   -1847486896
     * @symbol ?getSkin@Player@@QEAAAEAVSerializedSkin@@XZ
     */
    MCAPI class SerializedSkin & getSkin();
    /**
     * @hash   1700460558
     * @symbol ?getSkin@Player@@QEBAAEBVSerializedSkin@@XZ
     */
    MCAPI class SerializedSkin const & getSkin() const;
    /**
     * @hash   -923094922
     * @symbol ?getSleepRotation@Player@@QEBAMXZ
     */
    MCAPI float getSleepRotation() const;
    /**
     * @hash   93655438
     * @symbol ?getSpawnDimension@Player@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getSpawnDimension() const;
    /**
     * @hash   -1550585242
     * @symbol ?getSpawnPosition@Player@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getSpawnPosition() const;
    /**
     * @hash   -1745160640
     * @symbol ?getSupplies@Player@@QEAAAEAVPlayerInventory@@XZ
     */
    MCAPI class PlayerInventory & getSupplies();
    /**
     * @hash   1100165818
     * @symbol ?getSupplies@Player@@QEBAAEBVPlayerInventory@@XZ
     */
    MCAPI class PlayerInventory const & getSupplies() const;
    /**
     * @hash   -379026106
     * @symbol ?getTrackedBosses@Player@@QEAAAEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct ActorUniqueID> const & getTrackedBosses();
    /**
     * @hash   -1298780964
     * @symbol ?getUnmappedPlayerGameType@Player@@QEBA?AW4GameType@@XZ
     */
    MCAPI enum GameType getUnmappedPlayerGameType() const;
    /**
     * @hash   -1356680950
     * @symbol ?getUsedPotion@Player@@QEAA_NXZ
     */
    MCAPI bool getUsedPotion();
    /**
     * @hash   346624166
     * @symbol ?getXpNeededForNextLevel@Player@@QEBAHXZ
     */
    MCAPI int getXpNeededForNextLevel() const;
    /**
     * @hash   -1422353444
     * @symbol ?hasBedPosition@Player@@QEBA_NXZ
     */
    MCAPI bool hasBedPosition() const;
    /**
     * @hash   1901991702
     * @symbol ?hasOpenContainer@Player@@QEBA_NXZ
     */
    MCAPI bool hasOpenContainer() const;
    /**
     * @hash   558934903
     * @symbol ?hasOpenContainerOfContainerType@Player@@QEBA_NW4ContainerType@@@Z
     */
    MCAPI bool hasOpenContainerOfContainerType(enum ContainerType) const;
    /**
     * @hash   -773621832
     * @symbol ?hasOwnedChunkSource@Player@@QEBA_NXZ
     */
    MCAPI bool hasOwnedChunkSource() const;
    /**
     * @hash   1247062461
     * @symbol ?hasResource@Player@@QEAA_NAEBVItemDescriptor@@@Z
     */
    MCAPI bool hasResource(class ItemDescriptor const &);
    /**
     * @hash   -798523996
     * @symbol ?hasRespawnAnchorPosition@Player@@QEBA_NXZ
     */
    MCAPI bool hasRespawnAnchorPosition() const;
    /**
     * @hash   -1303145398
     * @symbol ?hasRespawnPosition@Player@@QEBA_NXZ
     */
    MCAPI bool hasRespawnPosition() const;
    /**
     * @hash   969588750
     * @symbol ?interact@Player@@QEAA_NAEAVActor@@AEBVVec3@@@Z
     */
    MCAPI bool interact(class Actor &, class Vec3 const &);
    /**
     * @hash   1275043648
     * @symbol ?is2DPositionRelevant@Player@@QEAA_NV?$AutomaticID@VDimension@@H@@AEBVBlockPos@@@Z
     */
    MCAPI bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const &);
    /**
     * @hash   -778524706
     * @symbol ?isFlying@Player@@QEBA_NXZ
     */
    MCAPI bool isFlying() const;
    /**
     * @hash   -684320648
     * @symbol ?isForcedRespawn@Player@@QEBA_NXZ
     */
    MCAPI bool isForcedRespawn() const;
    /**
     * @hash   -1456201137
     * @symbol ?isHiddenFrom@Player@@QEBA_NAEAVMob@@@Z
     */
    MCAPI bool isHiddenFrom(class Mob &) const;
    /**
     * @hash   -549239222
     * @symbol ?isHungry@Player@@QEBA_NXZ
     */
    MCAPI bool isHungry() const;
    /**
     * @hash   1387374014
     * @symbol ?isHurt@Player@@QEAA_NXZ
     */
    MCAPI bool isHurt();
    /**
     * @hash   -1600406034
     * @symbol ?isInCreativeMode@Player@@QEBA_NXZ
     */
    MCAPI bool isInCreativeMode() const;
    /**
     * @hash   166604302
     * @symbol ?isInRaid@Player@@QEBA_NXZ
     */
    MCAPI bool isInRaid() const;
    /**
     * @hash   -1617844148
     * @symbol ?isRespawningFromTheEnd@Player@@QEBA_NXZ
     */
    MCAPI bool isRespawningFromTheEnd() const;
    /**
     * @hash   -190814642
     * @symbol ?isSleepingLongEnough@Player@@QEBA_NXZ
     */
    MCAPI bool isSleepingLongEnough() const;
    /**
     * @hash   934657774
     * @symbol ?isSpawned@Player@@QEBA_NXZ
     */
    MCAPI bool isSpawned() const;
    /**
     * @hash   -545835544
     * @symbol ?isUsingItem@Player@@QEBA_NXZ
     */
    MCAPI bool isUsingItem() const;
    /**
     * @hash   92460836
     * @symbol ?loadLastDeathLocation@Player@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void loadLastDeathLocation(class CompoundTag const &);
    /**
     * @symbol ?passengerCheckMovementStats@Player@@QEAAXXZ
     */
    MCAPI void passengerCheckMovementStats();
    /**
     * @hash   -579677627
     * @symbol ?recheckSpawnPosition@Player@@QEAAXXZ
     */
    MCAPI void recheckSpawnPosition();
    /**
     * @hash   -785811643
     * @symbol ?releaseUsingItem@Player@@QEAAXXZ
     */
    MCAPI void releaseUsingItem();
    /**
     * @hash   -1149831643
     * @symbol ?resetPlayerLevel@Player@@QEAAXXZ
     */
    MCAPI void resetPlayerLevel();
    /**
     * @hash   -660341563
     * @symbol ?resetToDefaultGameMode@Player@@QEAAXXZ
     */
    MCAPI void resetToDefaultGameMode();
    /**
     * @hash   1195843047
     * @symbol ?setAgent@Player@@QEAAXPEAVAgent@@@Z
     */
    MCAPI void setAgent(class Agent *);
    /**
     * @hash   -62967165
     * @symbol ?setAllPlayersSleeping@Player@@QEAAXXZ
     */
    MCAPI void setAllPlayersSleeping();
    /**
     * @hash   1494606888
     * @symbol ?setBedRespawnPosition@Player@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void setBedRespawnPosition(class BlockPos const &);
    /**
     * @hash   -1318848824
     * @symbol ?setBlockRespawnUntilClientMessage@Player@@QEAAX_N@Z
     */
    MCAPI void setBlockRespawnUntilClientMessage(bool);
    /**
     * @hash   -487144464
     * @symbol ?setChunkRadius@Player@@QEAAXI@Z
     */
    MCAPI void setChunkRadius(unsigned int);
    /**
     * @hash   1905065223
     * @symbol ?setContainerManager@Player@@QEAAXV?$shared_ptr@VIContainerManager@@@std@@@Z
     */
    MCAPI void setContainerManager(class std::shared_ptr<class IContainerManager>);
    /**
     * @hash   617009816
     * @symbol ?setCursorSelectedItem@Player@@QEAAXAEBVItemStack@@@Z
     */
    MCAPI void setCursorSelectedItem(class ItemStack const &);
    /**
     * @hash   -1767832392
     * @symbol ?setCursorSelectedItemGroup@Player@@QEAAXAEBVItemGroup@@@Z
     */
    MCAPI void setCursorSelectedItemGroup(class ItemGroup const &);
    /**
     * @hash   1753938742
     * @symbol ?setEnchantmentSeed@Player@@QEAAXH@Z
     */
    MCAPI void setEnchantmentSeed(int);
    /**
     * @hash   -1413541688
     * @symbol ?setHasDied@Player@@QEAAX_N@Z
     */
    MCAPI void setHasDied(bool);
    /**
     * @hash   192221568
     * @symbol ?setHasSeenCredits@Player@@QEAAX_N@Z
     */
    MCAPI void setHasSeenCredits(bool);
    /**
     * @hash   -587851848
     * @symbol ?setMapIndex@Player@@QEAAXH@Z
     */
    MCAPI void setMapIndex(int);
    /**
     * @hash   754251730
     * @symbol ?setPermissions@Player@@QEAAXW4CommandPermissionLevel@@@Z
     */
    MCAPI void setPermissions(enum CommandPermissionLevel);
    /**
     * @hash   -202373730
     * @symbol ?setPlatformOnlineId@Player@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setPlatformOnlineId(std::string const &);
    /**
     * @hash   252431542
     * @symbol ?setPlayerIndex@Player@@QEAAXH@Z
     */
    MCAPI void setPlayerIndex(int);
    /**
     * @hash   -749497627
     * @symbol ?setPlayerUIItem@Player@@QEAAXW4PlayerUISlot@@AEBVItemStack@@@Z
     */
    MCAPI void setPlayerUIItem(enum PlayerUISlot, class ItemStack const &);
    /**
     * @hash   -982663647
     * @symbol ?setRespawnPosition@Player@@QEAAXAEBVBlockPos@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI void setRespawnPosition(class BlockPos const &, class AutomaticID<class Dimension, int>);
    /**
     * @hash   -1492166061
     * @symbol ?setRespawnPositionCandidate@Player@@QEAAXXZ
     */
    MCAPI void setRespawnPositionCandidate();
    /**
     * @hash   79769890
     * @symbol ?setRespawnReady@Player@@QEAAXAEBVVec3@@@Z
     */
    MCAPI void setRespawnReady(class Vec3 const &);
    /**
     * @hash   -795200232
     * @symbol ?setSelectedItem@Player@@QEAAXAEBVItemStack@@@Z
     */
    MCAPI void setSelectedItem(class ItemStack const &);
    /**
     * @hash   1453793651
     * @symbol ?setSelectedSlot@Player@@QEAAAEBVItemStack@@H@Z
     */
    MCAPI class ItemStack const & setSelectedSlot(int);
    /**
     * @hash   44871201
     * @symbol ?setSpawnBlockRespawnPosition@Player@@QEAAXAEBVBlockPos@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const &, class AutomaticID<class Dimension, int>);
    /**
     * @hash   1597083546
     * @symbol ?setUsedPotion@Player@@QEAAX_N@Z
     */
    MCAPI void setUsedPotion(bool);
    /**
     * @hash   634926898
     * @symbol ?shouldShowCredits@Player@@QEBA_NXZ
     */
    MCAPI bool shouldShowCredits() const;
    /**
     * @hash   164896505
     * @symbol ?spawnExperienceOrb@Player@@QEAAXAEBVVec3@@H@Z
     */
    MCAPI void spawnExperienceOrb(class Vec3 const &, int);
    /**
     * @hash   1998070256
     * @symbol ?startCooldown@Player@@QEAAXAEBVHashedString@@H_N@Z
     */
    MCAPI void startCooldown(class HashedString const &, int, bool);
    /**
     * @hash   -1423275195
     * @symbol ?startGliding@Player@@QEAAXXZ
     */
    MCAPI void startGliding();
    /**
     * @hash   1569693821
     * @symbol ?startUsingItem@Player@@QEAAXAEBVItemStack@@H@Z
     */
    MCAPI void startUsingItem(class ItemStack const &, int);
    /**
     * @hash   -2125324989
     * @symbol ?stopGliding@Player@@QEAAXXZ
     */
    MCAPI void stopGliding();
    /**
     * @hash   1600008451
     * @symbol ?stopUsingItem@Player@@QEAAXXZ
     */
    MCAPI void stopUsingItem();
    /**
     * @hash   2136243605
     * @symbol ?take@Player@@QEAA_NAEAVActor@@HH@Z
     */
    MCAPI bool take(class Actor &, int, int);
    /**
     * @hash   785082435
     * @symbol ?updateBlockSourceTick@Player@@QEAAXXZ
     */
    MCAPI void updateBlockSourceTick();
    /**
     * @hash   1034238467
     * @symbol ?updateInventoryTransactions@Player@@QEAAXXZ
     */
    MCAPI void updateInventoryTransactions();
    /**
     * @hash   1634795237
     * @symbol ?updateSkin@Player@@QEAAXAEBVSerializedSkin@@H@Z
     */
    MCAPI void updateSkin(class SerializedSkin const &, int);
    /**
     * @hash   -1268048939
     * @symbol ?updateSpawnChunkView@Player@@QEAAXXZ
     */
    MCAPI void updateSpawnChunkView();
    /**
     * @hash   1661904035
     * @symbol ?updateTrackedBosses@Player@@QEAAXXZ
     */
    MCAPI void updateTrackedBosses();
    /**
     * @hash   -2012542459
     * @symbol ?useSelectedItem@Player@@QEAAXW4ItemUseMethod@@_N@Z
     */
    MCAPI void useSelectedItem(enum ItemUseMethod, bool);
    /**
     * @hash   -1385213937
     * @symbol ?DEFAULT_BB_HEIGHT@Player@@2MB
     */
    MCAPI static float const DEFAULT_BB_HEIGHT;
    /**
     * @hash   590343629
     * @symbol ?DEFAULT_BB_WIDTH@Player@@2MB
     */
    MCAPI static float const DEFAULT_BB_WIDTH;
    /**
     * @hash   1466207971
     * @symbol ?DEFAULT_FLY_SPEED@Player@@2MB
     */
    MCAPI static float const DEFAULT_FLY_SPEED;
    /**
     * @hash   260555233
     * @symbol ?DEFAULT_PLAYER_HEIGHT_OFFSET@Player@@2MB
     */
    MCAPI static float const DEFAULT_PLAYER_HEIGHT_OFFSET;
    /**
     * @hash   -1177554943
     * @symbol ?DEFAULT_WALK_SPEED@Player@@2MB
     */
    MCAPI static float const DEFAULT_WALK_SPEED;
    /**
     * @hash   -1132206857
     * @symbol ?DISTANCE_TO_TRANSFORM_EVENT@Player@@2MB
     */
    MCAPI static float const DISTANCE_TO_TRANSFORM_EVENT;
    /**
     * @hash   2034035603
     * @symbol ?DISTANCE_TO_TRAVELLED_EVENT@Player@@2MB
     */
    MCAPI static float const DISTANCE_TO_TRAVELLED_EVENT;
    /**
     * @hash   -1835176605
     * @symbol ?EXHAUSTION@Player@@2VAttribute@@B
     */
    MCAPI static class Attribute const EXHAUSTION;
    /**
     * @hash   -1778490005
     * @symbol ?EXPERIENCE@Player@@2VAttribute@@B
     */
    MCAPI static class Attribute const EXPERIENCE;
    /**
     * @hash   2132940485
     * @symbol ?GLIDE_STOP_DELAY@Player@@2HB
     */
    MCAPI static int const GLIDE_STOP_DELAY;
    /**
     * @hash   1103648541
     * @symbol ?HUNGER@Player@@2VAttribute@@B
     */
    MCAPI static class Attribute const HUNGER;
    /**
     * @hash   -876996937
     * @symbol ?ITEM_USE_INTERVAL_COUNT@Player@@2HB
     */
    MCAPI static int const ITEM_USE_INTERVAL_COUNT;
    /**
     * @hash   -465642251
     * @symbol ?ITEM_USE_INTERVAL_DURATION@Player@@2HB
     */
    MCAPI static int const ITEM_USE_INTERVAL_DURATION;
    /**
     * @hash   -183238711
     * @symbol ?LEVEL@Player@@2VAttribute@@B
     */
    MCAPI static class Attribute const LEVEL;
    /**
     * @hash   1297820911
     * @symbol ?MAX_ITEM_USE_DURATION@Player@@2HB
     */
    MCAPI static int const MAX_ITEM_USE_DURATION;
    /**
     * @hash   1868921671
     * @symbol ?PLAYER_ALIVE_HEIGHT@Player@@2MB
     */
    MCAPI static float const PLAYER_ALIVE_HEIGHT;
    /**
     * @hash   279703757
     * @symbol ?PLAYER_ALIVE_WIDTH@Player@@2MB
     */
    MCAPI static float const PLAYER_ALIVE_WIDTH;
    /**
     * @hash   1370900369
     * @symbol ?PLAYER_DEAD_HEIGHT@Player@@2MB
     */
    MCAPI static float const PLAYER_DEAD_HEIGHT;
    /**
     * @hash   1649119315
     * @symbol ?PLAYER_DEAD_WIDTH@Player@@2MB
     */
    MCAPI static float const PLAYER_DEAD_WIDTH;
    /**
     * @hash   2090035513
     * @symbol ?PLAYER_DOWN_SWIM_SPEED@Player@@2MB
     */
    MCAPI static float const PLAYER_DOWN_SWIM_SPEED;
    /**
     * @hash   460350661
     * @symbol ?PLAYER_GLIDING_CAMERA_OFFSET@Player@@2MB
     */
    MCAPI static float const PLAYER_GLIDING_CAMERA_OFFSET;
    /**
     * @hash   -1205037379
     * @symbol ?PLAYER_ITEM_USE_DEFAULT_SPEED_MODIFIER@Player@@2MB
     */
    MCAPI static float const PLAYER_ITEM_USE_DEFAULT_SPEED_MODIFIER;
    /**
     * @hash   119247691
     * @symbol ?PLAYER_SLEEPING_CAMERA_OFFSET@Player@@2MB
     */
    MCAPI static float const PLAYER_SLEEPING_CAMERA_OFFSET;
    /**
     * @hash   269500729
     * @symbol ?PLAYER_SLEEPING_HEIGHT@Player@@2MB
     */
    MCAPI static float const PLAYER_SLEEPING_HEIGHT;
    /**
     * @hash   -1988632901
     * @symbol ?PLAYER_SLEEPING_WIDTH@Player@@2MB
     */
    MCAPI static float const PLAYER_SLEEPING_WIDTH;
    /**
     * @hash   -362793297
     * @symbol ?PLAYER_SNEAK_OFFSET@Player@@2MB
     */
    MCAPI static float const PLAYER_SNEAK_OFFSET;
    /**
     * @hash   -38491001
     * @symbol ?PLAYER_SWIMMING_CAMERA_OFFSET@Player@@2MB
     */
    MCAPI static float const PLAYER_SWIMMING_CAMERA_OFFSET;
    /**
     * @hash   -1806285083
     * @symbol ?PLAYER_SWIM_BREACH_ANGLE@Player@@2MB
     */
    MCAPI static float const PLAYER_SWIM_BREACH_ANGLE;
    /**
     * @hash   -1191886169
     * @symbol ?PLAYER_SWIM_ENTER_THRESHOLD@Player@@2MB
     */
    MCAPI static float const PLAYER_SWIM_ENTER_THRESHOLD;
    /**
     * @hash   -309754369
     * @symbol ?PLAYER_SWIM_FLY_MULTI@Player@@2MB
     */
    MCAPI static float const PLAYER_SWIM_FLY_MULTI;
    /**
     * @hash   -348429739
     * @symbol ?PLAYER_UP_SWIM_SPEED@Player@@2MB
     */
    MCAPI static float const PLAYER_UP_SWIM_SPEED;
    /**
     * @hash   1470564243
     * @symbol ?SATURATION@Player@@2VAttribute@@B
     */
    MCAPI static class Attribute const SATURATION;
    /**
     * @hash   2033677977
     * @symbol ?SPAWN_CHUNK_LARGE_JUMP@Player@@2IB
     */
    MCAPI static unsigned int const SPAWN_CHUNK_LARGE_JUMP;
    /**
     * @hash   -1282336747
     * @symbol ?SPAWN_CHUNK_RADIUS@Player@@2IB
     */
    MCAPI static unsigned int const SPAWN_CHUNK_RADIUS;
    /**
     * @hash   176154084
     * @symbol ?_aiStep@Player@@SAXAEAUIPlayerMovementProxy@@@Z
     */
    MCAPI static void _aiStep(struct IPlayerMovementProxy &);
    /**
     * @hash   -1747761027
     * @symbol ?_travel@Player@@SAXAEAUIPlayerMovementProxy@@MMM@Z
     */
    MCAPI static void _travel(struct IPlayerMovementProxy &, float, float, float);
    /**
     * @hash   -640276643
     * @symbol ?canJump@Player@@SA_NAEAUIPlayerMovementProxy@@@Z
     */
    MCAPI static bool canJump(struct IPlayerMovementProxy &);
    /**
     * @hash   1842625129
     * @symbol ?checkAndFixSpawnPosition@Player@@SA_NAEAVVec3@@V?$vector@V?$not_null@PEAVBlockSource@@@gsl@@V?$allocator@V?$not_null@PEAVBlockSource@@@gsl@@@std@@@std@@VAABB@@_N33333F@Z
     */
    MCAPI static bool checkAndFixSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, class AABB, bool, bool, bool, bool, bool, bool, short);
    /**
     * @hash   166910568
     * @symbol ?checkNeedAutoJump@Player@@SA_NPEAUIPlayerMovementProxy@@MM@Z
     */
    MCAPI static bool checkNeedAutoJump(struct IPlayerMovementProxy *, float, float);
    /**
     * @hash   -2020487624
     * @symbol ?goDownInWater@Player@@SAXAEAUIActorMovementProxy@@@Z
     */
    MCAPI static void goDownInWater(struct IActorMovementProxy &);
    /**
     * @hash   1819608818
     * @symbol ?handleJumpEffects@Player@@SAXAEAUIPlayerMovementProxy@@@Z
     */
    MCAPI static void handleJumpEffects(struct IPlayerMovementProxy &);
    /**
     * @hash   677687589
     * @symbol ?isDangerousVolume@Player@@SA_NAEAVBlockSource@@AEBVAABB@@_N@Z
     */
    MCAPI static bool isDangerousVolume(class BlockSource &, class AABB const &, bool);
    /**
     * @hash   565359755
     * @symbol ?tryGetFromComponent@Player@@SAPEAV1@AEBV?$FlagComponent@UPlayerComponentFlag@@@@AEAVActorOwnerComponent@@_N@Z
     */
    MCAPI static class Player * tryGetFromComponent(class FlagComponent<struct PlayerComponentFlag> const &, class ActorOwnerComponent &, bool);
    /**
     * @hash   -811239024
     * @symbol ?tryGetFromEntity@Player@@SAPEAV1@V?$StackRefResultT@UEntityRefTraits@@@@_N@Z
     */
    MCAPI static class Player * tryGetFromEntity(class StackRefResultT<struct EntityRefTraits>, bool);
    /**
     * @hash   682211979
     * @symbol ?tryGetFromEntity@Player@@SAPEAV1@AEAVEntityContext@@_N@Z
     */
    MCAPI static class Player * tryGetFromEntity(class EntityContext &, bool);

//protected:
    /**
     * @hash   30370310
     * @symbol ?_checkAndFixSpawnPosition@Player@@IEBA_NAEAVVec3@@V?$vector@V?$not_null@PEAVBlockSource@@@gsl@@V?$allocator@V?$not_null@PEAVBlockSource@@@gsl@@@std@@@std@@_N2222@Z
     */
    MCAPI bool _checkAndFixSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, bool, bool, bool, bool, bool) const;
    /**
     * @hash   59508660
     * @symbol ?_chooseSpawnArea@Player@@IEAAXXZ
     */
    MCAPI void _chooseSpawnArea();
    /**
     * @hash   -2072952990
     * @symbol ?_chooseSpawnPositionWithinArea@Player@@IEAA_NXZ
     */
    MCAPI bool _chooseSpawnPositionWithinArea();
    /**
     * @hash   -1988857268
     * @symbol ?_registerPlayerAttributes@Player@@IEAAXXZ
     */
    MCAPI void _registerPlayerAttributes();
    /**
     * @hash   649074236
     * @symbol ?_updateInteraction@Player@@IEAAXXZ
     */
    MCAPI void _updateInteraction();
    /**
     * @hash   -1558583362
     * @symbol ?_validateSpawnPositionAvailability@Player@@IEBA_NAEBVVec3@@PEAVBlockSource@@QEBV2@@Z
     */
    MCAPI bool _validateSpawnPositionAvailability(class Vec3 const &, class BlockSource *, class Vec3 const *const) const;
    /**
     * @hash   -1660222976
     * @symbol ?checkBed@Player@@IEAA_NPEAVBlockSource@@QEBVVec3@@@Z
     */
    MCAPI bool checkBed(class BlockSource *, class Vec3 const *const);
    /**
     * @hash   914939690
     * @symbol ?checkSpawnBlock@Player@@IEBA_NAEBVBlockSource@@@Z
     */
    MCAPI bool checkSpawnBlock(class BlockSource const &) const;
    /**
     * @hash   -1527018188
     * @symbol ?_isDangerousBlock@Player@@KA_NAEBVBlock@@_N@Z
     */
    MCAPI static bool _isDangerousBlock(class Block const &, bool);

//private:
    /**
     * @hash   635703635
     * @symbol ?_addLevels@Player@@AEAAXH@Z
     */
    MCAPI void _addLevels(int);
    /**
     * @hash   -503644948
     * @symbol ?_blockUsingShield@Player@@AEAA_NAEBVActorDamageSource@@M@Z
     */
    MCAPI bool _blockUsingShield(class ActorDamageSource const &, float);
    /**
     * @hash   -387914984
     * @symbol ?_ensureSafeSpawnPosition@Player@@AEAAXAEAVVec3@@@Z
     */
    MCAPI void _ensureSafeSpawnPosition(class Vec3 &);
    /**
     * @hash   -458271817
     * @symbol ?_findFallbackSpawnPosition@Player@@AEAA_NAEAVVec3@@V?$vector@V?$not_null@PEAVBlockSource@@@gsl@@V?$allocator@V?$not_null@PEAVBlockSource@@@gsl@@@std@@@std@@I@Z
     */
    MCAPI bool _findFallbackSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, unsigned int);
    /**
     * @hash   -1451091212
     * @symbol ?_handleCarriedItemInteractText@Player@@AEAAXXZ
     */
    MCAPI void _handleCarriedItemInteractText();
    /**
     * @hash   1830217503
     * @symbol ?_isChunkSourceLoaded@Player@@AEBA_NAEBVVec3@@AEBVBlockSource@@@Z
     */
    MCAPI bool _isChunkSourceLoaded(class Vec3 const &, class BlockSource const &) const;
    /**
     * @hash   -1131339501
     * @symbol ?_registerElytraLoopSound@Player@@AEAAXXZ
     */
    MCAPI void _registerElytraLoopSound();
    /**
     * @hash   -9005182
     * @symbol ?_sendShieldUpdatePacket@Player@@AEAAXAEBVShieldItem@@AEBVItemStack@@1W4ContainerID@@H@Z
     */
    MCAPI void _sendShieldUpdatePacket(class ShieldItem const &, class ItemStack const &, class ItemStack const &, enum ContainerID, int);

protected:

private:

};