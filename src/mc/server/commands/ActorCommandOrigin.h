#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOrigin.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class ActorCommandOrigin : public ::CommandOrigin {

public:
    // prevent constructor by default
    ActorCommandOrigin& operator=(ActorCommandOrigin const&) = delete;
    ActorCommandOrigin(ActorCommandOrigin const&)            = delete;
    ActorCommandOrigin()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getRequestId\@ActorCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getRequestId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ActorCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?getBlockPosition\@ActorCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl 4
     * @symbol ?getWorldPosition\@ActorCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl 5
     * @symbol ?getRotation\@ActorCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual std::optional<class Vec2> getRotation() const;
    /**
     * @vftbl 6
     * @symbol ?getLevel\@ActorCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level* getLevel() const;
    /**
     * @vftbl 7
     * @symbol ?getDimension\@ActorCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension* getDimension() const;
    /**
     * @vftbl 8
     * @symbol ?getEntity\@ActorCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor* getEntity() const;
    /**
     * @vftbl 9
     * @symbol ?getPermissionsLevel\@ActorCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl 10
     * @symbol
     * ?clone\@ActorCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl 18
     * @symbol ?isSelectorExpansionAllowed\@ActorCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl 23
     * @symbol ?getOriginType\@ActorCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl 29
     * @symbol ?serialize\@ActorCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl 30
     * @symbol ?isValid\@ActorCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @symbol ??0ActorCommandOrigin\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI ActorCommandOrigin(class Actor&);
    // NOLINTEND
};
