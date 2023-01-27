/**
 * @file  PrecompiledCommandOrigin.hpp
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
 * @brief MC class PrecompiledCommandOrigin.
 *
 */
class PrecompiledCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRECOMPILEDCOMMANDORIGIN
public:
    class PrecompiledCommandOrigin& operator=(class PrecompiledCommandOrigin const &) = delete;
    PrecompiledCommandOrigin(class PrecompiledCommandOrigin const &) = delete;
    PrecompiledCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PrecompiledCommandOrigin();
    /**
     * @hash   -281914305
     * @vftbl  1
     * @symbol  ?getRequestId\@PrecompiledCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @hash   -735029042
     * @vftbl  2
     * @symbol  ?getName\@PrecompiledCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   628231195
     * @vftbl  3
     * @symbol  ?getBlockPosition\@PrecompiledCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @hash   1068645384
     * @vftbl  4
     * @symbol  ?getWorldPosition\@PrecompiledCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @hash   -619475081
     * @vftbl  5
     * @symbol  ?getRotation\@PrecompiledCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @hash   -1087991519
     * @vftbl  6
     * @symbol  ?getLevel\@PrecompiledCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @hash   580874209
     * @vftbl  7
     * @symbol  ?getDimension\@PrecompiledCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @hash   1783928091
     * @vftbl  8
     * @symbol  ?getEntity\@PrecompiledCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @hash   -1403455633
     * @vftbl  9
     * @symbol  ?getPermissionsLevel\@PrecompiledCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @hash   1402035797
     * @vftbl  10
     * @symbol  ?clone\@PrecompiledCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   -955246788
     * @vftbl  13
     * @symbol  ?hasChatPerms\@PrecompiledCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool hasChatPerms() const;
    /**
     * @hash   319497763
     * @vftbl  14
     * @symbol  ?hasTellPerms\@PrecompiledCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool hasTellPerms() const;
    /**
     * @hash   1804524234
     * @vftbl  15
     * @symbol  ?canUseAbility\@PrecompiledCommandOrigin\@\@UEBA_NW4AbilitiesIndex\@\@\@Z
     */
    virtual bool canUseAbility(enum class AbilitiesIndex) const;
    /**
     * @hash   981702238
     * @vftbl  16
     * @symbol  ?isWorldBuilder\@PrecompiledCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isWorldBuilder() const;
    /**
     * @hash   806162531
     * @vftbl  17
     * @symbol  ?canUseCommandsWithoutCheatsEnabled\@PrecompiledCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @hash   -990225859
     * @vftbl  18
     * @symbol  ?isSelectorExpansionAllowed\@PrecompiledCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @hash   -655768060
     * @vftbl  23
     * @symbol  ?getOriginType\@PrecompiledCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @hash   368047195
     * @vftbl  29
     * @symbol  ?serialize\@PrecompiledCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @hash   -272517699
     * @vftbl  30
     * @symbol  ?isValid\@PrecompiledCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;

};