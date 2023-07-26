#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/CommandOrigin.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class VirtualCommandOrigin : public ::CommandOrigin {

public:
    // prevent constructor by default
    VirtualCommandOrigin& operator=(VirtualCommandOrigin const&) = delete;
    VirtualCommandOrigin(VirtualCommandOrigin const&)            = delete;
    VirtualCommandOrigin()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getRequestId\@VirtualCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getRequestId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@VirtualCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getBlockPosition\@VirtualCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getWorldPosition\@VirtualCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getRotation\@VirtualCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getLevel\@VirtualCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level* getLevel() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getDimension\@VirtualCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension* getDimension() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getEntity\@VirtualCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor* getEntity() const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?getPermissionsLevel\@VirtualCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?clone\@VirtualCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const; // NOLINT
    /**
     * @vftbl 13
     * @symbol ?hasChatPerms\@VirtualCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool hasChatPerms() const; // NOLINT
    /**
     * @vftbl 14
     * @symbol ?hasTellPerms\@VirtualCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool hasTellPerms() const; // NOLINT
    /**
     * @vftbl 15
     * @symbol ?canUseAbility\@VirtualCommandOrigin\@\@UEBA_NW4AbilitiesIndex\@\@\@Z
     */
    virtual bool canUseAbility(enum class AbilitiesIndex) const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?canUseCommandsWithoutCheatsEnabled\@VirtualCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?isSelectorExpansionAllowed\@VirtualCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const; // NOLINT
    /**
     * @vftbl 19
     * @symbol ?getSourceId\@VirtualCommandOrigin\@\@UEBAAEBVNetworkIdentifier\@\@XZ
     */
    virtual class NetworkIdentifier const& getSourceId() const; // NOLINT
    /**
     * @vftbl 21
     * @symbol ?getOutputReceiver\@VirtualCommandOrigin\@\@UEBAAEBVCommandOrigin\@\@XZ
     */
    virtual class CommandOrigin const& getOutputReceiver() const; // NOLINT
    /**
     * @vftbl 22
     * @symbol ?getIdentity\@VirtualCommandOrigin\@\@UEBA?AUCommandOriginIdentity\@\@XZ
     */
    virtual struct CommandOriginIdentity getIdentity() const; // NOLINT
    /**
     * @vftbl 23
     * @symbol ?getOriginType\@VirtualCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const; // NOLINT
    /**
     * @vftbl 27
     * @symbol ?updateValues\@VirtualCommandOrigin\@\@UEAAXXZ
     */
    virtual void updateValues(); // NOLINT
    /**
     * @vftbl 28
     * @symbol ?getExecutePosition\@VirtualCommandOrigin\@\@UEBA?BVVec3\@\@HAEBVCommandPositionFloat\@\@\@Z
     */
    virtual class Vec3 const getExecutePosition(int, class CommandPositionFloat const&) const; // NOLINT
    /**
     * @vftbl 29
     * @symbol ?serialize\@VirtualCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const; // NOLINT
    /**
     * @vftbl 30
     * @symbol ?isValid\@VirtualCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const; // NOLINT
    /**
     * @symbol ??0VirtualCommandOrigin\@\@QEAA\@AEBVCommandOrigin\@\@0AEBVCommandPositionFloat\@\@H\@Z
     */
    MCAPI VirtualCommandOrigin(
        class CommandOrigin const&,
        class CommandOrigin const&,
        class CommandPositionFloat const&,
        int
    ); // NOLINT
    /**
     * @symbol
     * ??0VirtualCommandOrigin\@\@QEAA\@V?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@0AEBVCommandPositionFloat\@\@H\@Z
     */
    MCAPI VirtualCommandOrigin(
        std::unique_ptr<class CommandOrigin>,
        std::unique_ptr<class CommandOrigin>,
        class CommandPositionFloat const&,
        int
    ); // NOLINT
    /**
     * @symbol ??0VirtualCommandOrigin\@\@QEAA\@AEBVCommandOrigin\@\@AEAVActor\@\@AEBVCommandPositionFloat\@\@H\@Z
     */
    MCAPI
    VirtualCommandOrigin(class CommandOrigin const&, class Actor&, class CommandPositionFloat const&, int); // NOLINT
    /**
     * @symbol ?getOrigin\@VirtualCommandOrigin\@\@QEBAPEAVCommandOrigin\@\@XZ
     */
    MCAPI class CommandOrigin* getOrigin() const; // NOLINT
    /**
     * @symbol
     * ?load\@VirtualCommandOrigin\@\@SA?AV?$unique_ptr\@VVirtualCommandOrigin\@\@U?$default_delete\@VVirtualCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVServerLevel\@\@\@Z
     */
    MCAPI static std::unique_ptr<class VirtualCommandOrigin>
    load(class CompoundTag const&, class ServerLevel&); // NOLINT
};
