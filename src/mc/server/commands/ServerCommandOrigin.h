#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/CommandOrigin.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class ServerCommandOrigin : public ::CommandOrigin {

public:
    // prevent constructor by default
    ServerCommandOrigin& operator=(ServerCommandOrigin const&) = delete;
    ServerCommandOrigin(ServerCommandOrigin const&)            = delete;
    ServerCommandOrigin()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getRequestId\@ServerCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getRequestId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ServerCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getBlockPosition\@ServerCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getWorldPosition\@ServerCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getRotation\@ServerCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getLevel\@ServerCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level* getLevel() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getDimension\@ServerCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension* getDimension() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getEntity\@ServerCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor* getEntity() const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?getPermissionsLevel\@ServerCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?clone\@ServerCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?canUseCommandsWithoutCheatsEnabled\@ServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?isSelectorExpansionAllowed\@ServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const; // NOLINT
    /**
     * @vftbl 23
     * @symbol ?getOriginType\@ServerCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const; // NOLINT
    /**
     * @vftbl 29
     * @symbol ?serialize\@ServerCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const; // NOLINT
    /**
     * @vftbl 30
     * @symbol ?isValid\@ServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERCOMMANDORIGIN
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerCommandOrigin(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ServerCommandOrigin\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVServerLevel\@\@W4CommandPermissionLevel\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI
    ServerCommandOrigin(std::string const&, class ServerLevel&, enum class CommandPermissionLevel, class AutomaticID<class Dimension, int>); // NOLINT
};
