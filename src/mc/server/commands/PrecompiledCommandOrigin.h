#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOrigin.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class PrecompiledCommandOrigin : public ::CommandOrigin {

public:
    // prevent constructor by default
    PrecompiledCommandOrigin& operator=(PrecompiledCommandOrigin const&) = delete;
    PrecompiledCommandOrigin(PrecompiledCommandOrigin const&)            = delete;
    PrecompiledCommandOrigin()                                           = delete;

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
     * ?getRequestId\@PrecompiledCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getRequestId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@PrecompiledCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?getBlockPosition\@PrecompiledCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl 4
     * @symbol ?getWorldPosition\@PrecompiledCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl 5
     * @symbol ?getRotation\@PrecompiledCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual std::optional<class Vec2> getRotation() const;
    /**
     * @vftbl 6
     * @symbol ?getLevel\@PrecompiledCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level* getLevel() const;
    /**
     * @vftbl 7
     * @symbol ?getDimension\@PrecompiledCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension* getDimension() const;
    /**
     * @vftbl 8
     * @symbol ?getEntity\@PrecompiledCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor* getEntity() const;
    /**
     * @vftbl 9
     * @symbol ?getPermissionsLevel\@PrecompiledCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl 10
     * @symbol
     * ?clone\@PrecompiledCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl 13
     * @symbol ?hasChatPerms\@PrecompiledCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool hasChatPerms() const;
    /**
     * @vftbl 14
     * @symbol ?hasTellPerms\@PrecompiledCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool hasTellPerms() const;
    /**
     * @vftbl 15
     * @symbol ?canUseAbility\@PrecompiledCommandOrigin\@\@UEBA_NW4AbilitiesIndex\@\@\@Z
     */
    virtual bool canUseAbility(enum class AbilitiesIndex) const;
    /**
     * @vftbl 16
     * @symbol ?isWorldBuilder\@PrecompiledCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @vftbl 17
     * @symbol ?canUseCommandsWithoutCheatsEnabled\@PrecompiledCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vftbl 18
     * @symbol ?isSelectorExpansionAllowed\@PrecompiledCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl 23
     * @symbol ?getOriginType\@PrecompiledCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl 29
     * @symbol ?serialize\@PrecompiledCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl 30
     * @symbol ?isValid\@PrecompiledCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    // NOLINTEND
};
