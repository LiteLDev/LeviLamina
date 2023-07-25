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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCOMMANDORIGIN
public:
    ServerCommandOrigin& operator=(ServerCommandOrigin const&) = delete;
    ServerCommandOrigin(ServerCommandOrigin const&)            = delete;
    ServerCommandOrigin()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getRequestId\@ServerCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getRequestId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ServerCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?getBlockPosition\@ServerCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl 4
     * @symbol ?getWorldPosition\@ServerCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl 5
     * @symbol ?getRotation\@ServerCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @vftbl 6
     * @symbol ?getLevel\@ServerCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level* getLevel() const;
    /**
     * @vftbl 7
     * @symbol ?getDimension\@ServerCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension* getDimension() const;
    /**
     * @vftbl 8
     * @symbol ?getEntity\@ServerCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor* getEntity() const;
    /**
     * @vftbl 9
     * @symbol ?getPermissionsLevel\@ServerCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl 10
     * @symbol
     * ?clone\@ServerCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl 17
     * @symbol ?canUseCommandsWithoutCheatsEnabled\@ServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vftbl 18
     * @symbol ?isSelectorExpansionAllowed\@ServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl 23
     * @symbol ?getOriginType\@ServerCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl 29
     * @symbol ?serialize\@ServerCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl 30
     * @symbol ?isValid\@ServerCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERCOMMANDORIGIN
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerCommandOrigin();
#endif
    /**
     * @symbol
     * ??0ServerCommandOrigin\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVServerLevel\@\@W4CommandPermissionLevel\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI
    ServerCommandOrigin(std::string const&, class ServerLevel&, enum class CommandPermissionLevel, class AutomaticID<class Dimension, int>);
};
